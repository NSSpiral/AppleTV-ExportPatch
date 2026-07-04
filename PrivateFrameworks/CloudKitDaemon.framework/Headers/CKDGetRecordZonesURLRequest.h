/* Runtime dump - CKDGetRecordZonesURLRequest
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGetRecordZonesURLRequest : CKDURLRequest
{
    NSArray * _recordZones;
    id _recordZoneFetchedBlock;
    NSArray * _zoneIDs;
    NSMutableDictionary * _zoneIDByRequestID;
}

@property (readonly, nonatomic) NSArray * recordZones;
@property (copy, nonatomic) id recordZoneFetchedBlock;
@property (retain, nonatomic) NSArray * zoneIDs;
@property (retain, nonatomic) NSMutableDictionary * zoneIDByRequestID;

- (void).cxx_destruct;
- (CKDGetRecordZonesURLRequest *)initWithRecordZoneIDs:(NSArray *)arg0;
- (NSArray *)zoneIDs;
- (void)setZoneIDs:(NSArray *)arg0;
- (NSArray *)requestOperations;
- (NSObject *)requestDidParseProtobufObject:(NSObject *)arg0;
- (void)requestDidParseNodeFailure:(id)arg0;
- (NSArray *)requestOperationClasses;
- (NSArray *)zoneIDsToLock;
- (void)setRecordZoneFetchedBlock:(id /* block */)arg0;
- (NSMutableDictionary *)zoneIDByRequestID;
- (id /* block */)recordZoneFetchedBlock;
- (NSArray *)recordZones;
- (void)setZoneIDByRequestID:(NSMutableDictionary *)arg0;
- (int)operationType;

@end
