/* Runtime dump - NSStoreMigrationPolicy
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSStoreMigrationPolicy : NSObject
{
    NSPersistentStoreCoordinator * _coordinator;
    NSURL * _sourceURL;
    NSString * _sourceConfiguration;
    NSDictionary * _sourceOptions;
    NSManagedObjectModel * _sourceModel;
    NSDictionary * _sourceMetadata;
    NSMappingModel * _mappingModel;
    NSURL * _destinationURL;
    NSString * _destinationType;
    NSString * _destinationConfiguration;
    NSDictionary * _destinationOptions;
    NSMigrationManager * _migrationManager;
    NSArray * _resourceBundles;
    long _workingWithSkewedSource;
    void * _reserved2;
    void * _reserved3;
    void * _reserved4;
}

+ (int)migrationDebugLevel;
+ (NSDictionary *)migrationStoreOptionsFromStoreOptions:(NSDictionary *)arg0;
+ (NSURL *)destinationURLForMigrationSourceURL:(NSURL *)arg0 createDocumentReplacementDirectory:(char)arg1 error:(id *)arg2;
+ (void)setMigrationDebugLevel:(int)arg0;

- (NSManagedObjectModel *)sourceModel;
- (NSManagedObjectModel *)destinationModel;
- (NSMappingModel *)mappingModel;
- (void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg0 sourceURL:(NSURL *)arg1 configuration:(NSDictionary *)arg2 metadata:(NSDictionary *)arg3 options:(NSDictionary *)arg4;
- (id)_gatherDataAndPerformMigration:(id *)arg0;
- (NSArray *)resourceBundles;
- (NSDictionary *)sourceMetadata;
- (void)setSourceMetadata:(NSDictionary *)arg0;
- (NSURL *)destinationURL;
- (NSString *)destinationType;
- (char)migrateStoreAtURL:(NSURL *)arg0 toURL:(NSURL *)arg1 storeType:(NSString *)arg2 options:(NSDictionary *)arg3 withManager:(NSObject *)arg4 error:(id *)arg5;
- (NSURL *)sourceModelForStoreAtURL:(NSURL *)arg0 metadata:(NSDictionary *)arg1 error:(id *)arg2;
- (NSObject *)createMigrationManagerForSourceModel:(NSObject *)arg0 destinationModel:(NSManagedObjectModel *)arg1 error:(id *)arg2;
- (NSURL *)migrateStoreAtURL:(NSURL *)arg0 withManager:(NSObject *)arg1 metadata:(NSDictionary *)arg2 options:(NSDictionary *)arg3 error:(id *)arg4;
- (NSString *)sourceConfiguration;
- (NSDictionary *)sourceOptions;
- (NSURL *)sourceURL;
- (NSObject *)externalDataReferencesURLForDestination:(NSObject *)arg0 forStoreOfType:(NSObject *)arg1;
- (void)setSourceModel:(NSManagedObjectModel *)arg0;
- (NSObject *)mappingModelForSourceModel:(NSObject *)arg0 destinationModel:(NSManagedObjectModel *)arg1 error:(id *)arg2;
- (void)setMappingModel:(NSMappingModel *)arg0;
- (id)destinationOptionsForMigration:(id)arg0 sourceMetadata:(NSDictionary *)arg1 error:(id *)arg2;
- (void)setDestinationOptions:(NSDictionary *)arg0;
- (NSDictionary *)destinationOptions;
- (id)destinationTypeForMigration:(id)arg0 sourceMetadata:(NSDictionary *)arg1 error:(id *)arg2;
- (void)setDestinationType:(NSString *)arg0;
- (void)setMigrationManager:(NSMigrationManager *)arg0;
- (NSMigrationManager *)migrationManager;
- (void)setDestinationURL:(NSURL *)arg0;
- (void)willPerformMigrationWithManager:(NSObject *)arg0;
- (void)handleMigrationError:(NSError *)arg0 inManager:(NSObject *)arg1;
- (void)didPerformMigrationWithManager:(NSObject *)arg0;
- (NSString *)destinationConfiguration;
- (NSObject *)addMigratedStoreToCoordinator:(NSObject *)arg0 withType:(NSObject *)arg1 configuration:(NSDictionary *)arg2 URL:(NSString *)arg3 options:(NSDictionary *)arg4 error:(id *)arg5;
- (void)setSourceURL:(NSURL *)arg0;
- (void)setSourceConfiguration:(NSString *)arg0;
- (void)setSourceOptions:(NSDictionary *)arg0;
- (void)setDestinationConfiguration:(NSString *)arg0;
- (id)destinationConfigurationForMigration:(id)arg0 sourceMetadata:(NSDictionary *)arg1 error:(id *)arg2;
- (void)setResourceBundles:(NSArray *)arg0;
- (void)dealloc;
- (NSString *)sourceType;
- (void)setPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg0;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;

@end
