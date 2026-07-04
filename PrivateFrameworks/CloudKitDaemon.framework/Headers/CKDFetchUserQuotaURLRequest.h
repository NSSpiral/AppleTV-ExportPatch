/* Runtime dump - CKDFetchUserQuotaURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchUserQuotaURLRequest : CKDURLRequest
{
    id _quotaFetchedBlock;
}

@property (copy, nonatomic) id quotaFetchedBlock;

- (void).cxx_destruct;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (void)setQuotaFetchedBlock:(id /* block */)arg0;
- (id /* block */)quotaFetchedBlock;
- (int)operationType;

@end
