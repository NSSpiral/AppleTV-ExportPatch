/* Runtime dump - CKDFetchWebAuthTokenURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFetchWebAuthTokenURLRequest : CKDURLRequest
{
    id _tokenFetchedBlock;
}

@property (copy, nonatomic) id tokenFetchedBlock;

- (void).cxx_destruct;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (void)setTokenFetchedBlock:(id /* block */)arg0;
- (id /* block */)tokenFetchedBlock;
- (int)operationType;

@end
