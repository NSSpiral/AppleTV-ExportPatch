/* Runtime dump - CKDFetchUserQuotaOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchUserQuotaOperation : CKDDatabaseOperation
{
    unsigned long long _quotaAvailable;
}

@property (nonatomic) unsigned long long quotaAvailable;

- (void)main;
- (CKDFetchUserQuotaOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (Class)operationResultClass;
- (void)fillOutOperationResult:(NSObject *)arg0;
- (void)setQuotaAvailable:(unsigned long long)arg0;
- (unsigned long long)quotaAvailable;

@end
