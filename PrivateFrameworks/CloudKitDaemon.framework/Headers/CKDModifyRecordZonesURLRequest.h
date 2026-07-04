/* Runtime dump - CKDModifyRecordZonesURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDModifyRecordZonesURLRequest : CKDURLRequest
{
    char _markZonesAsUserPurged;
    id _recordZoneModifiedBlock;
    NSArray * _recordZonesToSave;
    NSArray * _recordZoneIDsToDelete;
    NSMutableDictionary * _recordZoneIDByRequestID;
}

@property (nonatomic) char markZonesAsUserPurged;
@property (copy, nonatomic) id recordZoneModifiedBlock;
@property (retain, nonatomic) NSArray * recordZonesToSave;
@property (retain, nonatomic) NSArray * recordZoneIDsToDelete;
@property (retain, nonatomic) NSMutableDictionary * recordZoneIDByRequestID;

- (void).cxx_destruct;
- (CKDModifyRecordZonesURLRequest *)initWithRecordZonesToSave:(NSArray *)arg0 recordZoneIDsToDelete:(NSArray *)arg1;
- (void)setMarkZonesAsUserPurged:(char)arg0;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)zoneIDsToLock;
- (void)setRecordZonesToSave:(NSArray *)arg0;
- (NSArray *)recordZonesToSave;
- (NSArray *)recordZoneIDsToDelete;
- (char)markZonesAsUserPurged;
- (void)setRecordZoneModifiedBlock:(id /* block */)arg0;
- (void)setRecordZoneIDsToDelete:(NSArray *)arg0;
- (NSMutableDictionary *)recordZoneIDByRequestID;
- (id /* block */)recordZoneModifiedBlock;
- (void)setRecordZoneIDByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;

@end
