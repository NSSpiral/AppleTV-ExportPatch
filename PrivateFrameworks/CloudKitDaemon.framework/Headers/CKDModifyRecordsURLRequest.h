/* Runtime dump - CKDModifyRecordsURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordsURLRequest : CKDURLRequest
{
    char _atomic;
    char _oplock;
    char _sendAllFields;
    NSDictionary * _recordIDsToDeleteToEtags;
    NSDictionary * _conflictLosersToResolveByRecordID;
    id _recordPostedBlock;
    NSArray * _records;
    NSArray * _recordIDsToDelete;
    NSData * _clientChangeTokenData;
    NSMutableDictionary * _recordIDByRequestID;
    NSMutableDictionary * _recordByRequestID;
}

@property (retain, nonatomic) NSDictionary * recordIDsToDeleteToEtags;
@property (retain, nonatomic) NSDictionary * conflictLosersToResolveByRecordID;
@property (nonatomic) char atomic;
@property (copy, nonatomic) id recordPostedBlock;
@property (retain, nonatomic) NSArray * records;
@property (retain, nonatomic) NSArray * recordIDsToDelete;
@property (nonatomic) char oplock;
@property (nonatomic) char sendAllFields;
@property (retain, nonatomic) NSData * clientChangeTokenData;
@property (retain, nonatomic) NSMutableDictionary * recordIDByRequestID;
@property (retain, nonatomic) NSMutableDictionary * recordByRequestID;

- (NSArray *)records;
- (void).cxx_destruct;
- (void)setAtomic:(char)arg0;
- (NSDictionary *)recordIDsToDeleteToEtags;
- (NSDictionary *)conflictLosersToResolveByRecordID;
- (void)setRecordIDsToDelete:(NSArray *)arg0;
- (void)setRecordIDsToDeleteToEtags:(NSDictionary *)arg0;
- (void)setConflictLosersToResolveByRecordID:(NSDictionary *)arg0;
- (void)setClientChangeTokenData:(NSData *)arg0;
- (NSArray *)requestOperations;
- (int)isolationLevel;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)zoneIDsToLock;
- (NSMutableDictionary *)recordIDByRequestID;
- (void)setRecordIDByRequestID:(NSMutableDictionary *)arg0;
- (NSArray *)recordIDsToDelete;
- (NSData *)clientChangeTokenData;
- (char)atomic;
- (CKDModifyRecordsURLRequest *)initWithRecordsToSave:(id)arg0 recordIDsToDelete:(NSArray *)arg1 oplock:(char)arg2 sendAllFields:(char)arg3 clientChangeTokenData:(NSData *)arg4;
- (void)setRecordPostedBlock:(id /* block */)arg0;
- (char)sendAllFields;
- (char)oplock;
- (NSMutableDictionary *)recordByRequestID;
- (id /* block */)recordPostedBlock;
- (void)setRecords:(NSArray *)arg0;
- (void)setOplock:(char)arg0;
- (void)setSendAllFields:(char)arg0;
- (void)setRecordByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;

@end
