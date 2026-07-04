/* Runtime dump - CKRepairZonePCSOperation
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKRepairZonePCSOperation : CKDatabaseOperation
{
    NSArray * _zoneIDs;
    id _zoneRepairedBlock;
}

@property (retain, nonatomic) NSArray * zoneIDs;
@property (copy, nonatomic) id zoneRepairedBlock;

- (void)fillOutOperationInfo:(NSDictionary *)arg0;
- (void)performCKOperation;
- (void)_handleProgressCallback:(id /* block */)arg0;
- (id /* block */)zoneRepairedBlock;
- (CKRepairZonePCSOperation *)initWithZoneIDsToRepair:(id)arg0;
- (void)setZoneRepairedBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (NSArray *)zoneIDs;
- (void)setZoneIDs:(NSArray *)arg0;

@end
