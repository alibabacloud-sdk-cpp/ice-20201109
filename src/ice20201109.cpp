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
  _signatureAlgorithm = make_shared<string>("v2");
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

AddCategoryResponse Alibabacloud_ICE20201109::Client::addCategoryWithOptions(shared_ptr<AddCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->cateName)) {
    query->insert(pair<string, string>("CateName", *request->cateName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->parentId)) {
    query->insert(pair<string, long>("ParentId", *request->parentId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddCategory"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return AddCategoryResponse(callApi(params, req, runtime));
}

AddCategoryResponse Alibabacloud_ICE20201109::Client::addCategory(shared_ptr<AddCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return addCategoryWithOptions(request, runtime);
}

AddEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::addEditingProjectMaterialsWithOptions(shared_ptr<AddEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->materialMaps)) {
    query->insert(pair<string, string>("MaterialMaps", *request->materialMaps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddFavoritePublicMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    query->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverUrl)) {
    query->insert(pair<string, string>("CoverUrl", *request->coverUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewMedia)) {
    query->insert(pair<string, string>("PreviewMedia", *request->previewMedia));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("AddTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
  if (!Darabonba_Util::Client::isUnset<string>(request->additionType)) {
    query->insert(pair<string, string>("AdditionType", *request->additionType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("BatchGetMediaInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelFavoritePublicMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelFavoritePublicMediaResponse(callApi(params, req, runtime));
}

CancelFavoritePublicMediaResponse Alibabacloud_ICE20201109::Client::cancelFavoritePublicMedia(shared_ptr<CancelFavoritePublicMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelFavoritePublicMediaWithOptions(request, runtime);
}

CancelUrlUploadJobsResponse Alibabacloud_ICE20201109::Client::cancelUrlUploadJobsWithOptions(shared_ptr<CancelUrlUploadJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    query->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadUrls)) {
    query->insert(pair<string, string>("UploadUrls", *request->uploadUrls));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CancelUrlUploadJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CancelUrlUploadJobsResponse(callApi(params, req, runtime));
}

CancelUrlUploadJobsResponse Alibabacloud_ICE20201109::Client::cancelUrlUploadJobs(shared_ptr<CancelUrlUploadJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return cancelUrlUploadJobsWithOptions(request, runtime);
}

CreateAuditResponse Alibabacloud_ICE20201109::Client::createAuditWithOptions(shared_ptr<CreateAuditRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->auditContent)) {
    query->insert(pair<string, string>("AuditContent", *request->auditContent));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateAudit"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateAuditResponse(callApi(params, req, runtime));
}

CreateAuditResponse Alibabacloud_ICE20201109::Client::createAudit(shared_ptr<CreateAuditRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createAuditWithOptions(request, runtime);
}

CreateCustomTemplateResponse Alibabacloud_ICE20201109::Client::createCustomTemplateWithOptions(shared_ptr<CreateCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->subtype)) {
    query->insert(pair<string, long>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfig)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateCustomTemplateResponse(callApi(params, req, runtime));
}

CreateCustomTemplateResponse Alibabacloud_ICE20201109::Client::createCustomTemplate(shared_ptr<CreateCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createCustomTemplateWithOptions(request, runtime);
}

CreateEditingProjectResponse Alibabacloud_ICE20201109::Client::createEditingProjectWithOptions(shared_ptr<CreateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessConfig)) {
    query->insert(pair<string, string>("BusinessConfig", *request->businessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipsParam)) {
    query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialMaps)) {
    query->insert(pair<string, string>("MaterialMaps", *request->materialMaps));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectType)) {
    query->insert(pair<string, string>("ProjectType", *request->projectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeline)) {
    query->insert(pair<string, string>("Timeline", *request->timeline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateEditingProjectResponse(callApi(params, req, runtime));
}

CreateEditingProjectResponse Alibabacloud_ICE20201109::Client::createEditingProject(shared_ptr<CreateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createEditingProjectWithOptions(request, runtime);
}

CreateLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::createLiveRecordTemplateWithOptions(shared_ptr<CreateLiveRecordTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<CreateLiveRecordTemplateShrinkRequest> request = make_shared<CreateLiveRecordTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<CreateLiveRecordTemplateRequestRecordFormat>>(tmpReq->recordFormat)) {
    request->recordFormatShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->recordFormat, make_shared<string>("RecordFormat"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<vector<uint8_t>>(request->name)) {
    body->insert(pair<string, vector<uint8_t>>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->recordFormatShrink)) {
    body->insert(pair<string, string>("RecordFormat", *request->recordFormatShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateLiveRecordTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateLiveRecordTemplateResponse(callApi(params, req, runtime));
}

CreateLiveRecordTemplateResponse Alibabacloud_ICE20201109::Client::createLiveRecordTemplate(shared_ptr<CreateLiveRecordTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createLiveRecordTemplateWithOptions(request, runtime);
}

CreatePipelineResponse Alibabacloud_ICE20201109::Client::createPipelineWithOptions(shared_ptr<CreatePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->speed)) {
    query->insert(pair<string, string>("Speed", *request->speed));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreatePipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreatePipelineResponse(callApi(params, req, runtime));
}

CreatePipelineResponse Alibabacloud_ICE20201109::Client::createPipeline(shared_ptr<CreatePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createPipelineWithOptions(request, runtime);
}

CreateUploadMediaResponse Alibabacloud_ICE20201109::Client::createUploadMediaWithOptions(shared_ptr<CreateUploadMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileInfo)) {
    query->insert(pair<string, string>("FileInfo", *request->fileInfo));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMetaData)) {
    query->insert(pair<string, string>("MediaMetaData", *request->mediaMetaData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postProcessConfig)) {
    query->insert(pair<string, string>("PostProcessConfig", *request->postProcessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadTargetConfig)) {
    query->insert(pair<string, string>("UploadTargetConfig", *request->uploadTargetConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUploadMediaResponse(callApi(params, req, runtime));
}

CreateUploadMediaResponse Alibabacloud_ICE20201109::Client::createUploadMedia(shared_ptr<CreateUploadMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadMediaWithOptions(request, runtime);
}

CreateUploadStreamResponse Alibabacloud_ICE20201109::Client::createUploadStreamWithOptions(shared_ptr<CreateUploadStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileExtension)) {
    query->insert(pair<string, string>("FileExtension", *request->fileExtension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->HDRType)) {
    query->insert(pair<string, string>("HDRType", *request->HDRType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("CreateUploadStream"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return CreateUploadStreamResponse(callApi(params, req, runtime));
}

CreateUploadStreamResponse Alibabacloud_ICE20201109::Client::createUploadStream(shared_ptr<CreateUploadStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return createUploadStreamWithOptions(request, runtime);
}

DeleteCategoryResponse Alibabacloud_ICE20201109::Client::deleteCategoryWithOptions(shared_ptr<DeleteCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCategory"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCategoryResponse(callApi(params, req, runtime));
}

DeleteCategoryResponse Alibabacloud_ICE20201109::Client::deleteCategory(shared_ptr<DeleteCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCategoryWithOptions(request, runtime);
}

DeleteCustomTemplateResponse Alibabacloud_ICE20201109::Client::deleteCustomTemplateWithOptions(shared_ptr<DeleteCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteCustomTemplateResponse(callApi(params, req, runtime));
}

DeleteCustomTemplateResponse Alibabacloud_ICE20201109::Client::deleteCustomTemplate(shared_ptr<DeleteCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteCustomTemplateWithOptions(request, runtime);
}

DeleteEditingProjectMaterialsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjectMaterialsWithOptions(shared_ptr<DeleteEditingProjectMaterialsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->materialIds)) {
    query->insert(pair<string, string>("MaterialIds", *request->materialIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->materialType)) {
    query->insert(pair<string, string>("MaterialType", *request->materialType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
  if (!Darabonba_Util::Client::isUnset<string>(request->projectIds)) {
    query->insert(pair<string, string>("ProjectIds", *request->projectIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteEditingProjects"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteEditingProjectsResponse(callApi(params, req, runtime));
}

DeleteEditingProjectsResponse Alibabacloud_ICE20201109::Client::deleteEditingProjects(shared_ptr<DeleteEditingProjectsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteEditingProjectsWithOptions(request, runtime);
}

DeleteLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeJobWithOptions(shared_ptr<DeleteLiveTranscodeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveTranscodeJobResponse(callApi(params, req, runtime));
}

DeleteLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeJob(shared_ptr<DeleteLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveTranscodeJobWithOptions(request, runtime);
}

DeleteLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeTemplateWithOptions(shared_ptr<DeleteLiveTranscodeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteLiveTranscodeTemplateResponse(callApi(params, req, runtime));
}

DeleteLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::deleteLiveTranscodeTemplate(shared_ptr<DeleteLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteLiveTranscodeTemplateWithOptions(request, runtime);
}

DeleteMediaInfosResponse Alibabacloud_ICE20201109::Client::deleteMediaInfosWithOptions(shared_ptr<DeleteMediaInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURLs)) {
    query->insert(pair<string, string>("InputURLs", *request->inputURLs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMediaInfosResponse(callApi(params, req, runtime));
}

DeleteMediaInfosResponse Alibabacloud_ICE20201109::Client::deleteMediaInfos(shared_ptr<DeleteMediaInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaInfosWithOptions(request, runtime);
}

DeleteMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::deleteMediaProducingJobsWithOptions(shared_ptr<DeleteMediaProducingJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> body = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    body->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"body", boost::any(Alibabacloud_OpenApiUtil::Client::parseToMap(body))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteMediaProducingJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteMediaProducingJobsResponse(callApi(params, req, runtime));
}

DeleteMediaProducingJobsResponse Alibabacloud_ICE20201109::Client::deleteMediaProducingJobs(shared_ptr<DeleteMediaProducingJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteMediaProducingJobsWithOptions(request, runtime);
}

DeletePipelineResponse Alibabacloud_ICE20201109::Client::deletePipelineWithOptions(shared_ptr<DeletePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePipelineResponse(callApi(params, req, runtime));
}

DeletePipelineResponse Alibabacloud_ICE20201109::Client::deletePipeline(shared_ptr<DeletePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePipelineWithOptions(request, runtime);
}

DeletePlayInfoResponse Alibabacloud_ICE20201109::Client::deletePlayInfoWithOptions(shared_ptr<DeletePlayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileURLs)) {
    query->insert(pair<string, string>("FileURLs", *request->fileURLs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeletePlayInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeletePlayInfoResponse(callApi(params, req, runtime));
}

DeletePlayInfoResponse Alibabacloud_ICE20201109::Client::deletePlayInfo(shared_ptr<DeletePlayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deletePlayInfoWithOptions(request, runtime);
}

DeleteSmartJobResponse Alibabacloud_ICE20201109::Client::deleteSmartJobWithOptions(shared_ptr<DeleteSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DeleteSmartJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DeleteTemplateResponse(callApi(params, req, runtime));
}

DeleteTemplateResponse Alibabacloud_ICE20201109::Client::deleteTemplate(shared_ptr<DeleteTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return deleteTemplateWithOptions(request, runtime);
}

DescribeBizUserTypeResponse Alibabacloud_ICE20201109::Client::describeBizUserTypeWithOptions(shared_ptr<DescribeBizUserTypeRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeBizUserType"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeBizUserTypeResponse(callApi(params, req, runtime));
}

DescribeBizUserTypeResponse Alibabacloud_ICE20201109::Client::describeBizUserType(shared_ptr<DescribeBizUserTypeRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeBizUserTypeWithOptions(request, runtime);
}

DescribeFilterConfigsResponse Alibabacloud_ICE20201109::Client::describeFilterConfigsWithOptions(shared_ptr<DescribeFilterConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeFilterConfigs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeFilterConfigsResponse(callApi(params, req, runtime));
}

DescribeFilterConfigsResponse Alibabacloud_ICE20201109::Client::describeFilterConfigs(shared_ptr<DescribeFilterConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeFilterConfigsWithOptions(request, runtime);
}

DescribeLivePubExperienceMetricDataResponse Alibabacloud_ICE20201109::Client::describeLivePubExperienceMetricDataWithOptions(shared_ptr<DescribeLivePubExperienceMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTs)) {
    query->insert(pair<string, string>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTs)) {
    query->insert(pair<string, string>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubProtocol)) {
    query->insert(pair<string, string>("PubProtocol", *request->pubProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalType)) {
    query->insert(pair<string, string>("TerminalType", *request->terminalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLivePubExperienceMetricData"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLivePubExperienceMetricDataResponse(callApi(params, req, runtime));
}

DescribeLivePubExperienceMetricDataResponse Alibabacloud_ICE20201109::Client::describeLivePubExperienceMetricData(shared_ptr<DescribeLivePubExperienceMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLivePubExperienceMetricDataWithOptions(request, runtime);
}

DescribeLivePubListResponse Alibabacloud_ICE20201109::Client::describeLivePubListWithOptions(shared_ptr<DescribeLivePubListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTs)) {
    query->insert(pair<string, string>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTs)) {
    query->insert(pair<string, string>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNum)) {
    query->insert(pair<string, long>("PageNum", *request->pageNum));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubProtocol)) {
    query->insert(pair<string, string>("PubProtocol", *request->pubProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalType)) {
    query->insert(pair<string, string>("TerminalType", *request->terminalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLivePubList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLivePubListResponse(callApi(params, req, runtime));
}

DescribeLivePubListResponse Alibabacloud_ICE20201109::Client::describeLivePubList(shared_ptr<DescribeLivePubListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLivePubListWithOptions(request, runtime);
}

DescribeLivePubMetricDataResponse Alibabacloud_ICE20201109::Client::describeLivePubMetricDataWithOptions(shared_ptr<DescribeLivePubMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTs)) {
    query->insert(pair<string, long>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->domain)) {
    query->insert(pair<string, string>("Domain", *request->domain));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experienceLevel)) {
    query->insert(pair<string, string>("ExperienceLevel", *request->experienceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pubProtocol)) {
    query->insert(pair<string, string>("PubProtocol", *request->pubProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sdkVersion)) {
    query->insert(pair<string, string>("SdkVersion", *request->sdkVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalType)) {
    query->insert(pair<string, string>("TerminalType", *request->terminalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLivePubMetricData"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLivePubMetricDataResponse(callApi(params, req, runtime));
}

DescribeLivePubMetricDataResponse Alibabacloud_ICE20201109::Client::describeLivePubMetricData(shared_ptr<DescribeLivePubMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLivePubMetricDataWithOptions(request, runtime);
}

DescribeLiveSubExperienceMetricDataResponse Alibabacloud_ICE20201109::Client::describeLiveSubExperienceMetricDataWithOptions(shared_ptr<DescribeLiveSubExperienceMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTs)) {
    query->insert(pair<string, string>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTs)) {
    query->insert(pair<string, string>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experienceLevel)) {
    query->insert(pair<string, string>("ExperienceLevel", *request->experienceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subProtocol)) {
    query->insert(pair<string, string>("SubProtocol", *request->subProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalType)) {
    query->insert(pair<string, string>("TerminalType", *request->terminalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveSubExperienceMetricData"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveSubExperienceMetricDataResponse(callApi(params, req, runtime));
}

DescribeLiveSubExperienceMetricDataResponse Alibabacloud_ICE20201109::Client::describeLiveSubExperienceMetricData(shared_ptr<DescribeLiveSubExperienceMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveSubExperienceMetricDataWithOptions(request, runtime);
}

DescribeLiveSubListResponse Alibabacloud_ICE20201109::Client::describeLiveSubListWithOptions(shared_ptr<DescribeLiveSubListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTs)) {
    query->insert(pair<string, string>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTs)) {
    query->insert(pair<string, string>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experienceLevel)) {
    query->insert(pair<string, string>("ExperienceLevel", *request->experienceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConfigs)) {
    query->insert(pair<string, string>("ItemConfigs", *request->itemConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->network)) {
    query->insert(pair<string, string>("Network", *request->network));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subProtocol)) {
    query->insert(pair<string, string>("SubProtocol", *request->subProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalType)) {
    query->insert(pair<string, string>("TerminalType", *request->terminalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveSubList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveSubListResponse(callApi(params, req, runtime));
}

DescribeLiveSubListResponse Alibabacloud_ICE20201109::Client::describeLiveSubList(shared_ptr<DescribeLiveSubListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveSubListWithOptions(request, runtime);
}

DescribeLiveSubMetricDataResponse Alibabacloud_ICE20201109::Client::describeLiveSubMetricDataWithOptions(shared_ptr<DescribeLiveSubMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTs)) {
    query->insert(pair<string, long>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experienceLevel)) {
    query->insert(pair<string, string>("ExperienceLevel", *request->experienceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConfigs)) {
    query->insert(pair<string, string>("ItemConfigs", *request->itemConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->network)) {
    query->insert(pair<string, string>("Network", *request->network));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sdkVersion)) {
    query->insert(pair<string, string>("SdkVersion", *request->sdkVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamName)) {
    query->insert(pair<string, string>("StreamName", *request->streamName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subProtocol)) {
    query->insert(pair<string, string>("SubProtocol", *request->subProtocol));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalType)) {
    query->insert(pair<string, string>("TerminalType", *request->terminalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeLiveSubMetricData"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeLiveSubMetricDataResponse(callApi(params, req, runtime));
}

DescribeLiveSubMetricDataResponse Alibabacloud_ICE20201109::Client::describeLiveSubMetricData(shared_ptr<DescribeLiveSubMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeLiveSubMetricDataWithOptions(request, runtime);
}

DescribeMeterIceEditUsageResponse Alibabacloud_ICE20201109::Client::describeMeterIceEditUsageWithOptions(shared_ptr<DescribeMeterIceEditUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterIceEditUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterIceEditUsageResponse(callApi(params, req, runtime));
}

DescribeMeterIceEditUsageResponse Alibabacloud_ICE20201109::Client::describeMeterIceEditUsage(shared_ptr<DescribeMeterIceEditUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterIceEditUsageWithOptions(request, runtime);
}

DescribeMeterIceLiveMediaConvertUsageResponse Alibabacloud_ICE20201109::Client::describeMeterIceLiveMediaConvertUsageWithOptions(shared_ptr<DescribeMeterIceLiveMediaConvertUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterIceLiveMediaConvertUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterIceLiveMediaConvertUsageResponse(callApi(params, req, runtime));
}

DescribeMeterIceLiveMediaConvertUsageResponse Alibabacloud_ICE20201109::Client::describeMeterIceLiveMediaConvertUsage(shared_ptr<DescribeMeterIceLiveMediaConvertUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterIceLiveMediaConvertUsageWithOptions(request, runtime);
}

DescribeMeterIceMediaConvertUHDUsageResponse Alibabacloud_ICE20201109::Client::describeMeterIceMediaConvertUHDUsageWithOptions(shared_ptr<DescribeMeterIceMediaConvertUHDUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->interval)) {
    query->insert(pair<string, string>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->regionId)) {
    query->insert(pair<string, string>("RegionId", *request->regionId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterIceMediaConvertUHDUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterIceMediaConvertUHDUsageResponse(callApi(params, req, runtime));
}

DescribeMeterIceMediaConvertUHDUsageResponse Alibabacloud_ICE20201109::Client::describeMeterIceMediaConvertUHDUsage(shared_ptr<DescribeMeterIceMediaConvertUHDUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterIceMediaConvertUHDUsageWithOptions(request, runtime);
}

DescribeMeterIceMediaConvertUsageResponse Alibabacloud_ICE20201109::Client::describeMeterIceMediaConvertUsageWithOptions(shared_ptr<DescribeMeterIceMediaConvertUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterIceMediaConvertUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterIceMediaConvertUsageResponse(callApi(params, req, runtime));
}

DescribeMeterIceMediaConvertUsageResponse Alibabacloud_ICE20201109::Client::describeMeterIceMediaConvertUsage(shared_ptr<DescribeMeterIceMediaConvertUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterIceMediaConvertUsageWithOptions(request, runtime);
}

DescribeMeterIceMpsAiUsageResponse Alibabacloud_ICE20201109::Client::describeMeterIceMpsAiUsageWithOptions(shared_ptr<DescribeMeterIceMpsAiUsageRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->interval)) {
    query->insert(pair<string, long>("Interval", *request->interval));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterIceMpsAiUsage"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterIceMpsAiUsageResponse(callApi(params, req, runtime));
}

DescribeMeterIceMpsAiUsageResponse Alibabacloud_ICE20201109::Client::describeMeterIceMpsAiUsage(shared_ptr<DescribeMeterIceMpsAiUsageRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterIceMpsAiUsageWithOptions(request, runtime);
}

DescribeMeterIceSummaryResponse Alibabacloud_ICE20201109::Client::describeMeterIceSummaryWithOptions(shared_ptr<DescribeMeterIceSummaryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->region)) {
    query->insert(pair<string, string>("Region", *request->region));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startTs)) {
    query->insert(pair<string, long>("StartTs", *request->startTs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeMeterIceSummary"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeMeterIceSummaryResponse(callApi(params, req, runtime));
}

DescribeMeterIceSummaryResponse Alibabacloud_ICE20201109::Client::describeMeterIceSummary(shared_ptr<DescribeMeterIceSummaryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeMeterIceSummaryWithOptions(request, runtime);
}

DescribePalyDetailResponse Alibabacloud_ICE20201109::Client::describePalyDetailWithOptions(shared_ptr<DescribePalyDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->traceId)) {
    query->insert(pair<string, string>("TraceId", *request->traceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePalyDetail"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePalyDetailResponse(callApi(params, req, runtime));
}

DescribePalyDetailResponse Alibabacloud_ICE20201109::Client::describePalyDetail(shared_ptr<DescribePalyDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePalyDetailWithOptions(request, runtime);
}

DescribePalyEventListResponse Alibabacloud_ICE20201109::Client::describePalyEventListWithOptions(shared_ptr<DescribePalyEventListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceId)) {
    query->insert(pair<string, string>("TraceId", *request->traceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePalyEventList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePalyEventListResponse(callApi(params, req, runtime));
}

DescribePalyEventListResponse Alibabacloud_ICE20201109::Client::describePalyEventList(shared_ptr<DescribePalyEventListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePalyEventListWithOptions(request, runtime);
}

DescribePalyListResponse Alibabacloud_ICE20201109::Client::describePalyListWithOptions(shared_ptr<DescribePalyListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTs)) {
    query->insert(pair<string, string>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTs)) {
    query->insert(pair<string, string>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderName)) {
    query->insert(pair<string, string>("OrderName", *request->orderName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderType)) {
    query->insert(pair<string, string>("OrderType", *request->orderType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->playType)) {
    query->insert(pair<string, string>("PlayType", *request->playType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceId)) {
    query->insert(pair<string, string>("TraceId", *request->traceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePalyList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePalyListResponse(callApi(params, req, runtime));
}

DescribePalyListResponse Alibabacloud_ICE20201109::Client::describePalyList(shared_ptr<DescribePalyListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePalyListWithOptions(request, runtime);
}

DescribePlayExperienceMetricDataResponse Alibabacloud_ICE20201109::Client::describePlayExperienceMetricDataWithOptions(shared_ptr<DescribePlayExperienceMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTs)) {
    query->insert(pair<string, string>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTs)) {
    query->insert(pair<string, string>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experienceLevel)) {
    query->insert(pair<string, string>("ExperienceLevel", *request->experienceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalType)) {
    query->insert(pair<string, string>("TerminalType", *request->terminalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayExperienceMetricData"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlayExperienceMetricDataResponse(callApi(params, req, runtime));
}

DescribePlayExperienceMetricDataResponse Alibabacloud_ICE20201109::Client::describePlayExperienceMetricData(shared_ptr<DescribePlayExperienceMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayExperienceMetricDataWithOptions(request, runtime);
}

DescribePlayFirstFrameDurationMetricDataResponse Alibabacloud_ICE20201109::Client::describePlayFirstFrameDurationMetricDataWithOptions(shared_ptr<DescribePlayFirstFrameDurationMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTs)) {
    query->insert(pair<string, string>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTs)) {
    query->insert(pair<string, string>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->traceId)) {
    query->insert(pair<string, string>("TraceId", *request->traceId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayFirstFrameDurationMetricData"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlayFirstFrameDurationMetricDataResponse(callApi(params, req, runtime));
}

DescribePlayFirstFrameDurationMetricDataResponse Alibabacloud_ICE20201109::Client::describePlayFirstFrameDurationMetricData(shared_ptr<DescribePlayFirstFrameDurationMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayFirstFrameDurationMetricDataWithOptions(request, runtime);
}

DescribePlayMetricDataResponse Alibabacloud_ICE20201109::Client::describePlayMetricDataWithOptions(shared_ptr<DescribePlayMetricDataRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTs)) {
    query->insert(pair<string, long>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->experienceLevel)) {
    query->insert(pair<string, string>("ExperienceLevel", *request->experienceLevel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConfigs)) {
    query->insert(pair<string, string>("ItemConfigs", *request->itemConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->network)) {
    query->insert(pair<string, string>("Network", *request->network));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sdkVersion)) {
    query->insert(pair<string, string>("SdkVersion", *request->sdkVersion));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalType)) {
    query->insert(pair<string, string>("TerminalType", *request->terminalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayMetricData"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlayMetricDataResponse(callApi(params, req, runtime));
}

DescribePlayMetricDataResponse Alibabacloud_ICE20201109::Client::describePlayMetricData(shared_ptr<DescribePlayMetricDataRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayMetricDataWithOptions(request, runtime);
}

DescribePlayQoeListResponse Alibabacloud_ICE20201109::Client::describePlayQoeListWithOptions(shared_ptr<DescribePlayQoeListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->beginTs)) {
    query->insert(pair<string, long>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->endTs)) {
    query->insert(pair<string, long>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConfigs)) {
    query->insert(pair<string, string>("ItemConfigs", *request->itemConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->network)) {
    query->insert(pair<string, string>("Network", *request->network));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalType)) {
    query->insert(pair<string, string>("TerminalType", *request->terminalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayQoeList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlayQoeListResponse(callApi(params, req, runtime));
}

DescribePlayQoeListResponse Alibabacloud_ICE20201109::Client::describePlayQoeList(shared_ptr<DescribePlayQoeListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayQoeListWithOptions(request, runtime);
}

DescribePlayQosListResponse Alibabacloud_ICE20201109::Client::describePlayQosListWithOptions(shared_ptr<DescribePlayQosListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appName)) {
    query->insert(pair<string, string>("AppName", *request->appName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->beginTs)) {
    query->insert(pair<string, string>("BeginTs", *request->beginTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTs)) {
    query->insert(pair<string, string>("EndTs", *request->endTs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->itemConfigs)) {
    query->insert(pair<string, string>("ItemConfigs", *request->itemConfigs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->metricType)) {
    query->insert(pair<string, string>("MetricType", *request->metricType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->network)) {
    query->insert(pair<string, string>("Network", *request->network));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->os)) {
    query->insert(pair<string, string>("Os", *request->os));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->terminalType)) {
    query->insert(pair<string, string>("TerminalType", *request->terminalType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribePlayQosList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribePlayQosListResponse(callApi(params, req, runtime));
}

DescribePlayQosListResponse Alibabacloud_ICE20201109::Client::describePlayQosList(shared_ptr<DescribePlayQosListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describePlayQosListWithOptions(request, runtime);
}

DescribeQueryConfigsResponse Alibabacloud_ICE20201109::Client::describeQueryConfigsWithOptions(shared_ptr<DescribeQueryConfigsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DescribeQueryConfigs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DescribeQueryConfigsResponse(callApi(params, req, runtime));
}

DescribeQueryConfigsResponse Alibabacloud_ICE20201109::Client::describeQueryConfigs(shared_ptr<DescribeQueryConfigsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return describeQueryConfigsWithOptions(request, runtime);
}

DownloadResourceByResourceIdsResponse Alibabacloud_ICE20201109::Client::downloadResourceByResourceIdsWithOptions(shared_ptr<DownloadResourceByResourceIdsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceIds)) {
    query->insert(pair<string, string>("ResourceIds", *request->resourceIds));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("DownloadResourceByResourceIds"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return DownloadResourceByResourceIdsResponse(callApi(params, req, runtime));
}

DownloadResourceByResourceIdsResponse Alibabacloud_ICE20201109::Client::downloadResourceByResourceIds(shared_ptr<DownloadResourceByResourceIdsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return downloadResourceByResourceIdsWithOptions(request, runtime);
}

GetAuditConfigResponse Alibabacloud_ICE20201109::Client::getAuditConfigWithOptions(shared_ptr<GetAuditConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetAuditConfig"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetAuditConfigResponse(callApi(params, req, runtime));
}

GetAuditConfigResponse Alibabacloud_ICE20201109::Client::getAuditConfig(shared_ptr<GetAuditConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getAuditConfigWithOptions(request, runtime);
}

GetCategoriesResponse Alibabacloud_ICE20201109::Client::getCategoriesWithOptions(shared_ptr<GetCategoriesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCategories"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCategoriesResponse(callApi(params, req, runtime));
}

GetCategoriesResponse Alibabacloud_ICE20201109::Client::getCategories(shared_ptr<GetCategoriesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCategoriesWithOptions(request, runtime);
}

GetClientConfigResponse Alibabacloud_ICE20201109::Client::getClientConfigWithOptions(shared_ptr<GetClientConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bundleId)) {
    query->insert(pair<string, string>("BundleId", *request->bundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgName)) {
    query->insert(pair<string, string>("PkgName", *request->pkgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgSignature)) {
    query->insert(pair<string, string>("PkgSignature", *request->pkgSignature));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetClientConfig"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetClientConfigResponse(callApi(params, req, runtime));
}

GetClientConfigResponse Alibabacloud_ICE20201109::Client::getClientConfig(shared_ptr<GetClientConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getClientConfigWithOptions(request, runtime);
}

GetCustomTemplateResponse Alibabacloud_ICE20201109::Client::getCustomTemplateWithOptions(shared_ptr<GetCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->subtype)) {
    query->insert(pair<string, long>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->type)) {
    query->insert(pair<string, long>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetCustomTemplateResponse(callApi(params, req, runtime));
}

GetCustomTemplateResponse Alibabacloud_ICE20201109::Client::getCustomTemplate(shared_ptr<GetCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getCustomTemplateWithOptions(request, runtime);
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
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDefaultStorageLocationResponse(callApi(params, req, runtime));
}

GetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::getDefaultStorageLocation() {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDefaultStorageLocationWithOptions(runtime);
}

GetDynamicImageJobResponse Alibabacloud_ICE20201109::Client::getDynamicImageJobWithOptions(shared_ptr<GetDynamicImageJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetDynamicImageJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetDynamicImageJobResponse(callApi(params, req, runtime));
}

GetDynamicImageJobResponse Alibabacloud_ICE20201109::Client::getDynamicImageJob(shared_ptr<GetDynamicImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getDynamicImageJobWithOptions(request, runtime);
}

GetEditingProjectResponse Alibabacloud_ICE20201109::Client::getEditingProjectWithOptions(shared_ptr<GetEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetEditingProjectMaterials"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
    {"reqBodyType", boost::any(string("formData"))},
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
    {"reqBodyType", boost::any(string("formData"))},
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
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveEditingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveEditingJobResponse(callApi(params, req, runtime));
}

GetLiveEditingJobResponse Alibabacloud_ICE20201109::Client::getLiveEditingJob(shared_ptr<GetLiveEditingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveEditingJobWithOptions(request, runtime);
}

GetLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeJobWithOptions(shared_ptr<GetLiveTranscodeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveTranscodeJobResponse(callApi(params, req, runtime));
}

GetLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeJob(shared_ptr<GetLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveTranscodeJobWithOptions(request, runtime);
}

GetLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeTemplateWithOptions(shared_ptr<GetLiveTranscodeTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetLiveTranscodeTemplateResponse(callApi(params, req, runtime));
}

GetLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::getLiveTranscodeTemplate(shared_ptr<GetLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getLiveTranscodeTemplateWithOptions(request, runtime);
}

GetMediaAuditResultResponse Alibabacloud_ICE20201109::Client::getMediaAuditResultWithOptions(shared_ptr<GetMediaAuditResultRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaAuditResult"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaAuditResultResponse(callApi(params, req, runtime));
}

GetMediaAuditResultResponse Alibabacloud_ICE20201109::Client::getMediaAuditResult(shared_ptr<GetMediaAuditResultRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaAuditResultWithOptions(request, runtime);
}

GetMediaAuditResultDetailResponse Alibabacloud_ICE20201109::Client::getMediaAuditResultDetailWithOptions(shared_ptr<GetMediaAuditResultDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaAuditResultDetail"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaAuditResultDetailResponse(callApi(params, req, runtime));
}

GetMediaAuditResultDetailResponse Alibabacloud_ICE20201109::Client::getMediaAuditResultDetail(shared_ptr<GetMediaAuditResultDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaAuditResultDetailWithOptions(request, runtime);
}

GetMediaInfoResponse Alibabacloud_ICE20201109::Client::getMediaInfoWithOptions(shared_ptr<GetMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputType)) {
    query->insert(pair<string, string>("OutputType", *request->outputType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaInfoResponse(callApi(params, req, runtime));
}

GetMediaInfoResponse Alibabacloud_ICE20201109::Client::getMediaInfo(shared_ptr<GetMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaInfoWithOptions(request, runtime);
}

GetMediaInfoJobResponse Alibabacloud_ICE20201109::Client::getMediaInfoJobWithOptions(shared_ptr<GetMediaInfoJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetMediaInfoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaInfoJobResponse(callApi(params, req, runtime));
}

GetMediaInfoJobResponse Alibabacloud_ICE20201109::Client::getMediaInfoJob(shared_ptr<GetMediaInfoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaInfoJobWithOptions(request, runtime);
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
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetMediaProducingJobResponse(callApi(params, req, runtime));
}

GetMediaProducingJobResponse Alibabacloud_ICE20201109::Client::getMediaProducingJob(shared_ptr<GetMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getMediaProducingJobWithOptions(request, runtime);
}

GetPipelineResponse Alibabacloud_ICE20201109::Client::getPipelineWithOptions(shared_ptr<GetPipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPipelineResponse(callApi(params, req, runtime));
}

GetPipelineResponse Alibabacloud_ICE20201109::Client::getPipeline(shared_ptr<GetPipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPipelineWithOptions(request, runtime);
}

GetPlayInfoResponse Alibabacloud_ICE20201109::Client::getPlayInfoWithOptions(shared_ptr<GetPlayInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPlayInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetPlayInfoResponse(callApi(params, req, runtime));
}

GetPlayInfoResponse Alibabacloud_ICE20201109::Client::getPlayInfo(shared_ptr<GetPlayInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getPlayInfoWithOptions(request, runtime);
}

GetPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::getPublicMediaInfoWithOptions(shared_ptr<GetPublicMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetPublicMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSmartHandleJobResponse(callApi(params, req, runtime));
}

GetSmartHandleJobResponse Alibabacloud_ICE20201109::Client::getSmartHandleJob(shared_ptr<GetSmartHandleJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSmartHandleJobWithOptions(request, runtime);
}

GetSnapshotJobResponse Alibabacloud_ICE20201109::Client::getSnapshotJobWithOptions(shared_ptr<GetSnapshotJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSnapshotJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSnapshotJobResponse(callApi(params, req, runtime));
}

GetSnapshotJobResponse Alibabacloud_ICE20201109::Client::getSnapshotJob(shared_ptr<GetSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSnapshotJobWithOptions(request, runtime);
}

GetSnapshotUrlsResponse Alibabacloud_ICE20201109::Client::getSnapshotUrlsWithOptions(shared_ptr<GetSnapshotUrlsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->timeout)) {
    query->insert(pair<string, long>("Timeout", *request->timeout));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSnapshotUrls"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSnapshotUrlsResponse(callApi(params, req, runtime));
}

GetSnapshotUrlsResponse Alibabacloud_ICE20201109::Client::getSnapshotUrls(shared_ptr<GetSnapshotUrlsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSnapshotUrlsWithOptions(request, runtime);
}

GetSystemTemplateResponse Alibabacloud_ICE20201109::Client::getSystemTemplateWithOptions(shared_ptr<GetSystemTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetSystemTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetSystemTemplateResponse(callApi(params, req, runtime));
}

GetSystemTemplateResponse Alibabacloud_ICE20201109::Client::getSystemTemplate(shared_ptr<GetSystemTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getSystemTemplateWithOptions(request, runtime);
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
    {"reqBodyType", boost::any(string("formData"))},
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
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTemplateMaterialsResponse(callApi(params, req, runtime));
}

GetTemplateMaterialsResponse Alibabacloud_ICE20201109::Client::getTemplateMaterials(shared_ptr<GetTemplateMaterialsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTemplateMaterialsWithOptions(request, runtime);
}

GetTranscodeJobResponse Alibabacloud_ICE20201109::Client::getTranscodeJobWithOptions(shared_ptr<GetTranscodeJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetTranscodeJobResponse(callApi(params, req, runtime));
}

GetTranscodeJobResponse Alibabacloud_ICE20201109::Client::getTranscodeJob(shared_ptr<GetTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getTranscodeJobWithOptions(request, runtime);
}

GetUrlUploadInfosResponse Alibabacloud_ICE20201109::Client::getUrlUploadInfosWithOptions(shared_ptr<GetUrlUploadInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    query->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadURLs)) {
    query->insert(pair<string, string>("UploadURLs", *request->uploadURLs));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("GetUrlUploadInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return GetUrlUploadInfosResponse(callApi(params, req, runtime));
}

GetUrlUploadInfosResponse Alibabacloud_ICE20201109::Client::getUrlUploadInfos(shared_ptr<GetUrlUploadInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return getUrlUploadInfosWithOptions(request, runtime);
}

ListAllPublicMediaTagsResponse Alibabacloud_ICE20201109::Client::listAllPublicMediaTagsWithOptions(shared_ptr<ListAllPublicMediaTagsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListAllPublicMediaTags"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListAllPublicMediaTagsResponse(callApi(params, req, runtime));
}

ListAllPublicMediaTagsResponse Alibabacloud_ICE20201109::Client::listAllPublicMediaTags(shared_ptr<ListAllPublicMediaTagsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listAllPublicMediaTagsWithOptions(request, runtime);
}

ListCustomTemplatesResponse Alibabacloud_ICE20201109::Client::listCustomTemplatesWithOptions(shared_ptr<ListCustomTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subtype)) {
    query->insert(pair<string, string>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListCustomTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListCustomTemplatesResponse(callApi(params, req, runtime));
}

ListCustomTemplatesResponse Alibabacloud_ICE20201109::Client::listCustomTemplates(shared_ptr<ListCustomTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listCustomTemplatesWithOptions(request, runtime);
}

ListDynamicImageJobsResponse Alibabacloud_ICE20201109::Client::listDynamicImageJobsWithOptions(shared_ptr<ListDynamicImageJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListDynamicImageJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListDynamicImageJobsResponse(callApi(params, req, runtime));
}

ListDynamicImageJobsResponse Alibabacloud_ICE20201109::Client::listDynamicImageJobs(shared_ptr<ListDynamicImageJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listDynamicImageJobsWithOptions(request, runtime);
}

ListLiveRecordTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveRecordTemplatesWithOptions(shared_ptr<ListLiveRecordTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, string>> query = make_shared<map<string, string>>(Alibabacloud_OpenApiUtil::Client::query(make_shared<map<string, boost::any>>(Darabonba_Util::Client::toMap(request))));
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveRecordTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("GET"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveRecordTemplatesResponse(callApi(params, req, runtime));
}

ListLiveRecordTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveRecordTemplates(shared_ptr<ListLiveRecordTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveRecordTemplatesWithOptions(request, runtime);
}

ListLiveTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeJobsWithOptions(shared_ptr<ListLiveTranscodeJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->startMode)) {
    query->insert(pair<string, long>("StartMode", *request->startMode));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->status)) {
    query->insert(pair<string, long>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveTranscodeJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveTranscodeJobsResponse(callApi(params, req, runtime));
}

ListLiveTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeJobs(shared_ptr<ListLiveTranscodeJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveTranscodeJobsWithOptions(request, runtime);
}

ListLiveTranscodeTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeTemplatesWithOptions(shared_ptr<ListLiveTranscodeTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyWord)) {
    query->insert(pair<string, string>("KeyWord", *request->keyWord));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->videoCodec)) {
    query->insert(pair<string, string>("VideoCodec", *request->videoCodec));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListLiveTranscodeTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListLiveTranscodeTemplatesResponse(callApi(params, req, runtime));
}

ListLiveTranscodeTemplatesResponse Alibabacloud_ICE20201109::Client::listLiveTranscodeTemplates(shared_ptr<ListLiveTranscodeTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listLiveTranscodeTemplatesWithOptions(request, runtime);
}

ListMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listMediaBasicInfosWithOptions(shared_ptr<ListMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeFileBasicInfo)) {
    query->insert(pair<string, bool>("IncludeFileBasicInfo", *request->includeFileBasicInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaBasicInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMediaBasicInfosResponse(callApi(params, req, runtime));
}

ListMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listMediaBasicInfos(shared_ptr<ListMediaBasicInfosRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaBasicInfosWithOptions(request, runtime);
}

ListMediaInfoJobsResponse Alibabacloud_ICE20201109::Client::listMediaInfoJobsWithOptions(shared_ptr<ListMediaInfoJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListMediaInfoJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListMediaInfoJobsResponse(callApi(params, req, runtime));
}

ListMediaInfoJobsResponse Alibabacloud_ICE20201109::Client::listMediaInfoJobs(shared_ptr<ListMediaInfoJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listMediaInfoJobsWithOptions(request, runtime);
}

ListPipelinesResponse Alibabacloud_ICE20201109::Client::listPipelinesWithOptions(shared_ptr<ListPipelinesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->speed)) {
    query->insert(pair<string, string>("Speed", *request->speed));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPipelines"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListPipelinesResponse(callApi(params, req, runtime));
}

ListPipelinesResponse Alibabacloud_ICE20201109::Client::listPipelines(shared_ptr<ListPipelinesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listPipelinesWithOptions(request, runtime);
}

ListPublicMediaBasicInfosResponse Alibabacloud_ICE20201109::Client::listPublicMediaBasicInfosWithOptions(shared_ptr<ListPublicMediaBasicInfosRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->includeFileBasicInfo)) {
    query->insert(pair<string, bool>("IncludeFileBasicInfo", *request->includeFileBasicInfo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTagId)) {
    query->insert(pair<string, string>("MediaTagId", *request->mediaTagId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListPublicMediaBasicInfos"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("Anonymous"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSmartJobsResponse(callApi(params, req, runtime));
}

ListSmartJobsResponse Alibabacloud_ICE20201109::Client::listSmartJobs(shared_ptr<ListSmartJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSmartJobsWithOptions(request, runtime);
}

ListSnapshotJobsResponse Alibabacloud_ICE20201109::Client::listSnapshotJobsWithOptions(shared_ptr<ListSnapshotJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSnapshotJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSnapshotJobsResponse(callApi(params, req, runtime));
}

ListSnapshotJobsResponse Alibabacloud_ICE20201109::Client::listSnapshotJobs(shared_ptr<ListSnapshotJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSnapshotJobsWithOptions(request, runtime);
}

ListSystemTemplatesResponse Alibabacloud_ICE20201109::Client::listSystemTemplatesWithOptions(shared_ptr<ListSystemTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNumber)) {
    query->insert(pair<string, long>("PageNumber", *request->pageNumber));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subtype)) {
    query->insert(pair<string, string>("Subtype", *request->subtype));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListSystemTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListSystemTemplatesResponse(callApi(params, req, runtime));
}

ListSystemTemplatesResponse Alibabacloud_ICE20201109::Client::listSystemTemplates(shared_ptr<ListSystemTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listSystemTemplatesWithOptions(request, runtime);
}

ListTemplatesResponse Alibabacloud_ICE20201109::Client::listTemplatesWithOptions(shared_ptr<ListTemplatesRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createSource)) {
    query->insert(pair<string, string>("CreateSource", *request->createSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->keyword)) {
    query->insert(pair<string, string>("Keyword", *request->keyword));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortType)) {
    query->insert(pair<string, string>("SortType", *request->sortType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTemplates"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTemplatesResponse(callApi(params, req, runtime));
}

ListTemplatesResponse Alibabacloud_ICE20201109::Client::listTemplates(shared_ptr<ListTemplatesRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTemplatesWithOptions(request, runtime);
}

ListTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listTranscodeJobsWithOptions(shared_ptr<ListTranscodeJobsRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->endOfCreateTime)) {
    query->insert(pair<string, string>("EndOfCreateTime", *request->endOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->orderBy)) {
    query->insert(pair<string, string>("OrderBy", *request->orderBy));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startOfCreateTime)) {
    query->insert(pair<string, string>("StartOfCreateTime", *request->startOfCreateTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("ListTranscodeJobs"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return ListTranscodeJobsResponse(callApi(params, req, runtime));
}

ListTranscodeJobsResponse Alibabacloud_ICE20201109::Client::listTranscodeJobs(shared_ptr<ListTranscodeJobsRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return listTranscodeJobsWithOptions(request, runtime);
}

NotifyPreOssUploadCompleteResponse Alibabacloud_ICE20201109::Client::notifyPreOssUploadCompleteWithOptions(shared_ptr<NotifyPreOssUploadCompleteRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->fileName)) {
    query->insert(pair<string, string>("FileName", *request->fileName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("NotifyPreOssUploadComplete"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return NotifyPreOssUploadCompleteResponse(callApi(params, req, runtime));
}

NotifyPreOssUploadCompleteResponse Alibabacloud_ICE20201109::Client::notifyPreOssUploadComplete(shared_ptr<NotifyPreOssUploadCompleteRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return notifyPreOssUploadCompleteWithOptions(request, runtime);
}

QueryCensorJobListResponse Alibabacloud_ICE20201109::Client::queryCensorJobListWithOptions(shared_ptr<QueryCensorJobListRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobIds)) {
    query->insert(pair<string, string>("JobIds", *request->jobIds));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryCensorJobList"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryCensorJobListResponse(callApi(params, req, runtime));
}

QueryCensorJobListResponse Alibabacloud_ICE20201109::Client::queryCensorJobList(shared_ptr<QueryCensorJobListRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryCensorJobListWithOptions(request, runtime);
}

QueryIProductionJobResponse Alibabacloud_ICE20201109::Client::queryIProductionJobWithOptions(shared_ptr<QueryIProductionJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryIProductionJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryIProductionJobResponse(callApi(params, req, runtime));
}

QueryIProductionJobResponse Alibabacloud_ICE20201109::Client::queryIProductionJob(shared_ptr<QueryIProductionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryIProductionJobWithOptions(request, runtime);
}

QueryMediaCensorJobDetailResponse Alibabacloud_ICE20201109::Client::queryMediaCensorJobDetailWithOptions(shared_ptr<QueryMediaCensorJobDetailRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maximumPageSize)) {
    query->insert(pair<string, long>("MaximumPageSize", *request->maximumPageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextPageToken)) {
    query->insert(pair<string, string>("NextPageToken", *request->nextPageToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->ownerAccount)) {
    query->insert(pair<string, string>("OwnerAccount", *request->ownerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->ownerId)) {
    query->insert(pair<string, long>("OwnerId", *request->ownerId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->resourceOwnerAccount)) {
    query->insert(pair<string, string>("ResourceOwnerAccount", *request->resourceOwnerAccount));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->resourceOwnerId)) {
    query->insert(pair<string, long>("ResourceOwnerId", *request->resourceOwnerId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("QueryMediaCensorJobDetail"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return QueryMediaCensorJobDetailResponse(callApi(params, req, runtime));
}

QueryMediaCensorJobDetailResponse Alibabacloud_ICE20201109::Client::queryMediaCensorJobDetail(shared_ptr<QueryMediaCensorJobDetailRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return queryMediaCensorJobDetailWithOptions(request, runtime);
}

RefreshUploadMediaResponse Alibabacloud_ICE20201109::Client::refreshUploadMediaWithOptions(shared_ptr<RefreshUploadMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RefreshUploadMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RefreshUploadMediaResponse(callApi(params, req, runtime));
}

RefreshUploadMediaResponse Alibabacloud_ICE20201109::Client::refreshUploadMedia(shared_ptr<RefreshUploadMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return refreshUploadMediaWithOptions(request, runtime);
}

RegisterMediaInfoResponse Alibabacloud_ICE20201109::Client::registerMediaInfoWithOptions(shared_ptr<RegisterMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTags)) {
    query->insert(pair<string, string>("MediaTags", *request->mediaTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaType)) {
    query->insert(pair<string, string>("MediaType", *request->mediaType));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->overwrite)) {
    query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->registerConfig)) {
    query->insert(pair<string, string>("RegisterConfig", *request->registerConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterMediaInfoResponse(callApi(params, req, runtime));
}

RegisterMediaInfoResponse Alibabacloud_ICE20201109::Client::registerMediaInfo(shared_ptr<RegisterMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaInfoWithOptions(request, runtime);
}

RegisterMediaStreamResponse Alibabacloud_ICE20201109::Client::registerMediaStreamWithOptions(shared_ptr<RegisterMediaStreamRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("RegisterMediaStream"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return RegisterMediaStreamResponse(callApi(params, req, runtime));
}

RegisterMediaStreamResponse Alibabacloud_ICE20201109::Client::registerMediaStream(shared_ptr<RegisterMediaStreamRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return registerMediaStreamWithOptions(request, runtime);
}

SearchEditingProjectResponse Alibabacloud_ICE20201109::Client::searchEditingProjectWithOptions(shared_ptr<SearchEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->createSource)) {
    query->insert(pair<string, string>("CreateSource", *request->createSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->endTime)) {
    query->insert(pair<string, string>("EndTime", *request->endTime));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->maxResults)) {
    query->insert(pair<string, long>("MaxResults", *request->maxResults));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->nextToken)) {
    query->insert(pair<string, string>("NextToken", *request->nextToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectType)) {
    query->insert(pair<string, string>("ProjectType", *request->projectType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateType)) {
    query->insert(pair<string, string>("TemplateType", *request->templateType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchEditingProjectResponse(callApi(params, req, runtime));
}

SearchEditingProjectResponse Alibabacloud_ICE20201109::Client::searchEditingProject(shared_ptr<SearchEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchEditingProjectWithOptions(request, runtime);
}

SearchMediaResponse Alibabacloud_ICE20201109::Client::searchMediaWithOptions(shared_ptr<SearchMediaRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->match)) {
    query->insert(pair<string, string>("Match", *request->match));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchMedia"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchMediaResponse(callApi(params, req, runtime));
}

SearchMediaResponse Alibabacloud_ICE20201109::Client::searchMedia(shared_ptr<SearchMediaRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchMediaWithOptions(request, runtime);
}

SearchPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::searchPublicMediaInfoWithOptions(shared_ptr<SearchPublicMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->authorized)) {
    query->insert(pair<string, bool>("Authorized", *request->authorized));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dynamicMetaDataMatchFields)) {
    query->insert(pair<string, string>("DynamicMetaDataMatchFields", *request->dynamicMetaDataMatchFields));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->favorite)) {
    query->insert(pair<string, bool>("Favorite", *request->favorite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaIds)) {
    query->insert(pair<string, string>("MediaIds", *request->mediaIds));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageNo)) {
    query->insert(pair<string, long>("PageNo", *request->pageNo));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->pageSize)) {
    query->insert(pair<string, long>("PageSize", *request->pageSize));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->sortBy)) {
    query->insert(pair<string, string>("SortBy", *request->sortBy));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SearchPublicMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SearchPublicMediaInfoResponse(callApi(params, req, runtime));
}

SearchPublicMediaInfoResponse Alibabacloud_ICE20201109::Client::searchPublicMediaInfo(shared_ptr<SearchPublicMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return searchPublicMediaInfoWithOptions(request, runtime);
}

SendLiveTranscodeJobCommandResponse Alibabacloud_ICE20201109::Client::sendLiveTranscodeJobCommandWithOptions(shared_ptr<SendLiveTranscodeJobCommandRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->command)) {
    query->insert(pair<string, string>("Command", *request->command));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SendLiveTranscodeJobCommand"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SendLiveTranscodeJobCommandResponse(callApi(params, req, runtime));
}

SendLiveTranscodeJobCommandResponse Alibabacloud_ICE20201109::Client::sendLiveTranscodeJobCommand(shared_ptr<SendLiveTranscodeJobCommandRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return sendLiveTranscodeJobCommandWithOptions(request, runtime);
}

SetAuditConfigResponse Alibabacloud_ICE20201109::Client::setAuditConfigWithOptions(shared_ptr<SetAuditConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->channel)) {
    query->insert(pair<string, string>("Channel", *request->channel));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->legalSwitch)) {
    query->insert(pair<string, string>("LegalSwitch", *request->legalSwitch));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetAuditConfig"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetAuditConfigResponse(callApi(params, req, runtime));
}

SetAuditConfigResponse Alibabacloud_ICE20201109::Client::setAuditConfig(shared_ptr<SetAuditConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setAuditConfigWithOptions(request, runtime);
}

SetClientConfigResponse Alibabacloud_ICE20201109::Client::setClientConfigWithOptions(shared_ptr<SetClientConfigRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bundleId)) {
    query->insert(pair<string, string>("BundleId", *request->bundleId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUploadBucket)) {
    query->insert(pair<string, string>("ClientUploadBucket", *request->clientUploadBucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUploadPath)) {
    query->insert(pair<string, string>("ClientUploadPath", *request->clientUploadPath));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clientUploadStorageType)) {
    query->insert(pair<string, string>("ClientUploadStorageType", *request->clientUploadStorageType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgName)) {
    query->insert(pair<string, string>("PkgName", *request->pkgName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pkgSignature)) {
    query->insert(pair<string, string>("PkgSignature", *request->pkgSignature));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetClientConfig"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetClientConfigResponse(callApi(params, req, runtime));
}

SetClientConfigResponse Alibabacloud_ICE20201109::Client::setClientConfig(shared_ptr<SetClientConfigRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setClientConfigWithOptions(request, runtime);
}

SetDefaultCustomTemplateResponse Alibabacloud_ICE20201109::Client::setDefaultCustomTemplateWithOptions(shared_ptr<SetDefaultCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SetDefaultCustomTemplateResponse(callApi(params, req, runtime));
}

SetDefaultCustomTemplateResponse Alibabacloud_ICE20201109::Client::setDefaultCustomTemplate(shared_ptr<SetDefaultCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return setDefaultCustomTemplateWithOptions(request, runtime);
}

SetDefaultStorageLocationResponse Alibabacloud_ICE20201109::Client::setDefaultStorageLocationWithOptions(shared_ptr<SetDefaultStorageLocationRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->bucket)) {
    query->insert(pair<string, string>("Bucket", *request->bucket));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->path)) {
    query->insert(pair<string, string>("Path", *request->path));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->storageType)) {
    query->insert(pair<string, string>("StorageType", *request->storageType));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetDefaultStorageLocation"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
  if (!Darabonba_Util::Client::isUnset<string>(request->authKey)) {
    query->insert(pair<string, string>("AuthKey", *request->authKey));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->authSwitch)) {
    query->insert(pair<string, string>("AuthSwitch", *request->authSwitch));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackQueueName)) {
    query->insert(pair<string, string>("CallbackQueueName", *request->callbackQueueName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackType)) {
    query->insert(pair<string, string>("CallbackType", *request->callbackType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->callbackURL)) {
    query->insert(pair<string, string>("CallbackURL", *request->callbackURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->eventTypeList)) {
    query->insert(pair<string, string>("EventTypeList", *request->eventTypeList));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SetEventCallback"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->duration)) {
    query->insert(pair<string, string>("Duration", *request->duration));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputFile)) {
    query->insert(pair<string, string>("InputFile", *request->inputFile));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->startTime)) {
    query->insert(pair<string, string>("StartTime", *request->startTime));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitASRJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    query->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<bool>(request->overwrite)) {
    query->insert(pair<string, bool>("Overwrite", *request->overwrite));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitAudioProduceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitAudioProduceJobResponse(callApi(params, req, runtime));
}

SubmitAudioProduceJobResponse Alibabacloud_ICE20201109::Client::submitAudioProduceJob(shared_ptr<SubmitAudioProduceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitAudioProduceJobWithOptions(request, runtime);
}

SubmitBatchMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitBatchMediaProducingJobWithOptions(shared_ptr<SubmitBatchMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipsParam)) {
    query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingProduceConfig)) {
    query->insert(pair<string, string>("EditingProduceConfig", *request->editingProduceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobTitle)) {
    query->insert(pair<string, string>("JobTitle", *request->jobTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaConfig)) {
    query->insert(pair<string, string>("OutputMediaConfig", *request->outputMediaConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaTarget)) {
    query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->outputNum)) {
    query->insert(pair<string, long>("OutputNum", *request->outputNum));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectMetadata)) {
    query->insert(pair<string, string>("ProjectMetadata", *request->projectMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->submitBy)) {
    query->insert(pair<string, string>("SubmitBy", *request->submitBy));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitBatchMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitBatchMediaProducingJobResponse(callApi(params, req, runtime));
}

SubmitBatchMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitBatchMediaProducingJob(shared_ptr<SubmitBatchMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitBatchMediaProducingJobWithOptions(request, runtime);
}

SubmitDynamicChartJobResponse Alibabacloud_ICE20201109::Client::submitDynamicChartJobWithOptions(shared_ptr<SubmitDynamicChartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->axisParams)) {
    query->insert(pair<string, string>("AxisParams", *request->axisParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->background)) {
    query->insert(pair<string, string>("Background", *request->background));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chartConfig)) {
    query->insert(pair<string, string>("ChartConfig", *request->chartConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chartTitle)) {
    query->insert(pair<string, string>("ChartTitle", *request->chartTitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->chartType)) {
    query->insert(pair<string, string>("ChartType", *request->chartType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->dataSource)) {
    query->insert(pair<string, string>("DataSource", *request->dataSource));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->input)) {
    query->insert(pair<string, string>("Input", *request->input));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->subtitle)) {
    query->insert(pair<string, string>("Subtitle", *request->subtitle));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->unit)) {
    query->insert(pair<string, string>("Unit", *request->unit));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDynamicChartJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDynamicChartJobResponse(callApi(params, req, runtime));
}

SubmitDynamicChartJobResponse Alibabacloud_ICE20201109::Client::submitDynamicChartJob(shared_ptr<SubmitDynamicChartJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDynamicChartJobWithOptions(request, runtime);
}

SubmitDynamicImageJobResponse Alibabacloud_ICE20201109::Client::submitDynamicImageJobWithOptions(shared_ptr<SubmitDynamicImageJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitDynamicImageJobShrinkRequest> request = make_shared<SubmitDynamicImageJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->input->toMap()), make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->output->toMap()), make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->scheduleConfig->toMap()), make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitDynamicImageJobRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->templateConfig->toMap()), make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitDynamicImageJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitDynamicImageJobResponse(callApi(params, req, runtime));
}

SubmitDynamicImageJobResponse Alibabacloud_ICE20201109::Client::submitDynamicImageJob(shared_ptr<SubmitDynamicImageJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitDynamicImageJobWithOptions(request, runtime);
}

SubmitIProductionJobResponse Alibabacloud_ICE20201109::Client::submitIProductionJobWithOptions(shared_ptr<SubmitIProductionJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitIProductionJobShrinkRequest> request = make_shared<SubmitIProductionJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitIProductionJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->input->toMap()), make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitIProductionJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->output->toMap()), make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitIProductionJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->scheduleConfig->toMap()), make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->functionName)) {
    query->insert(pair<string, string>("FunctionName", *request->functionName));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobParams)) {
    query->insert(pair<string, string>("JobParams", *request->jobParams));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitIProductionJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitIProductionJobResponse(callApi(params, req, runtime));
}

SubmitIProductionJobResponse Alibabacloud_ICE20201109::Client::submitIProductionJob(shared_ptr<SubmitIProductionJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitIProductionJobWithOptions(request, runtime);
}

SubmitLiveEditingJobResponse Alibabacloud_ICE20201109::Client::submitLiveEditingJobWithOptions(shared_ptr<SubmitLiveEditingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clips)) {
    query->insert(pair<string, string>("Clips", *request->clips));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->liveStreamConfig)) {
    query->insert(pair<string, string>("LiveStreamConfig", *request->liveStreamConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaProduceConfig)) {
    query->insert(pair<string, string>("MediaProduceConfig", *request->mediaProduceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaConfig)) {
    query->insert(pair<string, string>("OutputMediaConfig", *request->outputMediaConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaTarget)) {
    query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitLiveEditingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitLiveEditingJobResponse(callApi(params, req, runtime));
}

SubmitLiveEditingJobResponse Alibabacloud_ICE20201109::Client::submitLiveEditingJob(shared_ptr<SubmitLiveEditingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitLiveEditingJobWithOptions(request, runtime);
}

SubmitMediaCensorJobResponse Alibabacloud_ICE20201109::Client::submitMediaCensorJobWithOptions(shared_ptr<SubmitMediaCensorJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitMediaCensorJobShrinkRequest> request = make_shared<SubmitMediaCensorJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitMediaCensorJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->input->toMap()), make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitMediaCensorJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->scheduleConfig->toMap()), make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->barrages)) {
    query->insert(pair<string, string>("Barrages", *request->barrages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverImages)) {
    query->insert(pair<string, string>("CoverImages", *request->coverImages));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->notifyUrl)) {
    query->insert(pair<string, string>("NotifyUrl", *request->notifyUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->output)) {
    query->insert(pair<string, string>("Output", *request->output));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaCensorJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitMediaCensorJobResponse(callApi(params, req, runtime));
}

SubmitMediaCensorJobResponse Alibabacloud_ICE20201109::Client::submitMediaCensorJob(shared_ptr<SubmitMediaCensorJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaCensorJobWithOptions(request, runtime);
}

SubmitMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitMediaInfoJobWithOptions(shared_ptr<SubmitMediaInfoJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitMediaInfoJobShrinkRequest> request = make_shared<SubmitMediaInfoJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitMediaInfoJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->input->toMap()), make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitMediaInfoJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->scheduleConfig->toMap()), make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaInfoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitMediaInfoJobResponse(callApi(params, req, runtime));
}

SubmitMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitMediaInfoJob(shared_ptr<SubmitMediaInfoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaInfoJobWithOptions(request, runtime);
}

SubmitMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitMediaProducingJobWithOptions(shared_ptr<SubmitMediaProducingJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->clientToken)) {
    query->insert(pair<string, string>("ClientToken", *request->clientToken));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipsParam)) {
    query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingProduceConfig)) {
    query->insert(pair<string, string>("EditingProduceConfig", *request->editingProduceConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaConfig)) {
    query->insert(pair<string, string>("OutputMediaConfig", *request->outputMediaConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputMediaTarget)) {
    query->insert(pair<string, string>("OutputMediaTarget", *request->outputMediaTarget));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectMetadata)) {
    query->insert(pair<string, string>("ProjectMetadata", *request->projectMetadata));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeline)) {
    query->insert(pair<string, string>("Timeline", *request->timeline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitMediaProducingJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitMediaProducingJobResponse(callApi(params, req, runtime));
}

SubmitMediaProducingJobResponse Alibabacloud_ICE20201109::Client::submitMediaProducingJob(shared_ptr<SubmitMediaProducingJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitMediaProducingJobWithOptions(request, runtime);
}

SubmitSnapshotJobResponse Alibabacloud_ICE20201109::Client::submitSnapshotJobWithOptions(shared_ptr<SubmitSnapshotJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSnapshotJobShrinkRequest> request = make_shared<SubmitSnapshotJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->input->toMap()), make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestOutput>(tmpReq->output)) {
    request->outputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->output->toMap()), make_shared<string>("Output"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->scheduleConfig->toMap()), make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSnapshotJobRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->templateConfig->toMap()), make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputShrink)) {
    query->insert(pair<string, string>("Output", *request->outputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSnapshotJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSnapshotJobResponse(callApi(params, req, runtime));
}

SubmitSnapshotJobResponse Alibabacloud_ICE20201109::Client::submitSnapshotJob(shared_ptr<SubmitSnapshotJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSnapshotJobWithOptions(request, runtime);
}

SubmitSubtitleProduceJobResponse Alibabacloud_ICE20201109::Client::submitSubtitleProduceJobWithOptions(shared_ptr<SubmitSubtitleProduceJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->editingConfig)) {
    query->insert(pair<string, string>("EditingConfig", *request->editingConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputConfig)) {
    query->insert(pair<string, string>("InputConfig", *request->inputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->isAsync)) {
    query->insert(pair<string, long>("IsAsync", *request->isAsync));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputConfig)) {
    query->insert(pair<string, string>("OutputConfig", *request->outputConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->type)) {
    query->insert(pair<string, string>("Type", *request->type));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSubtitleProduceJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSubtitleProduceJobResponse(callApi(params, req, runtime));
}

SubmitSubtitleProduceJobResponse Alibabacloud_ICE20201109::Client::submitSubtitleProduceJob(shared_ptr<SubmitSubtitleProduceJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSubtitleProduceJobWithOptions(request, runtime);
}

SubmitSyncMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitSyncMediaInfoJobWithOptions(shared_ptr<SubmitSyncMediaInfoJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitSyncMediaInfoJobShrinkRequest> request = make_shared<SubmitSyncMediaInfoJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<SubmitSyncMediaInfoJobRequestInput>(tmpReq->input)) {
    request->inputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->input->toMap()), make_shared<string>("Input"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitSyncMediaInfoJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->scheduleConfig->toMap()), make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputShrink)) {
    query->insert(pair<string, string>("Input", *request->inputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitSyncMediaInfoJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitSyncMediaInfoJobResponse(callApi(params, req, runtime));
}

SubmitSyncMediaInfoJobResponse Alibabacloud_ICE20201109::Client::submitSyncMediaInfoJob(shared_ptr<SubmitSyncMediaInfoJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitSyncMediaInfoJobWithOptions(request, runtime);
}

SubmitTranscodeJobResponse Alibabacloud_ICE20201109::Client::submitTranscodeJobWithOptions(shared_ptr<SubmitTranscodeJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<SubmitTranscodeJobShrinkRequest> request = make_shared<SubmitTranscodeJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<vector<SubmitTranscodeJobRequestInputGroup>>(tmpReq->inputGroup)) {
    request->inputGroupShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->inputGroup, make_shared<string>("InputGroup"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<vector<SubmitTranscodeJobRequestOutputGroup>>(tmpReq->outputGroup)) {
    request->outputGroupShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(tmpReq->outputGroup, make_shared<string>("OutputGroup"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<SubmitTranscodeJobRequestScheduleConfig>(tmpReq->scheduleConfig)) {
    request->scheduleConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->scheduleConfig->toMap()), make_shared<string>("ScheduleConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->inputGroupShrink)) {
    query->insert(pair<string, string>("InputGroup", *request->inputGroupShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->outputGroupShrink)) {
    query->insert(pair<string, string>("OutputGroup", *request->outputGroupShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->scheduleConfigShrink)) {
    query->insert(pair<string, string>("ScheduleConfig", *request->scheduleConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("SubmitTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return SubmitTranscodeJobResponse(callApi(params, req, runtime));
}

SubmitTranscodeJobResponse Alibabacloud_ICE20201109::Client::submitTranscodeJob(shared_ptr<SubmitTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return submitTranscodeJobWithOptions(request, runtime);
}

UpdateCategoryResponse Alibabacloud_ICE20201109::Client::updateCategoryWithOptions(shared_ptr<UpdateCategoryRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->cateName)) {
    query->insert(pair<string, string>("CateName", *request->cateName));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCategory"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCategoryResponse(callApi(params, req, runtime));
}

UpdateCategoryResponse Alibabacloud_ICE20201109::Client::updateCategory(shared_ptr<UpdateCategoryRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCategoryWithOptions(request, runtime);
}

UpdateCustomTemplateResponse Alibabacloud_ICE20201109::Client::updateCustomTemplateWithOptions(shared_ptr<UpdateCustomTemplateRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfig)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateCustomTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateCustomTemplateResponse(callApi(params, req, runtime));
}

UpdateCustomTemplateResponse Alibabacloud_ICE20201109::Client::updateCustomTemplate(shared_ptr<UpdateCustomTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateCustomTemplateWithOptions(request, runtime);
}

UpdateEditingProjectResponse Alibabacloud_ICE20201109::Client::updateEditingProjectWithOptions(shared_ptr<UpdateEditingProjectRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->businessStatus)) {
    query->insert(pair<string, string>("BusinessStatus", *request->businessStatus));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->clipsParam)) {
    query->insert(pair<string, string>("ClipsParam", *request->clipsParam));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->projectId)) {
    query->insert(pair<string, string>("ProjectId", *request->projectId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timeline)) {
    query->insert(pair<string, string>("Timeline", *request->timeline));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateEditingProject"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateEditingProjectResponse(callApi(params, req, runtime));
}

UpdateEditingProjectResponse Alibabacloud_ICE20201109::Client::updateEditingProject(shared_ptr<UpdateEditingProjectRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateEditingProjectWithOptions(request, runtime);
}

UpdateLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeJobWithOptions(shared_ptr<UpdateLiveTranscodeJobRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLiveTranscodeJobShrinkRequest> request = make_shared<UpdateLiveTranscodeJobShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeJobRequestStreamInput>(tmpReq->streamInput)) {
    request->streamInputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->streamInput->toMap()), make_shared<string>("StreamInput"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeJobRequestTimedConfig>(tmpReq->timedConfig)) {
    request->timedConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->timedConfig->toMap()), make_shared<string>("TimedConfig"), make_shared<string>("json")));
  }
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeJobRequestTranscodeOutput>(tmpReq->transcodeOutput)) {
    request->transcodeOutputShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->transcodeOutput->toMap()), make_shared<string>("TranscodeOutput"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamInputShrink)) {
    query->insert(pair<string, string>("StreamInput", *request->streamInputShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->timedConfigShrink)) {
    query->insert(pair<string, string>("TimedConfig", *request->timedConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->transcodeOutputShrink)) {
    query->insert(pair<string, string>("TranscodeOutput", *request->transcodeOutputShrink));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveTranscodeJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveTranscodeJobResponse(callApi(params, req, runtime));
}

UpdateLiveTranscodeJobResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeJob(shared_ptr<UpdateLiveTranscodeJobRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveTranscodeJobWithOptions(request, runtime);
}

UpdateLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeTemplateWithOptions(shared_ptr<UpdateLiveTranscodeTemplateRequest> tmpReq, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(tmpReq);
  shared_ptr<UpdateLiveTranscodeTemplateShrinkRequest> request = make_shared<UpdateLiveTranscodeTemplateShrinkRequest>();
  Alibabacloud_OpenApiUtil::Client::convert(tmpReq, request);
  if (!Darabonba_Util::Client::isUnset<UpdateLiveTranscodeTemplateRequestTemplateConfig>(tmpReq->templateConfig)) {
    request->templateConfigShrink = make_shared<string>(Alibabacloud_OpenApiUtil::Client::arrayToStringWithSpecifiedStyle(make_shared<map<string, boost::any>>(tmpReq->templateConfig->toMap()), make_shared<string>("TemplateConfig"), make_shared<string>("json")));
  }
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateConfigShrink)) {
    query->insert(pair<string, string>("TemplateConfig", *request->templateConfigShrink));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateLiveTranscodeTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateLiveTranscodeTemplateResponse(callApi(params, req, runtime));
}

UpdateLiveTranscodeTemplateResponse Alibabacloud_ICE20201109::Client::updateLiveTranscodeTemplate(shared_ptr<UpdateLiveTranscodeTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateLiveTranscodeTemplateWithOptions(request, runtime);
}

UpdateMediaInfoResponse Alibabacloud_ICE20201109::Client::updateMediaInfoWithOptions(shared_ptr<UpdateMediaInfoRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<bool>(request->appendTags)) {
    query->insert(pair<string, bool>("AppendTags", *request->appendTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->businessType)) {
    query->insert(pair<string, string>("BusinessType", *request->businessType));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->cateId)) {
    query->insert(pair<string, long>("CateId", *request->cateId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->category)) {
    query->insert(pair<string, string>("Category", *request->category));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverURL)) {
    query->insert(pair<string, string>("CoverURL", *request->coverURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->description)) {
    query->insert(pair<string, string>("Description", *request->description));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->inputURL)) {
    query->insert(pair<string, string>("InputURL", *request->inputURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaTags)) {
    query->insert(pair<string, string>("MediaTags", *request->mediaTags));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->title)) {
    query->insert(pair<string, string>("Title", *request->title));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateMediaInfo"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateMediaInfoResponse(callApi(params, req, runtime));
}

UpdateMediaInfoResponse Alibabacloud_ICE20201109::Client::updateMediaInfo(shared_ptr<UpdateMediaInfoRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateMediaInfoWithOptions(request, runtime);
}

UpdatePipelineResponse Alibabacloud_ICE20201109::Client::updatePipelineWithOptions(shared_ptr<UpdatePipelineRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->pipelineId)) {
    query->insert(pair<string, string>("PipelineId", *request->pipelineId));
  }
  if (!Darabonba_Util::Client::isUnset<long>(request->priority)) {
    query->insert(pair<string, long>("Priority", *request->priority));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdatePipeline"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdatePipelineResponse(callApi(params, req, runtime));
}

UpdatePipelineResponse Alibabacloud_ICE20201109::Client::updatePipeline(shared_ptr<UpdatePipelineRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updatePipelineWithOptions(request, runtime);
}

UpdateSmartJobResponse Alibabacloud_ICE20201109::Client::updateSmartJobWithOptions(shared_ptr<UpdateSmartJobRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->FEExtend)) {
    query->insert(pair<string, string>("FEExtend", *request->FEExtend));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->jobId)) {
    query->insert(pair<string, string>("JobId", *request->jobId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateSmartJob"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
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
  if (!Darabonba_Util::Client::isUnset<string>(request->config)) {
    query->insert(pair<string, string>("Config", *request->config));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->coverUrl)) {
    query->insert(pair<string, string>("CoverUrl", *request->coverUrl));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->name)) {
    query->insert(pair<string, string>("Name", *request->name));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->previewMedia)) {
    query->insert(pair<string, string>("PreviewMedia", *request->previewMedia));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->relatedMediaids)) {
    query->insert(pair<string, string>("RelatedMediaids", *request->relatedMediaids));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->source)) {
    query->insert(pair<string, string>("Source", *request->source));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->status)) {
    query->insert(pair<string, string>("Status", *request->status));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->templateId)) {
    query->insert(pair<string, string>("TemplateId", *request->templateId));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UpdateTemplate"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UpdateTemplateResponse(callApi(params, req, runtime));
}

UpdateTemplateResponse Alibabacloud_ICE20201109::Client::updateTemplate(shared_ptr<UpdateTemplateRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return updateTemplateWithOptions(request, runtime);
}

UploadMediaByURLResponse Alibabacloud_ICE20201109::Client::uploadMediaByURLWithOptions(shared_ptr<UploadMediaByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->appId)) {
    query->insert(pair<string, string>("AppId", *request->appId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->entityId)) {
    query->insert(pair<string, string>("EntityId", *request->entityId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaMetaData)) {
    query->insert(pair<string, string>("MediaMetaData", *request->mediaMetaData));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->postProcessConfig)) {
    query->insert(pair<string, string>("PostProcessConfig", *request->postProcessConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadTargetConfig)) {
    query->insert(pair<string, string>("UploadTargetConfig", *request->uploadTargetConfig));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->uploadURLs)) {
    query->insert(pair<string, string>("UploadURLs", *request->uploadURLs));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadMediaByURL"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadMediaByURLResponse(callApi(params, req, runtime));
}

UploadMediaByURLResponse Alibabacloud_ICE20201109::Client::uploadMediaByURL(shared_ptr<UploadMediaByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadMediaByURLWithOptions(request, runtime);
}

UploadStreamByURLResponse Alibabacloud_ICE20201109::Client::uploadStreamByURLWithOptions(shared_ptr<UploadStreamByURLRequest> request, shared_ptr<Darabonba_Util::RuntimeOptions> runtime) {
  Darabonba_Util::Client::validateModel(request);
  shared_ptr<map<string, boost::any>> query = make_shared<map<string, boost::any>>(map<string, boost::any>());
  if (!Darabonba_Util::Client::isUnset<string>(request->definition)) {
    query->insert(pair<string, string>("Definition", *request->definition));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->fileExtension)) {
    query->insert(pair<string, string>("FileExtension", *request->fileExtension));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->HDRType)) {
    query->insert(pair<string, string>("HDRType", *request->HDRType));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->mediaId)) {
    query->insert(pair<string, string>("MediaId", *request->mediaId));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->streamURL)) {
    query->insert(pair<string, string>("StreamURL", *request->streamURL));
  }
  if (!Darabonba_Util::Client::isUnset<string>(request->userData)) {
    query->insert(pair<string, string>("UserData", *request->userData));
  }
  shared_ptr<Alibabacloud_OpenApi::OpenApiRequest> req = make_shared<Alibabacloud_OpenApi::OpenApiRequest>(map<string, boost::any>({
    {"query", boost::any(Alibabacloud_OpenApiUtil::Client::query(query))}
  }));
  shared_ptr<Alibabacloud_OpenApi::Params> params = make_shared<Alibabacloud_OpenApi::Params>(map<string, boost::any>({
    {"action", boost::any(string("UploadStreamByURL"))},
    {"version", boost::any(string("2020-11-09"))},
    {"protocol", boost::any(string("HTTPS"))},
    {"pathname", boost::any(string("/"))},
    {"method", boost::any(string("POST"))},
    {"authType", boost::any(string("AK"))},
    {"style", boost::any(string("RPC"))},
    {"reqBodyType", boost::any(string("formData"))},
    {"bodyType", boost::any(string("json"))}
  }));
  return UploadStreamByURLResponse(callApi(params, req, runtime));
}

UploadStreamByURLResponse Alibabacloud_ICE20201109::Client::uploadStreamByURL(shared_ptr<UploadStreamByURLRequest> request) {
  shared_ptr<Darabonba_Util::RuntimeOptions> runtime = make_shared<Darabonba_Util::RuntimeOptions>();
  return uploadStreamByURLWithOptions(request, runtime);
}

