/* Runtime dump - CKDQueryURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDQueryURLRequest : CKDURLRequest
{
    NSMutableArray * _queryResponses;
    CKQuery * _query;
    NSData * _cursor;
    unsigned int _limit;
    CKRecordZoneID * _zoneID;
    NSArray * _requestedFields;
    NSData * _resultsCursor;
}

@property (retain, nonatomic) CKQuery * query;
@property (retain, nonatomic) NSData * cursor;
@property (nonatomic) unsigned int limit;
@property (retain, nonatomic) CKRecordZoneID * zoneID;
@property (retain, nonatomic) NSArray * requestedFields;
@property (retain, nonatomic) NSArray * queryResponses;
@property (retain, nonatomic) NSData * resultsCursor;

- (CKQuery *)query;
- (void)setQuery:(CKQuery *)arg0;
- (NSData *)cursor;
- (void)setCursor:(NSData *)arg0;
- (void).cxx_destruct;
- (CKRecordZoneID *)zoneID;
- (void)setZoneID:(CKRecordZoneID *)arg0;
- (void)setRequestedFields:(NSArray *)arg0;
- (NSArray *)requestedFields;
- (char)allowsAnonymousAccount;
- (NSArray *)queryResponses;
- (NSData *)resultsCursor;
- (void)setResultsCursor:(NSData *)arg0;
- (CKDQueryURLRequest *)initWithQuery:(CKQuery *)arg0 cursor:(NSData *)arg1 limit:(unsigned int)arg2 requestedFields:(NSArray *)arg3 zoneID:(CKRecordZoneID *)arg4;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)zoneIDsToLock;
- (void)setQueryResponses:(NSArray *)arg0;
- (unsigned int)limit;
- (void)setLimit:(unsigned int)arg0;
- (int)operationType;

@end
