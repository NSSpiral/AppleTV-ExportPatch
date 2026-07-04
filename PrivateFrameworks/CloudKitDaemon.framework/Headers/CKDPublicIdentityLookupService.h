/* Runtime dump - CKDPublicIdentityLookupService
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPublicIdentityLookupService : NSObject
{
    NSMutableArray * _pendingRequests;
    NSObject<OS_dispatch_source> * _lookupSource;
    NSObject<OS_dispatch_queue> * _queue;
    CKDKeyValueDiskCache * _cache;
    CKDOperation * _operationToUseForSettingUpThelookup;
    CKDClientContext * _context;
}

@property (weak, nonatomic) CKDClientContext * context;

- (void)dealloc;
- (CKDClientContext *)context;
- (void)setContext:(CKDClientContext *)arg0;
- (void).cxx_destruct;
- (CKDPublicIdentityLookupService *)initWithClientContext:(struct ?)arg0;
- (void)scheduleRequest:(NSURLRequest *)arg0 forOperation:(NSObject *)arg1;
- (void)_fetchEmails;
- (void)_finishCompletedRequests;
- (void)_finishPendingRequestsWithError:(NSError *)arg0;
- (void)_saveAndFinishRequestsWithPublicIdentify:(id)arg0 userInfo:(NSDictionary *)arg1 forEmail:(SAPhonePlayVoiceMail *)arg2;

@end
