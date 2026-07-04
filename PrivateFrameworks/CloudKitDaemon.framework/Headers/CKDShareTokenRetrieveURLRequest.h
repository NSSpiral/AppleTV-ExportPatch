/* Runtime dump - CKDShareTokenRetrieveURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDShareTokenRetrieveURLRequest : CKDURLRequest
{
    id _tokenInfoBlock;
    NSArray * _tokenInfos;
    NSMutableDictionary * _tokenInfosByRequestID;
}

@property (copy, nonatomic) id tokenInfoBlock;
@property (retain, nonatomic) NSArray * tokenInfos;
@property (retain, nonatomic) NSMutableDictionary * tokenInfosByRequestID;

- (void).cxx_destruct;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (CKDShareTokenRetrieveURLRequest *)initWithShortTokenInfos:(id)arg0;
- (void)setTokenInfoBlock:(id /* block */)arg0;
- (NSArray *)tokenInfos;
- (NSMutableDictionary *)tokenInfosByRequestID;
- (id /* block */)tokenInfoBlock;
- (void)setTokenInfos:(NSArray *)arg0;
- (void)setTokenInfosByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;

@end
