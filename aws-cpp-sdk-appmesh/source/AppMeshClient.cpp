﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/core/utils/Outcome.h>
#include <aws/core/auth/AWSAuthSigner.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/RetryStrategy.h>
#include <aws/core/http/HttpClient.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/auth/AWSCredentialsProviderChain.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/threading/Executor.h>
#include <aws/core/utils/DNS.h>
#include <aws/core/utils/logging/LogMacros.h>

#include <aws/appmesh/AppMeshClient.h>
#include <aws/appmesh/AppMeshEndpoint.h>
#include <aws/appmesh/AppMeshErrorMarshaller.h>
#include <aws/appmesh/model/CreateMeshRequest.h>
#include <aws/appmesh/model/CreateRouteRequest.h>
#include <aws/appmesh/model/CreateVirtualNodeRequest.h>
#include <aws/appmesh/model/CreateVirtualRouterRequest.h>
#include <aws/appmesh/model/DeleteMeshRequest.h>
#include <aws/appmesh/model/DeleteRouteRequest.h>
#include <aws/appmesh/model/DeleteVirtualNodeRequest.h>
#include <aws/appmesh/model/DeleteVirtualRouterRequest.h>
#include <aws/appmesh/model/DescribeMeshRequest.h>
#include <aws/appmesh/model/DescribeRouteRequest.h>
#include <aws/appmesh/model/DescribeVirtualNodeRequest.h>
#include <aws/appmesh/model/DescribeVirtualRouterRequest.h>
#include <aws/appmesh/model/ListMeshesRequest.h>
#include <aws/appmesh/model/ListRoutesRequest.h>
#include <aws/appmesh/model/ListVirtualNodesRequest.h>
#include <aws/appmesh/model/ListVirtualRoutersRequest.h>
#include <aws/appmesh/model/UpdateRouteRequest.h>
#include <aws/appmesh/model/UpdateVirtualNodeRequest.h>
#include <aws/appmesh/model/UpdateVirtualRouterRequest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Client;
using namespace Aws::AppMesh;
using namespace Aws::AppMesh::Model;
using namespace Aws::Http;
using namespace Aws::Utils::Json;

static const char* SERVICE_NAME = "appmesh";
static const char* ALLOCATION_TAG = "AppMeshClient";


AppMeshClient::AppMeshClient(const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<DefaultAWSCredentialsProviderChain>(ALLOCATION_TAG),
        SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppMeshClient::AppMeshClient(const AWSCredentials& credentials, const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, Aws::MakeShared<SimpleAWSCredentialsProvider>(ALLOCATION_TAG, credentials),
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppMeshClient::AppMeshClient(const std::shared_ptr<AWSCredentialsProvider>& credentialsProvider,
  const Client::ClientConfiguration& clientConfiguration) :
  BASECLASS(clientConfiguration,
    Aws::MakeShared<AWSAuthV4Signer>(ALLOCATION_TAG, credentialsProvider,
         SERVICE_NAME, clientConfiguration.region),
    Aws::MakeShared<AppMeshErrorMarshaller>(ALLOCATION_TAG)),
    m_executor(clientConfiguration.executor)
{
  init(clientConfiguration);
}

AppMeshClient::~AppMeshClient()
{
}

void AppMeshClient::init(const ClientConfiguration& config)
{
  m_configScheme = SchemeMapper::ToString(config.scheme);
  if (config.endpointOverride.empty())
  {
      m_uri = m_configScheme + "://" + AppMeshEndpoint::ForRegion(config.region, config.useDualStack);
  }
  else
  {
      OverrideEndpoint(config.endpointOverride);
  }
}

void AppMeshClient::OverrideEndpoint(const Aws::String& endpoint)
{
  if (endpoint.compare(0, 7, "http://") == 0 || endpoint.compare(0, 8, "https://") == 0)
  {
      m_uri = endpoint;
  }
  else
  {
      m_uri = m_configScheme + "://" + endpoint;
  }
}
CreateMeshOutcome AppMeshClient::CreateMesh(const CreateMeshRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateMeshOutcome(CreateMeshResult(outcome.GetResult()));
  }
  else
  {
    return CreateMeshOutcome(outcome.GetError());
  }
}

CreateMeshOutcomeCallable AppMeshClient::CreateMeshCallable(const CreateMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateMeshAsync(const CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateMeshAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateMeshAsyncHelper(const CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateMesh(request), context);
}

CreateRouteOutcome AppMeshClient::CreateRoute(const CreateRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouter/";
  ss << request.GetVirtualRouterName();
  ss << "/routes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateRouteOutcome(CreateRouteResult(outcome.GetResult()));
  }
  else
  {
    return CreateRouteOutcome(outcome.GetError());
  }
}

CreateRouteOutcomeCallable AppMeshClient::CreateRouteCallable(const CreateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateRouteAsync(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateRouteAsyncHelper(const CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateRoute(request), context);
}

CreateVirtualNodeOutcome AppMeshClient::CreateVirtualNode(const CreateVirtualNodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualNodes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVirtualNodeOutcome(CreateVirtualNodeResult(outcome.GetResult()));
  }
  else
  {
    return CreateVirtualNodeOutcome(outcome.GetError());
  }
}

CreateVirtualNodeOutcomeCallable AppMeshClient::CreateVirtualNodeCallable(const CreateVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateVirtualNodeAsync(const CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVirtualNodeAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateVirtualNodeAsyncHelper(const CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVirtualNode(request), context);
}

CreateVirtualRouterOutcome AppMeshClient::CreateVirtualRouter(const CreateVirtualRouterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouters";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return CreateVirtualRouterOutcome(CreateVirtualRouterResult(outcome.GetResult()));
  }
  else
  {
    return CreateVirtualRouterOutcome(outcome.GetError());
  }
}

CreateVirtualRouterOutcomeCallable AppMeshClient::CreateVirtualRouterCallable(const CreateVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< CreateVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->CreateVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::CreateVirtualRouterAsync(const CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->CreateVirtualRouterAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::CreateVirtualRouterAsyncHelper(const CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, CreateVirtualRouter(request), context);
}

DeleteMeshOutcome AppMeshClient::DeleteMesh(const DeleteMeshRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteMeshOutcome(DeleteMeshResult(outcome.GetResult()));
  }
  else
  {
    return DeleteMeshOutcome(outcome.GetError());
  }
}

DeleteMeshOutcomeCallable AppMeshClient::DeleteMeshCallable(const DeleteMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteMeshAsync(const DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteMeshAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteMeshAsyncHelper(const DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteMesh(request), context);
}

DeleteRouteOutcome AppMeshClient::DeleteRoute(const DeleteRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouter/";
  ss << request.GetVirtualRouterName();
  ss << "/routes/";
  ss << request.GetRouteName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteRouteOutcome(DeleteRouteResult(outcome.GetResult()));
  }
  else
  {
    return DeleteRouteOutcome(outcome.GetError());
  }
}

DeleteRouteOutcomeCallable AppMeshClient::DeleteRouteCallable(const DeleteRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteRouteAsync(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteRouteAsyncHelper(const DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteRoute(request), context);
}

DeleteVirtualNodeOutcome AppMeshClient::DeleteVirtualNode(const DeleteVirtualNodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualNodes/";
  ss << request.GetVirtualNodeName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVirtualNodeOutcome(DeleteVirtualNodeResult(outcome.GetResult()));
  }
  else
  {
    return DeleteVirtualNodeOutcome(outcome.GetError());
  }
}

DeleteVirtualNodeOutcomeCallable AppMeshClient::DeleteVirtualNodeCallable(const DeleteVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteVirtualNodeAsync(const DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVirtualNodeAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteVirtualNodeAsyncHelper(const DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVirtualNode(request), context);
}

DeleteVirtualRouterOutcome AppMeshClient::DeleteVirtualRouter(const DeleteVirtualRouterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouters/";
  ss << request.GetVirtualRouterName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_DELETE, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DeleteVirtualRouterOutcome(DeleteVirtualRouterResult(outcome.GetResult()));
  }
  else
  {
    return DeleteVirtualRouterOutcome(outcome.GetError());
  }
}

DeleteVirtualRouterOutcomeCallable AppMeshClient::DeleteVirtualRouterCallable(const DeleteVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DeleteVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DeleteVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DeleteVirtualRouterAsync(const DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DeleteVirtualRouterAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DeleteVirtualRouterAsyncHelper(const DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DeleteVirtualRouter(request), context);
}

DescribeMeshOutcome AppMeshClient::DescribeMesh(const DescribeMeshRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeMeshOutcome(DescribeMeshResult(outcome.GetResult()));
  }
  else
  {
    return DescribeMeshOutcome(outcome.GetError());
  }
}

DescribeMeshOutcomeCallable AppMeshClient::DescribeMeshCallable(const DescribeMeshRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeMeshOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeMesh(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeMeshAsync(const DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeMeshAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeMeshAsyncHelper(const DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeMesh(request), context);
}

DescribeRouteOutcome AppMeshClient::DescribeRoute(const DescribeRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouter/";
  ss << request.GetVirtualRouterName();
  ss << "/routes/";
  ss << request.GetRouteName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeRouteOutcome(DescribeRouteResult(outcome.GetResult()));
  }
  else
  {
    return DescribeRouteOutcome(outcome.GetError());
  }
}

DescribeRouteOutcomeCallable AppMeshClient::DescribeRouteCallable(const DescribeRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeRouteAsync(const DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeRouteAsyncHelper(const DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeRoute(request), context);
}

DescribeVirtualNodeOutcome AppMeshClient::DescribeVirtualNode(const DescribeVirtualNodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualNodes/";
  ss << request.GetVirtualNodeName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeVirtualNodeOutcome(DescribeVirtualNodeResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVirtualNodeOutcome(outcome.GetError());
  }
}

DescribeVirtualNodeOutcomeCallable AppMeshClient::DescribeVirtualNodeCallable(const DescribeVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeVirtualNodeAsync(const DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVirtualNodeAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeVirtualNodeAsyncHelper(const DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVirtualNode(request), context);
}

DescribeVirtualRouterOutcome AppMeshClient::DescribeVirtualRouter(const DescribeVirtualRouterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouters/";
  ss << request.GetVirtualRouterName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return DescribeVirtualRouterOutcome(DescribeVirtualRouterResult(outcome.GetResult()));
  }
  else
  {
    return DescribeVirtualRouterOutcome(outcome.GetError());
  }
}

DescribeVirtualRouterOutcomeCallable AppMeshClient::DescribeVirtualRouterCallable(const DescribeVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< DescribeVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->DescribeVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::DescribeVirtualRouterAsync(const DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->DescribeVirtualRouterAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::DescribeVirtualRouterAsyncHelper(const DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, DescribeVirtualRouter(request), context);
}

ListMeshesOutcome AppMeshClient::ListMeshes(const ListMeshesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListMeshesOutcome(ListMeshesResult(outcome.GetResult()));
  }
  else
  {
    return ListMeshesOutcome(outcome.GetError());
  }
}

ListMeshesOutcomeCallable AppMeshClient::ListMeshesCallable(const ListMeshesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListMeshesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListMeshes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListMeshesAsync(const ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListMeshesAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListMeshesAsyncHelper(const ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListMeshes(request), context);
}

ListRoutesOutcome AppMeshClient::ListRoutes(const ListRoutesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouter/";
  ss << request.GetVirtualRouterName();
  ss << "/routes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListRoutesOutcome(ListRoutesResult(outcome.GetResult()));
  }
  else
  {
    return ListRoutesOutcome(outcome.GetError());
  }
}

ListRoutesOutcomeCallable AppMeshClient::ListRoutesCallable(const ListRoutesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListRoutesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListRoutes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListRoutesAsync(const ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListRoutesAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListRoutesAsyncHelper(const ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListRoutes(request), context);
}

ListVirtualNodesOutcome AppMeshClient::ListVirtualNodes(const ListVirtualNodesRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualNodes";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVirtualNodesOutcome(ListVirtualNodesResult(outcome.GetResult()));
  }
  else
  {
    return ListVirtualNodesOutcome(outcome.GetError());
  }
}

ListVirtualNodesOutcomeCallable AppMeshClient::ListVirtualNodesCallable(const ListVirtualNodesRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualNodesOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualNodes(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListVirtualNodesAsync(const ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVirtualNodesAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListVirtualNodesAsyncHelper(const ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVirtualNodes(request), context);
}

ListVirtualRoutersOutcome AppMeshClient::ListVirtualRouters(const ListVirtualRoutersRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouters";
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_GET, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return ListVirtualRoutersOutcome(ListVirtualRoutersResult(outcome.GetResult()));
  }
  else
  {
    return ListVirtualRoutersOutcome(outcome.GetError());
  }
}

ListVirtualRoutersOutcomeCallable AppMeshClient::ListVirtualRoutersCallable(const ListVirtualRoutersRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< ListVirtualRoutersOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->ListVirtualRouters(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::ListVirtualRoutersAsync(const ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->ListVirtualRoutersAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::ListVirtualRoutersAsyncHelper(const ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, ListVirtualRouters(request), context);
}

UpdateRouteOutcome AppMeshClient::UpdateRoute(const UpdateRouteRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouter/";
  ss << request.GetVirtualRouterName();
  ss << "/routes/";
  ss << request.GetRouteName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateRouteOutcome(UpdateRouteResult(outcome.GetResult()));
  }
  else
  {
    return UpdateRouteOutcome(outcome.GetError());
  }
}

UpdateRouteOutcomeCallable AppMeshClient::UpdateRouteCallable(const UpdateRouteRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateRouteOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateRoute(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UpdateRouteAsync(const UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateRouteAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UpdateRouteAsyncHelper(const UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateRoute(request), context);
}

UpdateVirtualNodeOutcome AppMeshClient::UpdateVirtualNode(const UpdateVirtualNodeRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualNodes/";
  ss << request.GetVirtualNodeName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVirtualNodeOutcome(UpdateVirtualNodeResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVirtualNodeOutcome(outcome.GetError());
  }
}

UpdateVirtualNodeOutcomeCallable AppMeshClient::UpdateVirtualNodeCallable(const UpdateVirtualNodeRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualNodeOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualNode(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UpdateVirtualNodeAsync(const UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVirtualNodeAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UpdateVirtualNodeAsyncHelper(const UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVirtualNode(request), context);
}

UpdateVirtualRouterOutcome AppMeshClient::UpdateVirtualRouter(const UpdateVirtualRouterRequest& request) const
{
  Aws::Http::URI uri = m_uri;
  Aws::StringStream ss;
  ss << "/meshes/";
  ss << request.GetMeshName();
  ss << "/virtualRouters/";
  ss << request.GetVirtualRouterName();
  uri.SetPath(uri.GetPath() + ss.str());
  JsonOutcome outcome = MakeRequest(uri, request, HttpMethod::HTTP_PUT, Aws::Auth::SIGV4_SIGNER);
  if(outcome.IsSuccess())
  {
    return UpdateVirtualRouterOutcome(UpdateVirtualRouterResult(outcome.GetResult()));
  }
  else
  {
    return UpdateVirtualRouterOutcome(outcome.GetError());
  }
}

UpdateVirtualRouterOutcomeCallable AppMeshClient::UpdateVirtualRouterCallable(const UpdateVirtualRouterRequest& request) const
{
  auto task = Aws::MakeShared< std::packaged_task< UpdateVirtualRouterOutcome() > >(ALLOCATION_TAG, [this, request](){ return this->UpdateVirtualRouter(request); } );
  auto packagedFunction = [task]() { (*task)(); };
  m_executor->Submit(packagedFunction);
  return task->get_future();
}

void AppMeshClient::UpdateVirtualRouterAsync(const UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  m_executor->Submit( [this, request, handler, context](){ this->UpdateVirtualRouterAsyncHelper( request, handler, context ); } );
}

void AppMeshClient::UpdateVirtualRouterAsyncHelper(const UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const
{
  handler(this, request, UpdateVirtualRouter(request), context);
}

