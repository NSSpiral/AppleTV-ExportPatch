/* Runtime dump - CKDiscoverUserInfosOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDiscoverUserInfosOperation : CKOperation
{
    NSArray * _emailAddresses;
    NSArray * _userRecordIDs;
    id _discoverUserInfosCompletionBlock;
    NSMutableDictionary * _emailsToUserInfos;
    NSMutableDictionary * _userRecordIDsToUserInfos;
}

@property (copy, nonatomic) NSArray * emailAddresses;
@property (copy, nonatomic) NSArray * userRecordIDs;
@property (copy, nonatomic) id discoverUserInfosCompletionBlock;
@property (retain, nonatomic) NSMutableDictionary * emailsToUserInfos;
@property (retain, nonatomic) NSMutableDictionary * userRecordIDsToUserInfos;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (char)CKOperationShouldRun:(id *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (void)setDiscoverUserInfosCompletionBlock:(id /* block */)arg0;
- (void)setUserRecordIDs:(NSArray *)arg0;
- (id /* block */)discoverUserInfosCompletionBlock;
- (NSMutableDictionary *)emailsToUserInfos;
- (NSMutableDictionary *)userRecordIDsToUserInfos;
- (void)setEmailsToUserInfos:(NSMutableDictionary *)arg0;
- (void)setUserRecordIDsToUserInfos:(NSMutableDictionary *)arg0;
- (CKDiscoverUserInfosOperation *)init;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (CKDiscoverUserInfosOperation *)initWithEmailAddresses:(NSArray *)arg0 userRecordIDs:(NSArray *)arg1;
- (NSArray *)userRecordIDs;
- (NSArray *)emailAddresses;
- (void)setEmailAddresses:(NSArray *)arg0;

@end
