/* Runtime dump - CKDRepairZonePCSOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDRepairZonePCSOperation : CKDDatabaseOperation
{
    id _zonePCSRepairProgressBlock;
    NSArray * _zoneIDs;
    NSMutableArray * _fetchedZones;
    NSMutableArray * _fixedZones;
    NSMutableDictionary * _pcsInfoByZoneID;
}

@property (copy, nonatomic) id zonePCSRepairProgressBlock;
@property (retain, nonatomic) NSArray * zoneIDs;
@property (retain, nonatomic) NSMutableArray * fetchedZones;
@property (retain, nonatomic) NSMutableArray * fixedZones;
@property (retain, nonatomic) NSMutableDictionary * pcsInfoByZoneID;

- (void)main;
- (void).cxx_destruct;
- (CKDRepairZonePCSOperation *)initWithOperationInfo:(CKOperationInfo *)arg0 clientContext:(struct ?)arg1;
- (NSArray *)zoneIDs;
- (void)setZonePCSRepairProgressBlock:(id /* block */)arg0;
- (NSObject *)nameForState:(unsigned int)arg0;
- (void)_finishOnCallbackQueueWithError:(NSError *)arg0;
- (char)makeStateTransition;
- (void)setZoneIDs:(NSArray *)arg0;
- (void)_fetchZones;
- (void)_checkZonePCS;
- (void)_uploadRepairedZones;
- (NSMutableArray *)fixedZones;
- (id /* block */)zonePCSRepairProgressBlock;
- (NSMutableDictionary *)pcsInfoByZoneID;
- (NSMutableArray *)fetchedZones;
- (NSObject *)_checkPCSDataForZone:(NSObject *)arg0;
- (void)setFetchedZones:(NSMutableArray *)arg0;
- (void)setFixedZones:(NSMutableArray *)arg0;
- (void)setPcsInfoByZoneID:(NSMutableDictionary *)arg0;

@end
