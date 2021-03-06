#
# Copyright 2009-2017 Alibaba Cloud All rights reserved.
# 
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
# 
#      http://www.apache.org/licenses/LICENSE-2.0
# 
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
#

set(public_header_dir ${CMAKE_CURRENT_SOURCE_DIR}/../include)

set(domain_public_header 
	include/alibabacloud/domain/DomainClient.h
	include/alibabacloud/domain/DomainExport.h )

set(domain_public_header_model 
	include/alibabacloud/domain/model/SaveSingleTaskForDomainNameProxyServiceRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForDomainNameProxyServiceResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForModifyingDnsHostRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForModifyingDnsHostResult.h
	include/alibabacloud/domain/model/SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest.h
	include/alibabacloud/domain/model/SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResult.h
	include/alibabacloud/domain/model/QueryBookingDomainInfoRequest.h
	include/alibabacloud/domain/model/QueryBookingDomainInfoResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForSynchronizingDnsHostRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForSynchronizingDnsHostResult.h
	include/alibabacloud/domain/model/QueryAuctionsRequest.h
	include/alibabacloud/domain/model/QueryAuctionsResult.h
	include/alibabacloud/domain/model/SaveBatchTaskForUpdatingContactInfoByNewContactRequest.h
	include/alibabacloud/domain/model/SaveBatchTaskForUpdatingContactInfoByNewContactResult.h
	include/alibabacloud/domain/model/SaveRegistrantProfileRequest.h
	include/alibabacloud/domain/model/SaveRegistrantProfileResult.h
	include/alibabacloud/domain/model/QueryDomainListRequest.h
	include/alibabacloud/domain/model/QueryDomainListResult.h
	include/alibabacloud/domain/model/CheckDomainRequest.h
	include/alibabacloud/domain/model/CheckDomainResult.h
	include/alibabacloud/domain/model/QueryChangeLogListRequest.h
	include/alibabacloud/domain/model/QueryChangeLogListResult.h
	include/alibabacloud/domain/model/TransferInCheckMailTokenRequest.h
	include/alibabacloud/domain/model/TransferInCheckMailTokenResult.h
	include/alibabacloud/domain/model/CheckTransferInFeasibilityRequest.h
	include/alibabacloud/domain/model/CheckTransferInFeasibilityResult.h
	include/alibabacloud/domain/model/QueryFailReasonForDomainRealNameVerificationRequest.h
	include/alibabacloud/domain/model/QueryFailReasonForDomainRealNameVerificationResult.h
	include/alibabacloud/domain/model/QueryTransferOutInfoRequest.h
	include/alibabacloud/domain/model/QueryTransferOutInfoResult.h
	include/alibabacloud/domain/model/SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest.h
	include/alibabacloud/domain/model/SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForCreatingOrderRedeemRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForCreatingOrderRedeemResult.h
	include/alibabacloud/domain/model/QueryTaskDetailListRequest.h
	include/alibabacloud/domain/model/QueryTaskDetailListResult.h
	include/alibabacloud/domain/model/VerifyContactFieldRequest.h
	include/alibabacloud/domain/model/VerifyContactFieldResult.h
	include/alibabacloud/domain/model/RegistrantProfileRealNameVerificationRequest.h
	include/alibabacloud/domain/model/RegistrantProfileRealNameVerificationResult.h
	include/alibabacloud/domain/model/QueryBidRecordsRequest.h
	include/alibabacloud/domain/model/QueryBidRecordsResult.h
	include/alibabacloud/domain/model/SaveBatchTaskForCreatingOrderActivateRequest.h
	include/alibabacloud/domain/model/SaveBatchTaskForCreatingOrderActivateResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForTransferProhibitionLockRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForTransferProhibitionLockResult.h
	include/alibabacloud/domain/model/SaveTaskForSubmittingDomainDeleteRequest.h
	include/alibabacloud/domain/model/SaveTaskForSubmittingDomainDeleteResult.h
	include/alibabacloud/domain/model/QueryTransferInListRequest.h
	include/alibabacloud/domain/model/QueryTransferInListResult.h
	include/alibabacloud/domain/model/TransferInRefetchWhoisEmailRequest.h
	include/alibabacloud/domain/model/TransferInRefetchWhoisEmailResult.h
	include/alibabacloud/domain/model/QueryTransferInByInstanceIdRequest.h
	include/alibabacloud/domain/model/QueryTransferInByInstanceIdResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForUpdateProhibitionLockRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForUpdateProhibitionLockResult.h
	include/alibabacloud/domain/model/QueryContactInfoRequest.h
	include/alibabacloud/domain/model/QueryContactInfoResult.h
	include/alibabacloud/domain/model/ReserveDomainRequest.h
	include/alibabacloud/domain/model/ReserveDomainResult.h
	include/alibabacloud/domain/model/TransferInResendMailTokenRequest.h
	include/alibabacloud/domain/model/TransferInResendMailTokenResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForQueryingTransferAuthorizationCodeRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForQueryingTransferAuthorizationCodeResult.h
	include/alibabacloud/domain/model/GetReserveDomainUrlRequest.h
	include/alibabacloud/domain/model/GetReserveDomainUrlResult.h
	include/alibabacloud/domain/model/QueryTaskDetailHistoryRequest.h
	include/alibabacloud/domain/model/QueryTaskDetailHistoryResult.h
	include/alibabacloud/domain/model/QueryDomainGroupListRequest.h
	include/alibabacloud/domain/model/QueryDomainGroupListResult.h
	include/alibabacloud/domain/model/ListEmailVerificationRequest.h
	include/alibabacloud/domain/model/ListEmailVerificationResult.h
	include/alibabacloud/domain/model/SubmitEmailVerificationRequest.h
	include/alibabacloud/domain/model/SubmitEmailVerificationResult.h
	include/alibabacloud/domain/model/ResendEmailVerificationRequest.h
	include/alibabacloud/domain/model/ResendEmailVerificationResult.h
	include/alibabacloud/domain/model/BidDomainRequest.h
	include/alibabacloud/domain/model/BidDomainResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForCancelingTransferOutRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForCancelingTransferOutResult.h
	include/alibabacloud/domain/model/AcknowledgeTaskResultRequest.h
	include/alibabacloud/domain/model/AcknowledgeTaskResultResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForApprovingTransferOutRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForApprovingTransferOutResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForUpdatingContactInfoRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForUpdatingContactInfoResult.h
	include/alibabacloud/domain/model/SaveBatchTaskForCreatingOrderTransferRequest.h
	include/alibabacloud/domain/model/SaveBatchTaskForCreatingOrderTransferResult.h
	include/alibabacloud/domain/model/SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest.h
	include/alibabacloud/domain/model/SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResult.h
	include/alibabacloud/domain/model/SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest.h
	include/alibabacloud/domain/model/SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResult.h
	include/alibabacloud/domain/model/QueryAuctionDetailRequest.h
	include/alibabacloud/domain/model/QueryAuctionDetailResult.h
	include/alibabacloud/domain/model/QueryDomainByInstanceIdRequest.h
	include/alibabacloud/domain/model/QueryDomainByInstanceIdResult.h
	include/alibabacloud/domain/model/VerifyEmailRequest.h
	include/alibabacloud/domain/model/VerifyEmailResult.h
	include/alibabacloud/domain/model/SaveBatchTaskForCreatingOrderRedeemRequest.h
	include/alibabacloud/domain/model/SaveBatchTaskForCreatingOrderRedeemResult.h
	include/alibabacloud/domain/model/SaveBatchTaskForDomainNameProxyServiceRequest.h
	include/alibabacloud/domain/model/SaveBatchTaskForDomainNameProxyServiceResult.h
	include/alibabacloud/domain/model/SaveBatchTaskForModifyingDomainDnsRequest.h
	include/alibabacloud/domain/model/SaveBatchTaskForModifyingDomainDnsResult.h
	include/alibabacloud/domain/model/QueryDnsHostRequest.h
	include/alibabacloud/domain/model/QueryDnsHostResult.h
	include/alibabacloud/domain/model/QueryTaskListRequest.h
	include/alibabacloud/domain/model/QueryTaskListResult.h
	include/alibabacloud/domain/model/QueryRegistrantProfileRealNameVerificationInfoRequest.h
	include/alibabacloud/domain/model/QueryRegistrantProfileRealNameVerificationInfoResult.h
	include/alibabacloud/domain/model/QueryRegistrantProfilesRequest.h
	include/alibabacloud/domain/model/QueryRegistrantProfilesResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForCancelingTransferInRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForCancelingTransferInResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForCreatingOrderRenewRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForCreatingOrderRenewResult.h
	include/alibabacloud/domain/model/PollTaskResultRequest.h
	include/alibabacloud/domain/model/PollTaskResultResult.h
	include/alibabacloud/domain/model/DeleteEmailVerificationRequest.h
	include/alibabacloud/domain/model/DeleteEmailVerificationResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForCreatingOrderActivateRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForCreatingOrderActivateResult.h
	include/alibabacloud/domain/model/SaveBatchTaskForTransferProhibitionLockRequest.h
	include/alibabacloud/domain/model/SaveBatchTaskForTransferProhibitionLockResult.h
	include/alibabacloud/domain/model/TransferInReenterTransferAuthorizationCodeRequest.h
	include/alibabacloud/domain/model/TransferInReenterTransferAuthorizationCodeResult.h
	include/alibabacloud/domain/model/EmailVerifiedRequest.h
	include/alibabacloud/domain/model/EmailVerifiedResult.h
	include/alibabacloud/domain/model/SaveBatchTaskForUpdateProhibitionLockRequest.h
	include/alibabacloud/domain/model/SaveBatchTaskForUpdateProhibitionLockResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForCreatingDnsHostRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForCreatingDnsHostResult.h
	include/alibabacloud/domain/model/DeleteRegistrantProfileRequest.h
	include/alibabacloud/domain/model/DeleteRegistrantProfileResult.h
	include/alibabacloud/domain/model/QueryTaskInfoHistoryRequest.h
	include/alibabacloud/domain/model/QueryTaskInfoHistoryResult.h
	include/alibabacloud/domain/model/SaveSingleTaskForCreatingOrderTransferRequest.h
	include/alibabacloud/domain/model/SaveSingleTaskForCreatingOrderTransferResult.h
	include/alibabacloud/domain/model/SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest.h
	include/alibabacloud/domain/model/SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResult.h
	include/alibabacloud/domain/model/QueryFailReasonForRegistrantProfileRealNameVerificationRequest.h
	include/alibabacloud/domain/model/QueryFailReasonForRegistrantProfileRealNameVerificationResult.h
	include/alibabacloud/domain/model/SaveBatchTaskForCreatingOrderRenewRequest.h
	include/alibabacloud/domain/model/SaveBatchTaskForCreatingOrderRenewResult.h
	include/alibabacloud/domain/model/ConfirmTransferInEmailRequest.h
	include/alibabacloud/domain/model/ConfirmTransferInEmailResult.h )

set(domain_src 
	src/DomainClient.cc
	src/model/SaveSingleTaskForDomainNameProxyServiceRequest.cc
	src/model/SaveSingleTaskForDomainNameProxyServiceResult.cc
	src/model/SaveSingleTaskForModifyingDnsHostRequest.cc
	src/model/SaveSingleTaskForModifyingDnsHostResult.cc
	src/model/SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdRequest.cc
	src/model/SaveBatchTaskForUpdatingContactInfoByRegistrantProfileIdResult.cc
	src/model/QueryBookingDomainInfoRequest.cc
	src/model/QueryBookingDomainInfoResult.cc
	src/model/SaveSingleTaskForSynchronizingDnsHostRequest.cc
	src/model/SaveSingleTaskForSynchronizingDnsHostResult.cc
	src/model/QueryAuctionsRequest.cc
	src/model/QueryAuctionsResult.cc
	src/model/SaveBatchTaskForUpdatingContactInfoByNewContactRequest.cc
	src/model/SaveBatchTaskForUpdatingContactInfoByNewContactResult.cc
	src/model/SaveRegistrantProfileRequest.cc
	src/model/SaveRegistrantProfileResult.cc
	src/model/QueryDomainListRequest.cc
	src/model/QueryDomainListResult.cc
	src/model/CheckDomainRequest.cc
	src/model/CheckDomainResult.cc
	src/model/QueryChangeLogListRequest.cc
	src/model/QueryChangeLogListResult.cc
	src/model/TransferInCheckMailTokenRequest.cc
	src/model/TransferInCheckMailTokenResult.cc
	src/model/CheckTransferInFeasibilityRequest.cc
	src/model/CheckTransferInFeasibilityResult.cc
	src/model/QueryFailReasonForDomainRealNameVerificationRequest.cc
	src/model/QueryFailReasonForDomainRealNameVerificationResult.cc
	src/model/QueryTransferOutInfoRequest.cc
	src/model/QueryTransferOutInfoResult.cc
	src/model/SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDRequest.cc
	src/model/SaveTaskForUpdatingRegistrantInfoByRegistrantProfileIDResult.cc
	src/model/SaveSingleTaskForCreatingOrderRedeemRequest.cc
	src/model/SaveSingleTaskForCreatingOrderRedeemResult.cc
	src/model/QueryTaskDetailListRequest.cc
	src/model/QueryTaskDetailListResult.cc
	src/model/VerifyContactFieldRequest.cc
	src/model/VerifyContactFieldResult.cc
	src/model/RegistrantProfileRealNameVerificationRequest.cc
	src/model/RegistrantProfileRealNameVerificationResult.cc
	src/model/QueryBidRecordsRequest.cc
	src/model/QueryBidRecordsResult.cc
	src/model/SaveBatchTaskForCreatingOrderActivateRequest.cc
	src/model/SaveBatchTaskForCreatingOrderActivateResult.cc
	src/model/SaveSingleTaskForTransferProhibitionLockRequest.cc
	src/model/SaveSingleTaskForTransferProhibitionLockResult.cc
	src/model/SaveTaskForSubmittingDomainDeleteRequest.cc
	src/model/SaveTaskForSubmittingDomainDeleteResult.cc
	src/model/QueryTransferInListRequest.cc
	src/model/QueryTransferInListResult.cc
	src/model/TransferInRefetchWhoisEmailRequest.cc
	src/model/TransferInRefetchWhoisEmailResult.cc
	src/model/QueryTransferInByInstanceIdRequest.cc
	src/model/QueryTransferInByInstanceIdResult.cc
	src/model/SaveSingleTaskForUpdateProhibitionLockRequest.cc
	src/model/SaveSingleTaskForUpdateProhibitionLockResult.cc
	src/model/QueryContactInfoRequest.cc
	src/model/QueryContactInfoResult.cc
	src/model/ReserveDomainRequest.cc
	src/model/ReserveDomainResult.cc
	src/model/TransferInResendMailTokenRequest.cc
	src/model/TransferInResendMailTokenResult.cc
	src/model/SaveSingleTaskForQueryingTransferAuthorizationCodeRequest.cc
	src/model/SaveSingleTaskForQueryingTransferAuthorizationCodeResult.cc
	src/model/GetReserveDomainUrlRequest.cc
	src/model/GetReserveDomainUrlResult.cc
	src/model/QueryTaskDetailHistoryRequest.cc
	src/model/QueryTaskDetailHistoryResult.cc
	src/model/QueryDomainGroupListRequest.cc
	src/model/QueryDomainGroupListResult.cc
	src/model/ListEmailVerificationRequest.cc
	src/model/ListEmailVerificationResult.cc
	src/model/SubmitEmailVerificationRequest.cc
	src/model/SubmitEmailVerificationResult.cc
	src/model/ResendEmailVerificationRequest.cc
	src/model/ResendEmailVerificationResult.cc
	src/model/BidDomainRequest.cc
	src/model/BidDomainResult.cc
	src/model/SaveSingleTaskForCancelingTransferOutRequest.cc
	src/model/SaveSingleTaskForCancelingTransferOutResult.cc
	src/model/AcknowledgeTaskResultRequest.cc
	src/model/AcknowledgeTaskResultResult.cc
	src/model/SaveSingleTaskForApprovingTransferOutRequest.cc
	src/model/SaveSingleTaskForApprovingTransferOutResult.cc
	src/model/SaveSingleTaskForUpdatingContactInfoRequest.cc
	src/model/SaveSingleTaskForUpdatingContactInfoResult.cc
	src/model/SaveBatchTaskForCreatingOrderTransferRequest.cc
	src/model/SaveBatchTaskForCreatingOrderTransferResult.cc
	src/model/SaveTaskForUpdatingRegistrantInfoByIdentityCredentialRequest.cc
	src/model/SaveTaskForUpdatingRegistrantInfoByIdentityCredentialResult.cc
	src/model/SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDRequest.cc
	src/model/SaveTaskForSubmittingDomainRealNameVerificationByRegistrantProfileIDResult.cc
	src/model/QueryAuctionDetailRequest.cc
	src/model/QueryAuctionDetailResult.cc
	src/model/QueryDomainByInstanceIdRequest.cc
	src/model/QueryDomainByInstanceIdResult.cc
	src/model/VerifyEmailRequest.cc
	src/model/VerifyEmailResult.cc
	src/model/SaveBatchTaskForCreatingOrderRedeemRequest.cc
	src/model/SaveBatchTaskForCreatingOrderRedeemResult.cc
	src/model/SaveBatchTaskForDomainNameProxyServiceRequest.cc
	src/model/SaveBatchTaskForDomainNameProxyServiceResult.cc
	src/model/SaveBatchTaskForModifyingDomainDnsRequest.cc
	src/model/SaveBatchTaskForModifyingDomainDnsResult.cc
	src/model/QueryDnsHostRequest.cc
	src/model/QueryDnsHostResult.cc
	src/model/QueryTaskListRequest.cc
	src/model/QueryTaskListResult.cc
	src/model/QueryRegistrantProfileRealNameVerificationInfoRequest.cc
	src/model/QueryRegistrantProfileRealNameVerificationInfoResult.cc
	src/model/QueryRegistrantProfilesRequest.cc
	src/model/QueryRegistrantProfilesResult.cc
	src/model/SaveSingleTaskForCancelingTransferInRequest.cc
	src/model/SaveSingleTaskForCancelingTransferInResult.cc
	src/model/SaveSingleTaskForCreatingOrderRenewRequest.cc
	src/model/SaveSingleTaskForCreatingOrderRenewResult.cc
	src/model/PollTaskResultRequest.cc
	src/model/PollTaskResultResult.cc
	src/model/DeleteEmailVerificationRequest.cc
	src/model/DeleteEmailVerificationResult.cc
	src/model/SaveSingleTaskForCreatingOrderActivateRequest.cc
	src/model/SaveSingleTaskForCreatingOrderActivateResult.cc
	src/model/SaveBatchTaskForTransferProhibitionLockRequest.cc
	src/model/SaveBatchTaskForTransferProhibitionLockResult.cc
	src/model/TransferInReenterTransferAuthorizationCodeRequest.cc
	src/model/TransferInReenterTransferAuthorizationCodeResult.cc
	src/model/EmailVerifiedRequest.cc
	src/model/EmailVerifiedResult.cc
	src/model/SaveBatchTaskForUpdateProhibitionLockRequest.cc
	src/model/SaveBatchTaskForUpdateProhibitionLockResult.cc
	src/model/SaveSingleTaskForCreatingDnsHostRequest.cc
	src/model/SaveSingleTaskForCreatingDnsHostResult.cc
	src/model/DeleteRegistrantProfileRequest.cc
	src/model/DeleteRegistrantProfileResult.cc
	src/model/QueryTaskInfoHistoryRequest.cc
	src/model/QueryTaskInfoHistoryResult.cc
	src/model/SaveSingleTaskForCreatingOrderTransferRequest.cc
	src/model/SaveSingleTaskForCreatingOrderTransferResult.cc
	src/model/SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialRequest.cc
	src/model/SaveTaskForSubmittingDomainRealNameVerificationByIdentityCredentialResult.cc
	src/model/QueryFailReasonForRegistrantProfileRealNameVerificationRequest.cc
	src/model/QueryFailReasonForRegistrantProfileRealNameVerificationResult.cc
	src/model/SaveBatchTaskForCreatingOrderRenewRequest.cc
	src/model/SaveBatchTaskForCreatingOrderRenewResult.cc
	src/model/ConfirmTransferInEmailRequest.cc
	src/model/ConfirmTransferInEmailResult.cc )

add_library(domain ${LIB_TYPE}
	${domain_public_header}
	${domain_public_header_model}
	${domain_src})

set_target_properties(domain
	PROPERTIES
	LINKER_LANGUAGE CXX
	ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib
	RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin
	OUTPUT_NAME ${TARGET_OUTPUT_NAME_PREFIX}domain
	)

if(${LIB_TYPE} STREQUAL "SHARED")
	set_target_properties(domain
		PROPERTIES
		DEFINE_SYMBOL ALIBABACLOUD_DOMAIN_LIBRARY)
endif()

target_include_directories(domain
	PRIVATE include
		${CMAKE_SOURCE_DIR}/core/include
	)
target_link_libraries(domain
	core)

if(CMAKE_HOST_WIN32)
	ExternalProject_Get_Property(jsoncpp INSTALL_DIR)
	set(jsoncpp_install_dir ${INSTALL_DIR})
	add_dependencies(domain
		jsoncpp)
	target_include_directories(domain
		PRIVATE	${jsoncpp_install_dir}/include)
	target_link_libraries(domain
		${jsoncpp_install_dir}/lib/jsoncpp.lib)
	set_target_properties(domain
    	PROPERTIES
    		COMPILE_OPTIONS "/bigobj")
else()
	target_include_directories(domain
		PRIVATE /usr/include/jsoncpp)
	target_link_libraries(domain
		jsoncpp)
endif()

install(FILES ${domain_public_header}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/domain)
install(FILES ${domain_public_header_model}
	DESTINATION ${CMAKE_INSTALL_INCLUDEDIR}/alibabacloud/domain/model)
install(TARGETS domain
	ARCHIVE DESTINATION ${CMAKE_INSTALL_LIBDIR}
	LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
	RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
	)