/* Runtime dump - PFUbiquityMigrationManager
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityMigrationManager : NSObject
{
    NSManagedObjectModel * _destinationModel;
    NSManagedObjectModel * _sourceModel;
    PFUbiquityLocation * _rootLocation;
    NSString * _localPeerID;
}

@property (readonly) NSManagedObjectModel * sourceModel;
@property (readonly) NSManagedObjectModel * destinationModel;
@property (readonly) PFUbiquityLocation * rootLocation;

- (NSManagedObjectModel *)sourceModel;
- (NSManagedObjectModel *)destinationModel;
- (PFUbiquityLocation *)rootLocation;
- (PFUbiquityMigrationManager *)initWithDestinationModel:(NSManagedObjectModel *)arg0 sourceModel:(NSManagedObjectModel *)arg1 ubiquityRootLocation:(PFUbiquityLocation *)arg2 localPeerID:(NSString *)arg3;
- (PFUbiquityMigrationManager *)initWithDestinationModel:(NSManagedObjectModel *)arg0 storeName:(NSString *)arg1 previousModelVersionHash:(NSString *)arg2 ubiquityRootLocation:(PFUbiquityLocation *)arg3 localPeerID:(NSString *)arg4;
- (char)migrateTransactionLogs:(char)arg0 andBaselineIfNecessaryForStoreName:(NSString *)arg1 peerID:(NSObject *)arg2 error:(id *)arg3;
- (void)dealloc;

@end
