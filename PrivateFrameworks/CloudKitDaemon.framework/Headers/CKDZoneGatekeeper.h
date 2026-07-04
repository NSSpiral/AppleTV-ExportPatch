/* Runtime dump - CKDZoneGatekeeper
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDZoneGatekeeper : NSObject
{
    NSMutableDictionary * _zoneIDsToGateHolders;
    NSMutableArray * _waiterWrappers;
}

@property (retain, nonatomic) NSMutableDictionary * zoneIDsToGateHolders;
@property (retain, nonatomic) NSMutableArray * waiterWrappers;

- (CKDZoneGatekeeper *)init;
- (void).cxx_destruct;
- (DAStatusReport *)statusReport;
- (char)hasStatusToReport;
- (NSMutableDictionary *)zoneIDsToGateHolders;
- (NSMutableArray *)waiterWrappers;
- (void)registerWaiter:(id)arg0 forZoneIDs:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)relinquishLocksForWaiter:(id)arg0;
- (void)setZoneIDsToGateHolders:(NSMutableDictionary *)arg0;
- (void)setWaiterWrappers:(NSMutableArray *)arg0;

@end
