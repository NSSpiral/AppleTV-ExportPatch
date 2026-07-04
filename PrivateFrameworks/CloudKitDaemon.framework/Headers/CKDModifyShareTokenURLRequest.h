/* Runtime dump - CKDModifyShareTokenURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyShareTokenURLRequest : CKDURLRequest
{
    id _shareTokenModifiedBlock;
    NSArray * _shareTokenInfos;
    NSMutableDictionary * _shareTokenInfosByRequestID;
}

@property (copy, nonatomic) id shareTokenModifiedBlock;
@property (retain, nonatomic) NSArray * shareTokenInfos;
@property (retain, nonatomic) NSMutableDictionary * shareTokenInfosByRequestID;

- (void).cxx_destruct;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)shareTokenInfos;
- (NSMutableDictionary *)shareTokenInfosByRequestID;
- (id /* block */)shareTokenModifiedBlock;
- (CKDModifyShareTokenURLRequest *)initWithShareTokenInfos:(NSArray *)arg0;
- (void)setShareTokenModifiedBlock:(id /* block */)arg0;
- (void)setShareTokenInfos:(NSArray *)arg0;
- (void)setShareTokenInfosByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;

@end
