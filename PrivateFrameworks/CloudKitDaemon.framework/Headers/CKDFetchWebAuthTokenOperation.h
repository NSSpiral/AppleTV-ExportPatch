/* Runtime dump - CKDFetchWebAuthTokenOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchWebAuthTokenOperation : CKDDatabaseOperation
{
    NSString * _webAuthToken;
}

@property (copy, nonatomic) NSString * webAuthToken;

- (void)main;
- (void).cxx_destruct;
- (CKDFetchWebAuthTokenOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(NSObject *)arg0;
- (void)setWebAuthToken:(NSString *)arg0;
- (NSString *)webAuthToken;

@end
