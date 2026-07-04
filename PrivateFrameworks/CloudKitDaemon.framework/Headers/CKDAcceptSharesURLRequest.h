/* Runtime dump - CKDAcceptSharesURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAcceptSharesURLRequest : CKDURLRequest
{
    id _shareAcceptedBlock;
    NSArray * _shareInfosToAccept;
    NSMutableDictionary * _shareInfoByRequestID;
}

@property (copy, nonatomic) id shareAcceptedBlock;
@property (retain, nonatomic) NSArray * shareInfosToAccept;
@property (retain, nonatomic) NSMutableDictionary * shareInfoByRequestID;

- (void).cxx_destruct;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)shareInfosToAccept;
- (NSMutableDictionary *)shareInfoByRequestID;
- (id /* block */)shareAcceptedBlock;
- (CKDAcceptSharesURLRequest *)initWithShareInfosToAccept:(NSArray *)arg0;
- (void)setShareAcceptedBlock:(id /* block */)arg0;
- (void)setShareInfosToAccept:(NSArray *)arg0;
- (void)setShareInfoByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;

@end
