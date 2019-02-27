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

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/appmesh/AppMeshErrors.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/ClientConfiguration.h>
#include <aws/core/client/AWSClient.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/appmesh/model/CreateMeshResult.h>
#include <aws/appmesh/model/CreateRouteResult.h>
#include <aws/appmesh/model/CreateVirtualNodeResult.h>
#include <aws/appmesh/model/CreateVirtualRouterResult.h>
#include <aws/appmesh/model/DeleteMeshResult.h>
#include <aws/appmesh/model/DeleteRouteResult.h>
#include <aws/appmesh/model/DeleteVirtualNodeResult.h>
#include <aws/appmesh/model/DeleteVirtualRouterResult.h>
#include <aws/appmesh/model/DescribeMeshResult.h>
#include <aws/appmesh/model/DescribeRouteResult.h>
#include <aws/appmesh/model/DescribeVirtualNodeResult.h>
#include <aws/appmesh/model/DescribeVirtualRouterResult.h>
#include <aws/appmesh/model/ListMeshesResult.h>
#include <aws/appmesh/model/ListRoutesResult.h>
#include <aws/appmesh/model/ListVirtualNodesResult.h>
#include <aws/appmesh/model/ListVirtualRoutersResult.h>
#include <aws/appmesh/model/UpdateRouteResult.h>
#include <aws/appmesh/model/UpdateVirtualNodeResult.h>
#include <aws/appmesh/model/UpdateVirtualRouterResult.h>
#include <aws/core/client/AsyncCallerContext.h>
#include <aws/core/http/HttpTypes.h>
#include <future>
#include <functional>

namespace Aws
{

namespace Http
{
  class HttpClient;
  class HttpClientFactory;
} // namespace Http

namespace Utils
{
  template< typename R, typename E> class Outcome;

namespace Threading
{
  class Executor;
} // namespace Threading
} // namespace Utils

namespace Auth
{
  class AWSCredentials;
  class AWSCredentialsProvider;
} // namespace Auth

namespace Client
{
  class RetryStrategy;
} // namespace Client

namespace AppMesh
{

namespace Model
{
        class CreateMeshRequest;
        class CreateRouteRequest;
        class CreateVirtualNodeRequest;
        class CreateVirtualRouterRequest;
        class DeleteMeshRequest;
        class DeleteRouteRequest;
        class DeleteVirtualNodeRequest;
        class DeleteVirtualRouterRequest;
        class DescribeMeshRequest;
        class DescribeRouteRequest;
        class DescribeVirtualNodeRequest;
        class DescribeVirtualRouterRequest;
        class ListMeshesRequest;
        class ListRoutesRequest;
        class ListVirtualNodesRequest;
        class ListVirtualRoutersRequest;
        class UpdateRouteRequest;
        class UpdateVirtualNodeRequest;
        class UpdateVirtualRouterRequest;

        typedef Aws::Utils::Outcome<CreateMeshResult, Aws::Client::AWSError<AppMeshErrors>> CreateMeshOutcome;
        typedef Aws::Utils::Outcome<CreateRouteResult, Aws::Client::AWSError<AppMeshErrors>> CreateRouteOutcome;
        typedef Aws::Utils::Outcome<CreateVirtualNodeResult, Aws::Client::AWSError<AppMeshErrors>> CreateVirtualNodeOutcome;
        typedef Aws::Utils::Outcome<CreateVirtualRouterResult, Aws::Client::AWSError<AppMeshErrors>> CreateVirtualRouterOutcome;
        typedef Aws::Utils::Outcome<DeleteMeshResult, Aws::Client::AWSError<AppMeshErrors>> DeleteMeshOutcome;
        typedef Aws::Utils::Outcome<DeleteRouteResult, Aws::Client::AWSError<AppMeshErrors>> DeleteRouteOutcome;
        typedef Aws::Utils::Outcome<DeleteVirtualNodeResult, Aws::Client::AWSError<AppMeshErrors>> DeleteVirtualNodeOutcome;
        typedef Aws::Utils::Outcome<DeleteVirtualRouterResult, Aws::Client::AWSError<AppMeshErrors>> DeleteVirtualRouterOutcome;
        typedef Aws::Utils::Outcome<DescribeMeshResult, Aws::Client::AWSError<AppMeshErrors>> DescribeMeshOutcome;
        typedef Aws::Utils::Outcome<DescribeRouteResult, Aws::Client::AWSError<AppMeshErrors>> DescribeRouteOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualNodeResult, Aws::Client::AWSError<AppMeshErrors>> DescribeVirtualNodeOutcome;
        typedef Aws::Utils::Outcome<DescribeVirtualRouterResult, Aws::Client::AWSError<AppMeshErrors>> DescribeVirtualRouterOutcome;
        typedef Aws::Utils::Outcome<ListMeshesResult, Aws::Client::AWSError<AppMeshErrors>> ListMeshesOutcome;
        typedef Aws::Utils::Outcome<ListRoutesResult, Aws::Client::AWSError<AppMeshErrors>> ListRoutesOutcome;
        typedef Aws::Utils::Outcome<ListVirtualNodesResult, Aws::Client::AWSError<AppMeshErrors>> ListVirtualNodesOutcome;
        typedef Aws::Utils::Outcome<ListVirtualRoutersResult, Aws::Client::AWSError<AppMeshErrors>> ListVirtualRoutersOutcome;
        typedef Aws::Utils::Outcome<UpdateRouteResult, Aws::Client::AWSError<AppMeshErrors>> UpdateRouteOutcome;
        typedef Aws::Utils::Outcome<UpdateVirtualNodeResult, Aws::Client::AWSError<AppMeshErrors>> UpdateVirtualNodeOutcome;
        typedef Aws::Utils::Outcome<UpdateVirtualRouterResult, Aws::Client::AWSError<AppMeshErrors>> UpdateVirtualRouterOutcome;

        typedef std::future<CreateMeshOutcome> CreateMeshOutcomeCallable;
        typedef std::future<CreateRouteOutcome> CreateRouteOutcomeCallable;
        typedef std::future<CreateVirtualNodeOutcome> CreateVirtualNodeOutcomeCallable;
        typedef std::future<CreateVirtualRouterOutcome> CreateVirtualRouterOutcomeCallable;
        typedef std::future<DeleteMeshOutcome> DeleteMeshOutcomeCallable;
        typedef std::future<DeleteRouteOutcome> DeleteRouteOutcomeCallable;
        typedef std::future<DeleteVirtualNodeOutcome> DeleteVirtualNodeOutcomeCallable;
        typedef std::future<DeleteVirtualRouterOutcome> DeleteVirtualRouterOutcomeCallable;
        typedef std::future<DescribeMeshOutcome> DescribeMeshOutcomeCallable;
        typedef std::future<DescribeRouteOutcome> DescribeRouteOutcomeCallable;
        typedef std::future<DescribeVirtualNodeOutcome> DescribeVirtualNodeOutcomeCallable;
        typedef std::future<DescribeVirtualRouterOutcome> DescribeVirtualRouterOutcomeCallable;
        typedef std::future<ListMeshesOutcome> ListMeshesOutcomeCallable;
        typedef std::future<ListRoutesOutcome> ListRoutesOutcomeCallable;
        typedef std::future<ListVirtualNodesOutcome> ListVirtualNodesOutcomeCallable;
        typedef std::future<ListVirtualRoutersOutcome> ListVirtualRoutersOutcomeCallable;
        typedef std::future<UpdateRouteOutcome> UpdateRouteOutcomeCallable;
        typedef std::future<UpdateVirtualNodeOutcome> UpdateVirtualNodeOutcomeCallable;
        typedef std::future<UpdateVirtualRouterOutcome> UpdateVirtualRouterOutcomeCallable;
} // namespace Model

  class AppMeshClient;

    typedef std::function<void(const AppMeshClient*, const Model::CreateMeshRequest&, const Model::CreateMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateRouteRequest&, const Model::CreateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateVirtualNodeRequest&, const Model::CreateVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::CreateVirtualRouterRequest&, const Model::CreateVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > CreateVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteMeshRequest&, const Model::DeleteMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteRouteRequest&, const Model::DeleteRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteVirtualNodeRequest&, const Model::DeleteVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DeleteVirtualRouterRequest&, const Model::DeleteVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DeleteVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeMeshRequest&, const Model::DescribeMeshOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeMeshResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeRouteRequest&, const Model::DescribeRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeVirtualNodeRequest&, const Model::DescribeVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::DescribeVirtualRouterRequest&, const Model::DescribeVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > DescribeVirtualRouterResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListMeshesRequest&, const Model::ListMeshesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListMeshesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListRoutesRequest&, const Model::ListRoutesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListRoutesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListVirtualNodesRequest&, const Model::ListVirtualNodesOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualNodesResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::ListVirtualRoutersRequest&, const Model::ListVirtualRoutersOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > ListVirtualRoutersResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateRouteRequest&, const Model::UpdateRouteOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateRouteResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateVirtualNodeRequest&, const Model::UpdateVirtualNodeOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualNodeResponseReceivedHandler;
    typedef std::function<void(const AppMeshClient*, const Model::UpdateVirtualRouterRequest&, const Model::UpdateVirtualRouterOutcome&, const std::shared_ptr<const Aws::Client::AsyncCallerContext>&) > UpdateVirtualRouterResponseReceivedHandler;

  /**
   * <p>AWS App Mesh is a service mesh based on the Envoy proxy that makes it easy to
   * monitor and
         control containerized microservices. App Mesh standardizes
   * how your microservices
         communicate, giving you end-to-end visibility
   * and helping to ensure high-availability for
         your applications.</p>
    
   * <p>App Mesh gives you consistent visibility and network traffic controls for
   * every
         microservice in an application. You can use App Mesh with Amazon
   * ECS
         (using the Amazon EC2 launch type), Amazon EKS, and Kubernetes on
   * AWS.</p>
         <note>
            <p>App Mesh supports containerized
   * microservice applications that use service discovery
            naming for
   * their components. To use App Mesh, you must have a containerized application
   
   * running on Amazon EC2 instances, hosted in either Amazon ECS, Amazon EKS, or
   * Kubernetes on AWS. For
            more information about service discovery on
   * Amazon ECS, see <a
   * href="http://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-discovery.html">Service
   * Discovery</a> in the
               <i>Amazon Elastic Container Service
   * Developer Guide</i>. Kubernetes <code>kube-dns</code> is supported.
           
   * For more information, see <a
   * href="https://kubernetes.io/docs/concepts/services-networking/dns-pod-service/">DNS

   *  for Services and Pods</a> in the Kubernetes documentation.</p>
         </note>
   */
  class AWS_APPMESH_API AppMeshClient : public Aws::Client::AWSJsonClient
  {
    public:
      typedef Aws::Client::AWSJsonClient BASECLASS;

       /**
        * Initializes client to use DefaultCredentialProviderChain, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppMeshClient(const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use SimpleAWSCredentialsProvider, with default http client factory, and optional client config. If client config
        * is not specified, it will be initialized to default values.
        */
        AppMeshClient(const Aws::Auth::AWSCredentials& credentials, const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

       /**
        * Initializes client to use specified credentials provider with specified client config. If http client factory is not supplied,
        * the default http client factory will be used
        */
        AppMeshClient(const std::shared_ptr<Aws::Auth::AWSCredentialsProvider>& credentialsProvider,
            const Aws::Client::ClientConfiguration& clientConfiguration = Aws::Client::ClientConfiguration());

        virtual ~AppMeshClient();

        inline virtual const char* GetServiceClientName() const override { return "App Mesh"; }


        /**
         * <p>Creates a new service mesh. A service mesh is a logical boundary for network
         * traffic
         between the services that reside within it.</p>
        
         * <p>After you create your service mesh, you can create virtual nodes, virtual
         * routers, and
         routes to distribute traffic between the applications in
         * your mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateMeshOutcome CreateMesh(const Model::CreateMeshRequest& request) const;

        /**
         * <p>Creates a new service mesh. A service mesh is a logical boundary for network
         * traffic
         between the services that reside within it.</p>
        
         * <p>After you create your service mesh, you can create virtual nodes, virtual
         * routers, and
         routes to distribute traffic between the applications in
         * your mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateMesh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateMeshOutcomeCallable CreateMeshCallable(const Model::CreateMeshRequest& request) const;

        /**
         * <p>Creates a new service mesh. A service mesh is a logical boundary for network
         * traffic
         between the services that reside within it.</p>
        
         * <p>After you create your service mesh, you can create virtual nodes, virtual
         * routers, and
         routes to distribute traffic between the applications in
         * your mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateMesh">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateMeshAsync(const Model::CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new route that is associated with a virtual router.</p>
        
         * <p>You can use the <code>prefix</code> parameter in your route specification for
         * path-based
         routing of requests. For example, if your virtual router
         * service name is
            <code>my-service.local</code>, and you want the
         * route to match requests to
            <code>my-service.local/metrics</code>,
         * then your prefix should be
         <code>/metrics</code>.</p>
         <p>If
         * your route matches a request, you can distribute traffic to one or more target
 
         * virtual nodes with relative weighting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateRouteOutcome CreateRoute(const Model::CreateRouteRequest& request) const;

        /**
         * <p>Creates a new route that is associated with a virtual router.</p>
        
         * <p>You can use the <code>prefix</code> parameter in your route specification for
         * path-based
         routing of requests. For example, if your virtual router
         * service name is
            <code>my-service.local</code>, and you want the
         * route to match requests to
            <code>my-service.local/metrics</code>,
         * then your prefix should be
         <code>/metrics</code>.</p>
         <p>If
         * your route matches a request, you can distribute traffic to one or more target
 
         * virtual nodes with relative weighting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateRouteOutcomeCallable CreateRouteCallable(const Model::CreateRouteRequest& request) const;

        /**
         * <p>Creates a new route that is associated with a virtual router.</p>
        
         * <p>You can use the <code>prefix</code> parameter in your route specification for
         * path-based
         routing of requests. For example, if your virtual router
         * service name is
            <code>my-service.local</code>, and you want the
         * route to match requests to
            <code>my-service.local/metrics</code>,
         * then your prefix should be
         <code>/metrics</code>.</p>
         <p>If
         * your route matches a request, you can distribute traffic to one or more target
 
         * virtual nodes with relative weighting.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateRouteAsync(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new virtual node within a service mesh.</p>
         <p>A virtual
         * node acts as logical pointer to a particular task group, such as an Amazon ECS
 
         * service or a Kubernetes deployment. When you create a virtual node, you must
         * specify the
         DNS service discovery name for your task group.</p>
       
         * <p>Any inbound traffic that your virtual node expects should be specified as a
 
         * <code>listener</code>. Any outbound traffic that your virtual node expects to
         * reach
         should be specified as a <code>backend</code>.</p>
        
         * <p>The response metadata for your new virtual node contains the <code>arn</code>
         * that is
         associated with the virtual node. Set this value (either the
         * full ARN or the truncated
         resource name, for example,
         * <code>mesh/default/virtualNode/simpleapp</code>, as the
           
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> environment variable for your task
         * group's Envoy
         proxy container in your task definition or pod spec. This
         * is then mapped to the
            <code>node.id</code> and
         * <code>node.cluster</code> Envoy parameters.</p>
         <note>
           
         * <p>If you require your Envoy stats or tracing to use a different name, you can
         * override
            the <code>node.cluster</code> value that is set by
        
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> with the
              
         * <code>APPMESH_VIRTUAL_NODE_CLUSTER</code> environment variable.</p>
        
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualNodeOutcome CreateVirtualNode(const Model::CreateVirtualNodeRequest& request) const;

        /**
         * <p>Creates a new virtual node within a service mesh.</p>
         <p>A virtual
         * node acts as logical pointer to a particular task group, such as an Amazon ECS
 
         * service or a Kubernetes deployment. When you create a virtual node, you must
         * specify the
         DNS service discovery name for your task group.</p>
       
         * <p>Any inbound traffic that your virtual node expects should be specified as a
 
         * <code>listener</code>. Any outbound traffic that your virtual node expects to
         * reach
         should be specified as a <code>backend</code>.</p>
        
         * <p>The response metadata for your new virtual node contains the <code>arn</code>
         * that is
         associated with the virtual node. Set this value (either the
         * full ARN or the truncated
         resource name, for example,
         * <code>mesh/default/virtualNode/simpleapp</code>, as the
           
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> environment variable for your task
         * group's Envoy
         proxy container in your task definition or pod spec. This
         * is then mapped to the
            <code>node.id</code> and
         * <code>node.cluster</code> Envoy parameters.</p>
         <note>
           
         * <p>If you require your Envoy stats or tracing to use a different name, you can
         * override
            the <code>node.cluster</code> value that is set by
        
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> with the
              
         * <code>APPMESH_VIRTUAL_NODE_CLUSTER</code> environment variable.</p>
        
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateVirtualNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualNodeOutcomeCallable CreateVirtualNodeCallable(const Model::CreateVirtualNodeRequest& request) const;

        /**
         * <p>Creates a new virtual node within a service mesh.</p>
         <p>A virtual
         * node acts as logical pointer to a particular task group, such as an Amazon ECS
 
         * service or a Kubernetes deployment. When you create a virtual node, you must
         * specify the
         DNS service discovery name for your task group.</p>
       
         * <p>Any inbound traffic that your virtual node expects should be specified as a
 
         * <code>listener</code>. Any outbound traffic that your virtual node expects to
         * reach
         should be specified as a <code>backend</code>.</p>
        
         * <p>The response metadata for your new virtual node contains the <code>arn</code>
         * that is
         associated with the virtual node. Set this value (either the
         * full ARN or the truncated
         resource name, for example,
         * <code>mesh/default/virtualNode/simpleapp</code>, as the
           
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> environment variable for your task
         * group's Envoy
         proxy container in your task definition or pod spec. This
         * is then mapped to the
            <code>node.id</code> and
         * <code>node.cluster</code> Envoy parameters.</p>
         <note>
           
         * <p>If you require your Envoy stats or tracing to use a different name, you can
         * override
            the <code>node.cluster</code> value that is set by
        
         * <code>APPMESH_VIRTUAL_NODE_NAME</code> with the
              
         * <code>APPMESH_VIRTUAL_NODE_CLUSTER</code> environment variable.</p>
        
         * </note><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateVirtualNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualNodeAsync(const Model::CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Creates a new virtual router within a service mesh.</p>
         <p>Virtual
         * routers handle traffic for one or more service names within your mesh. After
         * you
         create your virtual router, create and associate routes for your
         * virtual router that direct
         incoming requests to different virtual
         * nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::CreateVirtualRouterOutcome CreateVirtualRouter(const Model::CreateVirtualRouterRequest& request) const;

        /**
         * <p>Creates a new virtual router within a service mesh.</p>
         <p>Virtual
         * routers handle traffic for one or more service names within your mesh. After
         * you
         create your virtual router, create and associate routes for your
         * virtual router that direct
         incoming requests to different virtual
         * nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateVirtualRouter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::CreateVirtualRouterOutcomeCallable CreateVirtualRouterCallable(const Model::CreateVirtualRouterRequest& request) const;

        /**
         * <p>Creates a new virtual router within a service mesh.</p>
         <p>Virtual
         * routers handle traffic for one or more service names within your mesh. After
         * you
         create your virtual router, create and associate routes for your
         * virtual router that direct
         incoming requests to different virtual
         * nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/CreateVirtualRouter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void CreateVirtualRouterAsync(const Model::CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing service mesh.</p>
         <p>You must delete all
         * resources (routes, virtual routers, virtual nodes) in the service
         mesh
         * before you can delete the mesh itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteMeshOutcome DeleteMesh(const Model::DeleteMeshRequest& request) const;

        /**
         * <p>Deletes an existing service mesh.</p>
         <p>You must delete all
         * resources (routes, virtual routers, virtual nodes) in the service
         mesh
         * before you can delete the mesh itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteMesh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteMeshOutcomeCallable DeleteMeshCallable(const Model::DeleteMeshRequest& request) const;

        /**
         * <p>Deletes an existing service mesh.</p>
         <p>You must delete all
         * resources (routes, virtual routers, virtual nodes) in the service
         mesh
         * before you can delete the mesh itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteMesh">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteMeshAsync(const Model::DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteRouteOutcome DeleteRoute(const Model::DeleteRouteRequest& request) const;

        /**
         * <p>Deletes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteRouteOutcomeCallable DeleteRouteCallable(const Model::DeleteRouteRequest& request) const;

        /**
         * <p>Deletes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteRouteAsync(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualNodeOutcome DeleteVirtualNode(const Model::DeleteVirtualNodeRequest& request) const;

        /**
         * <p>Deletes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteVirtualNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualNodeOutcomeCallable DeleteVirtualNodeCallable(const Model::DeleteVirtualNodeRequest& request) const;

        /**
         * <p>Deletes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteVirtualNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualNodeAsync(const Model::DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Deletes an existing virtual router.</p>
         <p>You must delete any
         * routes associated with the virtual router before you can delete the
        
         * router itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DeleteVirtualRouterOutcome DeleteVirtualRouter(const Model::DeleteVirtualRouterRequest& request) const;

        /**
         * <p>Deletes an existing virtual router.</p>
         <p>You must delete any
         * routes associated with the virtual router before you can delete the
        
         * router itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteVirtualRouter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DeleteVirtualRouterOutcomeCallable DeleteVirtualRouterCallable(const Model::DeleteVirtualRouterRequest& request) const;

        /**
         * <p>Deletes an existing virtual router.</p>
         <p>You must delete any
         * routes associated with the virtual router before you can delete the
        
         * router itself.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DeleteVirtualRouter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DeleteVirtualRouterAsync(const Model::DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeMesh">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeMeshOutcome DescribeMesh(const Model::DescribeMeshRequest& request) const;

        /**
         * <p>Describes an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeMesh">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeMeshOutcomeCallable DescribeMeshCallable(const Model::DescribeMeshRequest& request) const;

        /**
         * <p>Describes an existing service mesh.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeMesh">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeMeshAsync(const Model::DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeRouteOutcome DescribeRoute(const Model::DescribeRouteRequest& request) const;

        /**
         * <p>Describes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeRouteOutcomeCallable DescribeRouteCallable(const Model::DescribeRouteRequest& request) const;

        /**
         * <p>Describes an existing route.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeRouteAsync(const Model::DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualNodeOutcome DescribeVirtualNode(const Model::DescribeVirtualNodeRequest& request) const;

        /**
         * <p>Describes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeVirtualNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualNodeOutcomeCallable DescribeVirtualNodeCallable(const Model::DescribeVirtualNodeRequest& request) const;

        /**
         * <p>Describes an existing virtual node.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeVirtualNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualNodeAsync(const Model::DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Describes an existing virtual router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::DescribeVirtualRouterOutcome DescribeVirtualRouter(const Model::DescribeVirtualRouterRequest& request) const;

        /**
         * <p>Describes an existing virtual router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeVirtualRouter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::DescribeVirtualRouterOutcomeCallable DescribeVirtualRouterCallable(const Model::DescribeVirtualRouterRequest& request) const;

        /**
         * <p>Describes an existing virtual router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/DescribeVirtualRouter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void DescribeVirtualRouterAsync(const Model::DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing service meshes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListMeshes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListMeshesOutcome ListMeshes(const Model::ListMeshesRequest& request) const;

        /**
         * <p>Returns a list of existing service meshes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListMeshes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListMeshesOutcomeCallable ListMeshesCallable(const Model::ListMeshesRequest& request) const;

        /**
         * <p>Returns a list of existing service meshes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListMeshes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListMeshesAsync(const Model::ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing routes in a service mesh.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListRoutes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListRoutesOutcome ListRoutes(const Model::ListRoutesRequest& request) const;

        /**
         * <p>Returns a list of existing routes in a service mesh.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListRoutes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListRoutesOutcomeCallable ListRoutesCallable(const Model::ListRoutesRequest& request) const;

        /**
         * <p>Returns a list of existing routes in a service mesh.</p><p><h3>See Also:</h3>
         * <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListRoutes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListRoutesAsync(const Model::ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing virtual nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListVirtualNodes">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualNodesOutcome ListVirtualNodes(const Model::ListVirtualNodesRequest& request) const;

        /**
         * <p>Returns a list of existing virtual nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListVirtualNodes">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualNodesOutcomeCallable ListVirtualNodesCallable(const Model::ListVirtualNodesRequest& request) const;

        /**
         * <p>Returns a list of existing virtual nodes.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListVirtualNodes">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualNodesAsync(const Model::ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Returns a list of existing virtual routers in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListVirtualRouters">AWS
         * API Reference</a></p>
         */
        virtual Model::ListVirtualRoutersOutcome ListVirtualRouters(const Model::ListVirtualRoutersRequest& request) const;

        /**
         * <p>Returns a list of existing virtual routers in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListVirtualRouters">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::ListVirtualRoutersOutcomeCallable ListVirtualRoutersCallable(const Model::ListVirtualRoutersRequest& request) const;

        /**
         * <p>Returns a list of existing virtual routers in a service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/ListVirtualRouters">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void ListVirtualRoutersAsync(const Model::ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing route for a specified service mesh and virtual
         * router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/UpdateRoute">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateRouteOutcome UpdateRoute(const Model::UpdateRouteRequest& request) const;

        /**
         * <p>Updates an existing route for a specified service mesh and virtual
         * router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/UpdateRoute">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateRouteOutcomeCallable UpdateRouteCallable(const Model::UpdateRouteRequest& request) const;

        /**
         * <p>Updates an existing route for a specified service mesh and virtual
         * router.</p><p><h3>See Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/UpdateRoute">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateRouteAsync(const Model::UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing virtual node in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/UpdateVirtualNode">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualNodeOutcome UpdateVirtualNode(const Model::UpdateVirtualNodeRequest& request) const;

        /**
         * <p>Updates an existing virtual node in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/UpdateVirtualNode">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualNodeOutcomeCallable UpdateVirtualNodeCallable(const Model::UpdateVirtualNodeRequest& request) const;

        /**
         * <p>Updates an existing virtual node in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/UpdateVirtualNode">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVirtualNodeAsync(const Model::UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

        /**
         * <p>Updates an existing virtual router in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/UpdateVirtualRouter">AWS
         * API Reference</a></p>
         */
        virtual Model::UpdateVirtualRouterOutcome UpdateVirtualRouter(const Model::UpdateVirtualRouterRequest& request) const;

        /**
         * <p>Updates an existing virtual router in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/UpdateVirtualRouter">AWS
         * API Reference</a></p>
         *
         * returns a future to the operation so that it can be executed in parallel to other requests.
         */
        virtual Model::UpdateVirtualRouterOutcomeCallable UpdateVirtualRouterCallable(const Model::UpdateVirtualRouterRequest& request) const;

        /**
         * <p>Updates an existing virtual router in a specified service mesh.</p><p><h3>See
         * Also:</h3>   <a
         * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2018-10-01/UpdateVirtualRouter">AWS
         * API Reference</a></p>
         *
         * Queues the request into a thread executor and triggers associated callback when operation has finished.
         */
        virtual void UpdateVirtualRouterAsync(const Model::UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context = nullptr) const;

      
      void OverrideEndpoint(const Aws::String& endpoint);
    private:
      void init(const Aws::Client::ClientConfiguration& clientConfiguration);
        /**Async helpers**/
        void CreateMeshAsyncHelper(const Model::CreateMeshRequest& request, const CreateMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateRouteAsyncHelper(const Model::CreateRouteRequest& request, const CreateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualNodeAsyncHelper(const Model::CreateVirtualNodeRequest& request, const CreateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void CreateVirtualRouterAsyncHelper(const Model::CreateVirtualRouterRequest& request, const CreateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteMeshAsyncHelper(const Model::DeleteMeshRequest& request, const DeleteMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteRouteAsyncHelper(const Model::DeleteRouteRequest& request, const DeleteRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualNodeAsyncHelper(const Model::DeleteVirtualNodeRequest& request, const DeleteVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DeleteVirtualRouterAsyncHelper(const Model::DeleteVirtualRouterRequest& request, const DeleteVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeMeshAsyncHelper(const Model::DescribeMeshRequest& request, const DescribeMeshResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeRouteAsyncHelper(const Model::DescribeRouteRequest& request, const DescribeRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualNodeAsyncHelper(const Model::DescribeVirtualNodeRequest& request, const DescribeVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void DescribeVirtualRouterAsyncHelper(const Model::DescribeVirtualRouterRequest& request, const DescribeVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListMeshesAsyncHelper(const Model::ListMeshesRequest& request, const ListMeshesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListRoutesAsyncHelper(const Model::ListRoutesRequest& request, const ListRoutesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualNodesAsyncHelper(const Model::ListVirtualNodesRequest& request, const ListVirtualNodesResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void ListVirtualRoutersAsyncHelper(const Model::ListVirtualRoutersRequest& request, const ListVirtualRoutersResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateRouteAsyncHelper(const Model::UpdateRouteRequest& request, const UpdateRouteResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVirtualNodeAsyncHelper(const Model::UpdateVirtualNodeRequest& request, const UpdateVirtualNodeResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;
        void UpdateVirtualRouterAsyncHelper(const Model::UpdateVirtualRouterRequest& request, const UpdateVirtualRouterResponseReceivedHandler& handler, const std::shared_ptr<const Aws::Client::AsyncCallerContext>& context) const;

      Aws::String m_uri;
      Aws::String m_configScheme;
      std::shared_ptr<Aws::Utils::Threading::Executor> m_executor;
  };

} // namespace AppMesh
} // namespace Aws
