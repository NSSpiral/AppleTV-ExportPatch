/* Runtime dump - PFUbiquityTransactionLogMigrator
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityTransactionLogMigrator : NSObject
{
    NSManagedObjectModel * _srcModel;
    NSManagedObjectModel * _dstModel;
    NSMappingModel * _mappingModel;
    NSString * _localPeerID;
    NSDictionary * _mappingsByEntityName;
    NSSet * _removedEntities;
    char _throttleLogs;
}

@property (readonly) char throttleLogs;

- (void)populateMappingsByEntityName;
- (char)migrateTransactionLogFromLocation:(NSObject *)arg0 toLocation:(NSObject *)arg1 error:(id *)arg2;
- (char)migrateBaselineFromLocation:(NSObject *)arg0 toLocation:(NSObject *)arg1 error:(id *)arg2;
- (char)throttleLogs;
- (NSArray *)createDestinationObjectsFromSourceObjects:(NSArray *)arg0 migrationContext:(NSObject *)arg1;
- (NSObject *)createDestinationGlobalObjectIDFromSourceGlobalObjectID:(NSObject *)arg0;
- (NSObject *)createDestinationObjectContentFromSourceObjectContent:(NSObject *)arg0 withEntityMapping:(NSEntityMapping *)arg1 migrationContext:(NSObject *)arg2;
- (PFUbiquityTransactionLogMigrator *)initWithSourceModel:(NSManagedObjectModel *)arg0 destinationModel:(NSManagedObjectModel *)arg1 mappingModel:(NSMappingModel *)arg2 localPeerID:(NSString *)arg3;
- (char)migrateTransactionLogsForStoreName:(NSString *)arg0 andLocalPeerID:(NSObject *)arg1 atUbiquityRootLocation:(NSObject *)arg2 error:(id *)arg3;
- (void)dealloc;

@end
