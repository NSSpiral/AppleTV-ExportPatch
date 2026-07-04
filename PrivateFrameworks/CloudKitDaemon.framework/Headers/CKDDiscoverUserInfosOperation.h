/* Runtime dump - CKDDiscoverUserInfosOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDDiscoverUserInfosOperation : CKDOperation
{
    id _discoverUserInfosProgressBlock;
    NSArray * _emailsToDiscover;
    NSArray * _userRecordIDsToDiscover;
}

@property (copy, nonatomic) id discoverUserInfosProgressBlock;
@property (retain, nonatomic) NSArray * emailsToDiscover;
@property (retain, nonatomic) NSArray * userRecordIDsToDiscover;

- (void)main;
- (void).cxx_destruct;
- (CKDDiscoverUserInfosOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (void)setDiscoverUserInfosProgressBlock:(id /* block */)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (NSArray *)emailsToDiscover;
- (NSArray *)userRecordIDsToDiscover;
- (void)setEmailsToDiscover:(NSArray *)arg0;
- (void)setUserRecordIDsToDiscover:(NSArray *)arg0;
- (id /* block */)discoverUserInfosProgressBlock;
- (void)_handleDiscoveredInfo:(NSDictionary *)arg0 emailToDiscover:(id)arg1;
- (void)_discoverEmails:(id)arg0 userRecordIDs:(NSArray *)arg1 completionBlock:(id /* block */)arg2;

@end
