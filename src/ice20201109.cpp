// This file is auto-generated, don't edit it. Thanks.

#include <alibabacloud/ice20201109.hpp>
#include <alibabacloud/endpoint_util.hpp>
#include <alibabacloud/open_api.hpp>
#include <alibabacloud/open_api_util.hpp>
#include <boost/any.hpp>
#include <boost/throw_exception.hpp>
#include <darabonba/core.hpp>
#include <darabonba/util.hpp>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

using namespace Alibabacloud_ICE20201109;

Alibabacloud_ICE20201109::Client::Client(const shared_ptr<Alibabacloud_OpenApi::Config>& config) : Alibabacloud_OpenApi::Client(config) {
  _endpointRule = make_shared<string>("regional");
  _endpointMap = make_shared<map<string, string>>(map<string, string>({
    {"ap-northeast-1", "ice.aliyuncs.com"},
    {"ap-northeast-2-pop", "ice.aliyuncs.com"},
    {"ap-south-1", "ice.aliyuncs.com"},
    {"ap-southeast-1", "ice.aliyuncs.com"},
    {"ap-southeast-2", "ice.aliyuncs.com"},
    {"ap-southeast-3", "ice.aliyuncs.com"},
    {"ap-southeast-5", "ice.aliyuncs.com"},
    {"cn-beijing", "ice.aliyuncs.com"},
    {"cn-beijing-finance-1", "ice.aliyuncs.com"},
    {"cn-beijing-finance-pop", "ice.aliyuncs.com"},
    {"cn-beijing-gov-1", "ice.aliyuncs.com"},
    {"cn-beijing-nu16-b01", "ice.aliyuncs.com"},
    {"cn-chengdu", "ice.aliyuncs.com"},
    {"cn-edge-1", "ice.aliyuncs.com"},
    {"cn-fujian", "ice.aliyuncs.com"},
    {"cn-haidian-cm12-c01", "ice.aliyuncs.com"},
    {"cn-hangzhou", "ice.aliyuncs.com"},
    {"cn-hangzhou-bj-b01", "ice.aliyuncs.com"},
    {"cn-hangzhou-finance", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-prod-1", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-1", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-2", "ice.aliyuncs.com"},
    {"cn-hangzhou-internal-test-3", "ice.aliyuncs.com"},
    {"cn-hangzhou-test-306", "ice.aliyuncs.com"},
    {"cn-hongkong", "ice.aliyuncs.com"},
    {"cn-hongkong-finance-pop", "ice.aliyuncs.com"},
    {"cn-huhehaote", "ice.aliyuncs.com"},
    {"cn-huhehaote-nebula-1", "ice.aliyuncs.com"},
    {"cn-north-2-gov-1", "ice.aliyuncs.com"},
    {"cn-qingdao", "ice.aliyuncs.com"},
    {"cn-qingdao-nebula", "ice.aliyuncs.com"},
    {"cn-shanghai-et15-b01", "ice.aliyuncs.com"},
    {"cn-shanghai-et2-b01", "ice.aliyuncs.com"},
    {"cn-shanghai-finance-1", "ice.aliyuncs.com"},
    {"cn-shanghai-inner", "ice.aliyuncs.com"},
    {"cn-shanghai-internal-test-1", "ice.aliyuncs.com"},
    {"cn-shenzhen", "ice.aliyuncs.com"},
    {"cn-shenzhen-finance-1", "ice.aliyuncs.com"},
    {"cn-shenzhen-inner", "ice.aliyuncs.com"},
    {"cn-shenzhen-st4-d01", "ice.aliyuncs.com"},
    {"cn-shenzhen-su18-b01", "ice.aliyuncs.com"},
    {"cn-wuhan", "ice.aliyuncs.com"},
    {"cn-wulanchabu", "ice.aliyuncs.com"},
    {"cn-yushanfang", "ice.aliyuncs.com"},
    {"cn-zhangbei", "ice.aliyuncs.com"},
    {"cn-zhangbei-na61-b01", "ice.aliyuncs.com"},
    {"cn-zhangjiakou", "ice.aliyuncs.com"},
    {"cn-zhangjiakou-na62-a01", "ice.aliyuncs.com"},
    {"cn-zhengzhou-nebula-1", "ice.aliyuncs.com"},
    {"eu-central-1", "ice.aliyuncs.com"},
    {"eu-west-1", "ice.aliyuncs.com"},
    {"eu-west-1-oxs", "ice.aliyuncs.com"},
    {"me-east-1", "ice.aliyuncs.com"},
    {"rus-west-1-pop", "ice.aliyuncs.com"},
    {"us-east-1", "ice.aliyuncs.com"},
    {"us-west-1", "ice.aliyuncs.com"}
  })
);
  checkConfig(config);
  _endpoint = make_shared<string>(getEndpoint(make_shared<string>("ice"), _regionId, _endpointRule, _network, _suffix, _endpointMap, _endpoint));
};

string Alibabacloud_ICE20201109::Client::getEndpoint(shared_ptr<string> productId,
                                                     shared_ptr<string> regionId,
                                                     shared_ptr<string> endpointRule,
                                                     shared_ptr<string> network,
                                                     shared_ptr<string> suffix,
                                                     shared_ptr<map<string, string>> endpointMap,
                                                     shared_ptr<string> endpoint) {
  if (!Darabonba_Util::Client::empty(endpoint)) {
    return *endpoint;
  }
  if (!Darabonba_Util::Client::isUnset<map<string, string>>(endpointMap) && !Darabonba_Util::Client::empty(make_shared<string>((*endpointMap)[regionId]))) {
    return (*endpointMap)[regionId];
  }
  return Alibabacloud_EndpointUtil::Client::getEndpointRules(productId, regionId, endpointRule, network, suffix);
}

AddEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::addEditingProjectMaterialsWithOptions(shared_ptr<AddEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MaterialMaps", *request->materialMaps));
  query->insert(pair<string, string>("ProjectId", *request->projectId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddEditingProjectMaterialsResponse(callApi(params, req, runtime));
}

AddEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::addEditingProjectMaterials(shared_ptr<AddEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addEditingProjectMaterialsWithOptions(request, runtime);
}

AddFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::addFavoritePublicMediaWithOptions(shared_ptr<AddFavoritePublicMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFavoritePublicMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddFavoritePublicMediaResponse(callApi(params, req, runtime));
}

AddFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::addFavoritePublicMedia(shared_ptr<AddFavoritePublicMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addFavoritePublicMediaWithOptions(request, runtime);
}

AddTemplateResponse Alibabacloud_ICE20201109::Client::addTemplateWithOptions(shared_ptr<AddTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Config", *request->config));
  query->insert(pair<string, string>("CoverUrl", *request->coverUrl));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("PreviewMedia", *request->previewMedia));
  query->insert(pair<string, string>("RelatedMediaids", *request->relatedMediaids));
  query->insert(pair<string, string>("Source", *request->source));
  query->insert(pair<string, string>("Status", *request->status));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddTemplateResponse(callApi(params, req, runtime));
}

AddTemplateResponse Alibabacloud_ICE20201109::Client::addTemplate(shared_ptr<AddTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addTemplateWithOptions(request, runtime);
}

BatchGetMediaInfosResponse Alibabacloud_ICE20201109::Client::batchGetMediaInfosWithOptions(shared_ptr<BatchGetMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("AdditionType", *request->additionType));
  query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetMediaInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return BatchGetMediaInfosResponse(callApi(params, req, runtime));
}

BatchGetMediaInfosResponse Alibabacloud_ICE20201109::Client::batchGetMediaInfos(shared_ptr<BatchGetMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return batchGetMediaInfosWithOptions(request, runtime);
}

CancelFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::cancelFavoritePublicMediaWithOptions(shared_ptr<CancelFavoritePublicMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelFavoritePublicMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelFavoritePublicMediaResponse(callApi(params, req, runtime));
}

CancelFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::cancelFavoritePublicMedia(shared_ptr<CancelFavoritePublicMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelFavoritePublicMediaWithOptions(request, runtime);
}

CreateEditingProjectResponse Alibabacloud_ICE20201109::Client::createEditingProjectWithOptions(shared_ptr<CreateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BusinessConfig", *request->businessConfig));
  query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  query->insert(pair<string, string>("CoverURL", *request->coverURL));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("MaterialMaps", *request->materialMaps));
  query->insert(pair<string, string>("ProjectType", *request->projectType));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  query->insert(pair<string, string>("Timeline", *request->timeline));
  query->insert(pair<string, string>("Title", *request->title));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEditingProjectResponse(callApi(params, req, runtime));
}

CreateEditingProjectResponse Alibabacloud_ICE20201109::Client::createEditingProject(shared_ptr<CreateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEditingProjectWithOptions(request, runtime);
}

DeleteEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectMaterialsWithOptions(shared_ptr<DeleteEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEditingProjectMaterialsResponse(callApi(params, req, runtime));
}

DeleteEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectMaterials(shared_ptr<DeleteEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectMaterialsWithOptions(request, runtime);
}

DeleteEditingProjectsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectsWithOptions(shared_ptr<DeleteEditingProjectsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ProjectIds", *request->projectIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEditingProjects"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEditingProjectsResponse(callApi(params, req, runtime));
}

DeleteEditingProjectsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjects(shared_ptr<DeleteEditingProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectsWithOptions(request, runtime);
}

DeleteMediaInfosResponse Alibabacloud_ICE20201109::Client::deleteMediaInfosWithOptions(shared_ptr<DeleteMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InputURLs", *request->inputURLs));
  query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMediaInfosResponse(callApi(params, req, runtime));
}

DeleteMediaInfosResponse Alibabacloud_ICE20201109::Client::deleteMediaInfos(shared_ptr<DeleteMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaInfosWithOptions(request, runtime);
}

DeleteSmartJobResponse Alibabacloud_ICE20201109::Client::deleteSmartJobWithOptions(shared_ptr<DeleteSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("JobId", *request->jobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSmartJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteSmartJobResponse(callApi(params, req, runtime));
}

DeleteSmartJobResponse Alibabacloud_ICE20201109::Client::deleteSmartJob(shared_ptr<DeleteSmartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteSmartJobWithOptions(request, runtime);
}

DeleteTemplateResponse Alibabacloud_ICE20201109::Client::deleteTemplateWithOptions(shared_ptr<DeleteTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTemplateResponse(callApi(params, req, runtime));
}

DeleteTemplateResponse Alibabacloud_ICE20201109::Client::deleteTemplate(shared_ptr<DeleteTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateWithOptions(request, runtime);
}

DescribeIceProductStatusResponse Alibabacloud_ICE20201109::Client::describeIceProductStatusWithOptions(shared_ptr<DescribeIceProductStatusRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CommodityCode", *request->commodityCode));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeIceProductStatus"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeIceProductStatusResponse(callApi(params, req, runtime));
}

DescribeIceProductStatusResponse Alibabacloud_ICE20201109::Client::describeIceProductStatus(shared_ptr<DescribeIceProductStatusRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeIceProductStatusWithOptions(request, runtime);
}

DescribeMaterialPackageInfoResponse Alibabacloud_ICE20201109::Client::describeMaterialPackageInfoWithOptions(shared_ptr<DescribeMaterialPackageInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MaterialPackageId", *request->materialPackageId));
  query->insert(pair<string, string>("MaterialPackageType", *request->materialPackageType));
  query->insert(pair<string, string>("Status", *request->status));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMaterialPackageInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMaterialPackageInfoResponse(callApi(params, req, runtime));
}

DescribeMaterialPackageInfoResponse Alibabacloud_ICE20201109::Client::describeMaterialPackageInfo(shared_ptr<DescribeMaterialPackageInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMaterialPackageInfoWithOptions(request, runtime);
}

DescribeRelatedAuthorizationStatusResponse Alibabacloud_ICE20201109::Client::describeRelatedAuthorizationStatusWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeRelatedAuthorizationStatus"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeRelatedAuthorizationStatusResponse(callApi(params, req, runtime));
}

DescribeRelatedAuthorizationStatusResponse Alibabacloud_ICE20201109::Client::describeRelatedAuthorizationStatus() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeRelatedAuthorizationStatusWithOptions(runtime);
}

GetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::getDefaultStorageLocationWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDefaultStorageLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDefaultStorageLocationResponse(callApi(params, req, runtime));
}

GetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::getDefaultStorageLocation() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultStorageLocationWithOptions(runtime);
}

GetEditingProjectResponse Alibabacloud_ICE20201109::Client::getEditingProjectWithOptions(shared_ptr<GetEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEditingProjectResponse(callApi(params, req, runtime));
}

GetEditingProjectResponse Alibabacloud_ICE20201109::Client::getEditingProject(shared_ptr<GetEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectWithOptions(request, runtime);
}

GetEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::getEditingProjectMaterialsWithOptions(shared_ptr<GetEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEditingProjectMaterialsResponse(callApi(params, req, runtime));
}

GetEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::getEditingProjectMaterials(shared_ptr<GetEditingProjectMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEditingProjectMaterialsWithOptions(request, runtime);
}

GetEventCallbackResponse Alibabacloud_ICE20201109::Client::getEventCallbackWithOptions(shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>();
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEventCallback"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetEventCallbackResponse(callApi(params, req, runtime));
}

GetEventCallbackResponse Alibabacloud_ICE20201109::Client::getEventCallback() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getEventCallbackWithOptions(runtime);
}

GetLiveEditingIndexFileResponse Alibabacloud_ICE20201109::Client::getLiveEditingIndexFileWithOptions(shared_ptr<GetLiveEditingIndexFileRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveEditingIndexFile"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveEditingIndexFileResponse(callApi(params, req, runtime));
}

GetLiveEditingIndexFileResponse Alibabacloud_ICE20201109::Client::getLiveEditingIndexFile(shared_ptr<GetLiveEditingIndexFileRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveEditingIndexFileWithOptions(request, runtime);
}

GetLiveEditingJobResponse Alibabacloud_ICE20201109::Client::getLiveEditingJobWithOptions(shared_ptr<GetLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("JobId", *request->jobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveEditingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveEditingJobResponse(callApi(params, req, runtime));
}

GetLiveEditingJobResponse Alibabacloud_ICE20201109::Client::getLiveEditingJob(shared_ptr<GetLiveEditingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveEditingJobWithOptions(request, runtime);
}

GetMediaInfoResponse Alibabacloud_ICE20201109::Client::getMediaInfoWithOptions(shared_ptr<GetMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("InputURL", *request->inputURL));
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("OutputType", *request->outputType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaInfoResponse(callApi(params, req, runtime));
}

GetMediaInfoResponse Alibabacloud_ICE20201109::Client::getMediaInfo(shared_ptr<GetMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaInfoWithOptions(request, runtime);
}

GetMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getMediaProducingJobWithOptions(shared_ptr<GetMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaProducingJobResponse(callApi(params, req, runtime));
}

GetMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getMediaProducingJob(shared_ptr<GetMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaProducingJobWithOptions(request, runtime);
}

GetPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::getPublicMediaInfoWithOptions(shared_ptr<GetPublicMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPublicMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPublicMediaInfoResponse(callApi(params, req, runtime));
}

GetPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::getPublicMediaInfo(shared_ptr<GetPublicMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPublicMediaInfoWithOptions(request, runtime);
}

GetSmartHandleJobResponse Alibabacloud_ICE20201109::Client::getSmartHandleJobWithOptions(shared_ptr<GetSmartHandleJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSmartHandleJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSmartHandleJobResponse(callApi(params, req, runtime));
}

GetSmartHandleJobResponse Alibabacloud_ICE20201109::Client::getSmartHandleJob(shared_ptr<GetSmartHandleJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmartHandleJobWithOptions(request, runtime);
}

GetTemplateResponse Alibabacloud_ICE20201109::Client::getTemplateWithOptions(shared_ptr<GetTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateResponse(callApi(params, req, runtime));
}

GetTemplateResponse Alibabacloud_ICE20201109::Client::getTemplate(shared_ptr<GetTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateWithOptions(request, runtime);
}

GetTemplateMaterialsResponse Alibabacloud_ICE20201109::Client::getTemplateMaterialsWithOptions(shared_ptr<GetTemplateMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTemplateMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateMaterialsResponse(callApi(params, req, runtime));
}

GetTemplateMaterialsResponse Alibabacloud_ICE20201109::Client::getTemplateMaterials(shared_ptr<GetTemplateMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateMaterialsWithOptions(request, runtime);
}

ListAllPublicMediaTagsResponse Alibabacloud_ICE20201109::Client::listAllPublicMediaTagsWithOptions(shared_ptr<ListAllPublicMediaTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BusinessType", *request->businessType));
  query->insert(pair<string, string>("EntityId", *request->entityId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAllPublicMediaTags"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAllPublicMediaTagsResponse(callApi(params, req, runtime));
}

ListAllPublicMediaTagsResponse Alibabacloud_ICE20201109::Client::listAllPublicMediaTags(shared_ptr<ListAllPublicMediaTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAllPublicMediaTagsWithOptions(request, runtime);
}

ListMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listMediaBasicInfosWithOptions(shared_ptr<ListMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BusinessType", *request->businessType));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, bool>("IncludeFileBasicInfo", *request->includeFileBasicInfo));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("MediaType", *request->mediaType));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("SortBy", *request->sortBy));
  query->insert(pair<string, string>("Source", *request->source));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("Status", *request->status));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaBasicInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMediaBasicInfosResponse(callApi(params, req, runtime));
}

ListMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listMediaBasicInfos(shared_ptr<ListMediaBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaBasicInfosWithOptions(request, runtime);
}

ListMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listMediaProducingJobsWithOptions(shared_ptr<ListMediaProducingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Status", *request->status));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaProducingJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMediaProducingJobsResponse(callApi(params, req, runtime));
}

ListMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::listMediaProducingJobs(shared_ptr<ListMediaProducingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaProducingJobsWithOptions(request, runtime);
}

ListPublicMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listPublicMediaBasicInfosWithOptions(shared_ptr<ListPublicMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("IncludeFileBasicInfo", *request->includeFileBasicInfo));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("MediaTagId", *request->mediaTagId));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublicMediaBasicInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPublicMediaBasicInfosResponse(callApi(params, req, runtime));
}

ListPublicMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listPublicMediaBasicInfos(shared_ptr<ListPublicMediaBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPublicMediaBasicInfosWithOptions(request, runtime);
}

ListSmartJobsResponse Alibabacloud_ICE20201109::Client::listSmartJobsWithOptions(shared_ptr<ListSmartJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSmartJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSmartJobsResponse(callApi(params, req, runtime));
}

ListSmartJobsResponse Alibabacloud_ICE20201109::Client::listSmartJobs(shared_ptr<ListSmartJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartJobsWithOptions(request, runtime);
}

ListSysTemplatesResponse Alibabacloud_ICE20201109::Client::listSysTemplatesWithOptions(shared_ptr<ListSysTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSysTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSysTemplatesResponse(callApi(params, req, runtime));
}

ListSysTemplatesResponse Alibabacloud_ICE20201109::Client::listSysTemplates(shared_ptr<ListSysTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSysTemplatesWithOptions(request, runtime);
}

ListTemplatesResponse Alibabacloud_ICE20201109::Client::listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CreateSource", *request->createSource));
  query->insert(pair<string, string>("Keyword", *request->keyword));
  query->insert(pair<string, string>("SortType", *request->sortType));
  query->insert(pair<string, string>("Status", *request->status));
  query->insert(pair<string, string>("Type", *request->type));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTemplatesResponse(callApi(params, req, runtime));
}

ListTemplatesResponse Alibabacloud_ICE20201109::Client::listTemplates(shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplatesWithOptions(request, runtime);
}

RegisterMediaInfoResponse Alibabacloud_ICE20201109::Client::registerMediaInfoWithOptions(shared_ptr<RegisterMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BusinessType", *request->businessType));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("CoverURL", *request->coverURL));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("DynamicMetaDataList", *request->dynamicMetaDataList));
  query->insert(pair<string, string>("InputURL", *request->inputURL));
  query->insert(pair<string, string>("MediaTags", *request->mediaTags));
  query->insert(pair<string, string>("MediaType", *request->mediaType));
  query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  query->insert(pair<string, string>("RegisterConfig", *request->registerConfig));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterMediaInfoResponse(callApi(params, req, runtime));
}

RegisterMediaInfoResponse Alibabacloud_ICE20201109::Client::registerMediaInfo(shared_ptr<RegisterMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaInfoWithOptions(request, runtime);
}

SearchEditingProjectResponse Alibabacloud_ICE20201109::Client::searchEditingProjectWithOptions(shared_ptr<SearchEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CreateSource", *request->createSource));
  query->insert(pair<string, string>("EndTime", *request->endTime));
  query->insert(pair<string, long>("MaxResults", *request->maxResults));
  query->insert(pair<string, string>("NextToken", *request->nextToken));
  query->insert(pair<string, string>("ProjectType", *request->projectType));
  query->insert(pair<string, string>("SortBy", *request->sortBy));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("Status", *request->status));
  query->insert(pair<string, string>("TemplateType", *request->templateType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchEditingProjectResponse(callApi(params, req, runtime));
}

SearchEditingProjectResponse Alibabacloud_ICE20201109::Client::searchEditingProject(shared_ptr<SearchEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchEditingProjectWithOptions(request, runtime);
}

SearchPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::searchPublicMediaInfoWithOptions(shared_ptr<SearchPublicMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("Authorized", *request->authorized));
  query->insert(pair<string, string>("DynamicMetaDataMatchFields", *request->dynamicMetaDataMatchFields));
  query->insert(pair<string, string>("EntityId", *request->entityId));
  query->insert(pair<string, bool>("Favorite", *request->favorite));
  query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  query->insert(pair<string, long>("PageNo", *request->pageNo));
  query->insert(pair<string, long>("PageSize", *request->pageSize));
  query->insert(pair<string, string>("SortBy", *request->sortBy));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchPublicMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchPublicMediaInfoResponse(callApi(params, req, runtime));
}

SearchPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::searchPublicMediaInfo(shared_ptr<SearchPublicMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchPublicMediaInfoWithOptions(request, runtime);
}

SetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::setDefaultStorageLocationWithOptions(shared_ptr<SetDefaultStorageLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Bucket", *request->bucket));
  query->insert(pair<string, string>("Path", *request->path));
  query->insert(pair<string, string>("StorageType", *request->storageType));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultStorageLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDefaultStorageLocationResponse(callApi(params, req, runtime));
}

SetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::setDefaultStorageLocation(shared_ptr<SetDefaultStorageLocationRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultStorageLocationWithOptions(request, runtime);
}

SetEventCallbackResponse Alibabacloud_ICE20201109::Client::setEventCallbackWithOptions(shared_ptr<SetEventCallbackRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("CallbackQueueName", *request->callbackQueueName));
  query->insert(pair<string, string>("EventTypeList", *request->eventTypeList));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetEventCallback"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetEventCallbackResponse(callApi(params, req, runtime));
}

SetEventCallbackResponse Alibabacloud_ICE20201109::Client::setEventCallback(shared_ptr<SetEventCallbackRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setEventCallbackWithOptions(request, runtime);
}

SubmitASRJobResponse Alibabacloud_ICE20201109::Client::submitASRJobWithOptions(shared_ptr<SubmitASRJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("Duration", *request->duration));
  query->insert(pair<string, string>("InputFile", *request->inputFile));
  query->insert(pair<string, string>("StartTime", *request->startTime));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitASRJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitASRJobResponse(callApi(params, req, runtime));
}

SubmitASRJobResponse Alibabacloud_ICE20201109::Client::submitASRJob(shared_ptr<SubmitASRJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitASRJobWithOptions(request, runtime);
}

SubmitAudioProduceJobResponse Alibabacloud_ICE20201109::Client::submitAudioProduceJobWithOptions(shared_ptr<SubmitAudioProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  query->insert(pair<string, string>("InputConfig", *request->inputConfig));
  query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAudioProduceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAudioProduceJobResponse(callApi(params, req, runtime));
}

SubmitAudioProduceJobResponse Alibabacloud_ICE20201109::Client::submitAudioProduceJob(shared_ptr<SubmitAudioProduceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAudioProduceJobWithOptions(request, runtime);
}

SubmitDelogoJobResponse Alibabacloud_ICE20201109::Client::submitDelogoJobWithOptions(shared_ptr<SubmitDelogoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("InputFile", *request->inputFile));
  query->insert(pair<string, string>("InputType", *request->inputType));
  query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDelogoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDelogoJobResponse(callApi(params, req, runtime));
}

SubmitDelogoJobResponse Alibabacloud_ICE20201109::Client::submitDelogoJob(shared_ptr<SubmitDelogoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDelogoJobWithOptions(request, runtime);
}

SubmitH2VJobResponse Alibabacloud_ICE20201109::Client::submitH2VJobWithOptions(shared_ptr<SubmitH2VJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("InputFile", *request->inputFile));
  query->insert(pair<string, string>("InputType", *request->inputType));
  query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitH2VJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitH2VJobResponse(callApi(params, req, runtime));
}

SubmitH2VJobResponse Alibabacloud_ICE20201109::Client::submitH2VJob(shared_ptr<SubmitH2VJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitH2VJobWithOptions(request, runtime);
}

SubmitKeyWordCutJobResponse Alibabacloud_ICE20201109::Client::submitKeyWordCutJobWithOptions(shared_ptr<SubmitKeyWordCutJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitKeyWordCutJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitKeyWordCutJobResponse(callApi(params, req, runtime));
}

SubmitKeyWordCutJobResponse Alibabacloud_ICE20201109::Client::submitKeyWordCutJob(shared_ptr<SubmitKeyWordCutJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitKeyWordCutJobWithOptions(request, runtime);
}

SubmitLiveEditingJobResponse Alibabacloud_ICE20201109::Client::submitLiveEditingJobWithOptions(shared_ptr<SubmitLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Clips", *request->clips));
  query->insert(pair<string, string>("LiveStreamConfig", *request->liveStreamConfig));
  query->insert(pair<string, string>("MediaProduceConfig", *request->mediaProduceConfig));
  query->insert(pair<string, string>("OutputMediaConfig", *request->outputMediaConfig));
  query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  query->insert(pair<string, string>("ProjectId", *request->projectId));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveEditingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitLiveEditingJobResponse(callApi(params, req, runtime));
}

SubmitLiveEditingJobResponse Alibabacloud_ICE20201109::Client::submitLiveEditingJob(shared_ptr<SubmitLiveEditingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveEditingJobWithOptions(request, runtime);
}

SubmitMattingJobResponse Alibabacloud_ICE20201109::Client::submitMattingJobWithOptions(shared_ptr<SubmitMattingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("InputFile", *request->inputFile));
  query->insert(pair<string, string>("InputType", *request->inputType));
  query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  query->insert(pair<string, string>("Overwrite", *request->overwrite));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMattingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitMattingJobResponse(callApi(params, req, runtime));
}

SubmitMattingJobResponse Alibabacloud_ICE20201109::Client::submitMattingJob(shared_ptr<SubmitMattingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMattingJobWithOptions(request, runtime);
}

SubmitMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitMediaProducingJobWithOptions(shared_ptr<SubmitMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("ClientToken", *request->clientToken));
  query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  query->insert(pair<string, string>("EditingProduceConfig", *request->editingProduceConfig));
  query->insert(pair<string, string>("OutputMediaConfig", *request->outputMediaConfig));
  query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  query->insert(pair<string, string>("ProjectId", *request->projectId));
  query->insert(pair<string, string>("ProjectMetadata", *request->projectMetadata));
  query->insert(pair<string, string>("Source", *request->source));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  query->insert(pair<string, string>("Timeline", *request->timeline));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitMediaProducingJobResponse(callApi(params, req, runtime));
}

SubmitMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitMediaProducingJob(shared_ptr<SubmitMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaProducingJobWithOptions(request, runtime);
}

SubmitPPTCutJobResponse Alibabacloud_ICE20201109::Client::submitPPTCutJobWithOptions(shared_ptr<SubmitPPTCutJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitPPTCutJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitPPTCutJobResponse(callApi(params, req, runtime));
}

SubmitPPTCutJobResponse Alibabacloud_ICE20201109::Client::submitPPTCutJob(shared_ptr<SubmitPPTCutJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitPPTCutJobWithOptions(request, runtime);
}

SubmitSubtitleProduceJobResponse Alibabacloud_ICE20201109::Client::submitSubtitleProduceJobWithOptions(shared_ptr<SubmitSubtitleProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  query->insert(pair<string, string>("InputConfig", *request->inputConfig));
  query->insert(pair<string, long>("IsAsync", *request->isAsync));
  query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("Type", *request->type));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSubtitleProduceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSubtitleProduceJobResponse(callApi(params, req, runtime));
}

SubmitSubtitleProduceJobResponse Alibabacloud_ICE20201109::Client::submitSubtitleProduceJob(shared_ptr<SubmitSubtitleProduceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSubtitleProduceJobWithOptions(request, runtime);
}

UpdateEditingProjectResponse Alibabacloud_ICE20201109::Client::updateEditingProjectWithOptions(shared_ptr<UpdateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("BusinessStatus", *request->businessStatus));
  query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  query->insert(pair<string, string>("CoverURL", *request->coverURL));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("ProjectId", *request->projectId));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  query->insert(pair<string, string>("Timeline", *request->timeline));
  query->insert(pair<string, string>("Title", *request->title));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEditingProjectResponse(callApi(params, req, runtime));
}

UpdateEditingProjectResponse Alibabacloud_ICE20201109::Client::updateEditingProject(shared_ptr<UpdateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEditingProjectWithOptions(request, runtime);
}

UpdateMediaInfoResponse Alibabacloud_ICE20201109::Client::updateMediaInfoWithOptions(shared_ptr<UpdateMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, bool>("AppendDynamicMeta", *request->appendDynamicMeta));
  query->insert(pair<string, bool>("AppendTags", *request->appendTags));
  query->insert(pair<string, string>("BusinessType", *request->businessType));
  query->insert(pair<string, string>("Category", *request->category));
  query->insert(pair<string, string>("CoverURL", *request->coverURL));
  query->insert(pair<string, string>("Description", *request->description));
  query->insert(pair<string, string>("DynamicMetaDataList", *request->dynamicMetaDataList));
  query->insert(pair<string, string>("InputURL", *request->inputURL));
  query->insert(pair<string, string>("MediaId", *request->mediaId));
  query->insert(pair<string, string>("MediaTags", *request->mediaTags));
  query->insert(pair<string, string>("Title", *request->title));
  query->insert(pair<string, string>("UserData", *request->userData));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMediaInfoResponse(callApi(params, req, runtime));
}

UpdateMediaInfoResponse Alibabacloud_ICE20201109::Client::updateMediaInfo(shared_ptr<UpdateMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaInfoWithOptions(request, runtime);
}

UpdateSmartJobResponse Alibabacloud_ICE20201109::Client::updateSmartJobWithOptions(shared_ptr<UpdateSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("FEExtend", *request->FEExtend));
  query->insert(pair<string, string>("JobId", *request->jobId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSmartJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateSmartJobResponse(callApi(params, req, runtime));
}

UpdateSmartJobResponse Alibabacloud_ICE20201109::Client::updateSmartJob(shared_ptr<UpdateSmartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateSmartJobWithOptions(request, runtime);
}

UpdateTemplateResponse Alibabacloud_ICE20201109::Client::updateTemplateWithOptions(shared_ptr<UpdateTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  query->insert(pair<string, string>("Config", *request->config));
  query->insert(pair<string, string>("CoverUrl", *request->coverUrl));
  query->insert(pair<string, string>("Name", *request->name));
  query->insert(pair<string, string>("PreviewMedia", *request->previewMedia));
  query->insert(pair<string, string>("RelatedMediaids", *request->relatedMediaids));
  query->insert(pair<string, string>("Source", *request->source));
  query->insert(pair<string, string>("Status", *request->status));
  query->insert(pair<string, string>("TemplateId", *request->templateId));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))},
    {"body", boost::any(Darabonba_Util::Client::toMap(request))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("json"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTemplateResponse(callApi(params, req, runtime));
}

UpdateTemplateResponse Alibabacloud_ICE20201109::Client::updateTemplate(shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTemplateWithOptions(request, runtime);
}

