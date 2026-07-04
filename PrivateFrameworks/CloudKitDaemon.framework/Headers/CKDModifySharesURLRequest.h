/* Runtime dump - CKDModifySharesURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifySharesURLRequest : CKDURLRequest
{
    id _shareModifiedBlock;
    NSMutableDictionary * _sharesToSaveByID;
    NSArray * _sharesToDelete;
    NSMutableDictionary * _shareIDByRequestID;
    NSMutableDictionary * _participantIDByRequestID;
}

@property (copy, nonatomic) id shareModifiedBlock;
@property (retain, nonatomic) NSMutableDictionary * sharesToSaveByID;
@property (retain, nonatomic) NSArray * sharesToDelete;
@property (retain, nonatomic) NSMutableDictionary * shareIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary * participantIDByRequestID;

- (void).cxx_destruct;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSMutableDictionary *)sharesToSaveByID;
- (NSArray *)sharesToDelete;
- (NSMutableDictionary *)shareIDByRequestID;
- (id /* block */)shareModifiedBlock;
- (CKDModifySharesURLRequest *)initWithSharesToSave:(NSArray *)arg0 sharesToDelete:(NSArray *)arg1;
- (void)setShareModifiedBlock:(id /* block */)arg0;
- (void)setSharesToSaveByID:(NSMutableDictionary *)arg0;
- (void)setSharesToDelete:(NSArray *)arg0;
- (void)setShareIDByRequestID:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)participantIDByRequestID;
- (void)setParticipantIDByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;

@end
