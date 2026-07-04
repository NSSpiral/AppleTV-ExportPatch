/* Runtime dump - NSMigrationManager
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMigrationManager : NSObject
{
    NSManagedObjectModel * _sourceModel;
    NSDictionary * _sourceEntitiesByVersionHash;
    NSManagedObjectModel * _destinationModel;
    NSDictionary * _destinationEntitiesByVersionHash;
    NSMappingModel * _mappingModel;
    NSManagedObjectContext * _sourceManagedObjectContext;
    NSManagedObjectContext * _destinationManagedObjectContext;
    NSMigrationContext * _migrationContext;
    NSDictionary * _userInfo;
    struct _migrationManagerFlags _migrationManagerFlags;
    NSError * _migrationCancellationError;
    id _reserved1;
    id _reserved2;
    id _reserved3;
    id _reserved4;
}

@property char usesStoreSpecificMigrationManager;
@property (readonly) NSMappingModel * mappingModel;
@property (readonly) NSManagedObjectModel * sourceModel;
@property (readonly) NSManagedObjectModel * destinationModel;
@property (readonly) NSManagedObjectContext * sourceContext;
@property (readonly) NSManagedObjectContext * destinationContext;
@property (readonly) NSEntityMapping * currentEntityMapping;
@property (readonly) float migrationProgress;
@property (retain, nonatomic) NSDictionary * userInfo;

+ (int)migrationDebugLevel;
+ (char)_performSanityCheckForMapping:(id)arg0 fromSourceModel:(NSObject *)arg1 toDestinationModel:(NSObject *)arg2;
+ (void)setMigrationDebugLevel:(int)arg0;

- (NSMigrationManager *)initWithSourceModel:(NSManagedObjectModel *)arg0 destinationModel:(NSManagedObjectModel *)arg1;
- (NSManagedObjectContext *)destinationContext;
- (NSString *)_migrationContext;
- (void)associateSourceInstance:(id)arg0 withDestinationInstance:(id)arg1 forEntityMapping:(NSEntityMapping *)arg2;
- (id)sourceInstancesForEntityMappingNamed:(id)arg0 destinationInstances:(id)arg1;
- (id)destinationEntityForEntityMapping:(id)arg0;
- (NSEntityMapping *)currentEntityMapping;
- (NSPropertyMapping *)currentPropertyMapping;
- (void)_doCleanupOnFailure:(id)arg0;
- (char)usesStoreSpecificMigrationManager;
- (NSManagedObjectModel *)sourceModel;
- (NSManagedObjectModel *)destinationModel;
- (char)migrateStoreFromURL:(NSURL *)arg0 type:(NSObject *)arg1 options:(NSDictionary *)arg2 withMappingModel:(NSMappingModel *)arg3 toDestinationURL:(NSURL *)arg4 destinationType:(NSString *)arg5 destinationOptions:(NSDictionary *)arg6 error:(id *)arg7;
- (char)_migrateStoreFromURL:(NSURL *)arg0 type:(NSObject *)arg1 options:(NSDictionary *)arg2 withMappingModel:(NSMappingModel *)arg3 toDestinationURL:(NSURL *)arg4 destinationType:(NSString *)arg5 destinationOptions:(NSDictionary *)arg6 error:(id *)arg7;
- (id)_mappingNamed:(id)arg0;
- (id)sourceEntityForEntityMapping:(id)arg0;
- (NSMappingModel *)mappingModel;
- (NSManagedObjectContext *)sourceContext;
- (id)destinationInstancesForEntityMappingNamed:(id)arg0 sourceInstances:(id)arg1;
- (id)destinationInstancesForSourceRelationshipNamed:(id)arg0 sourceInstances:(id)arg1;
- (float)migrationProgress;
- (void)cancelMigrationWithError:(NSError *)arg0;
- (void)setUsesStoreSpecificMigrationManager:(char)arg0;
- (id)fetchRequestForSourceEntityNamed:(id)arg0 predicateString:(NSString *)arg1 includesSubentities:(char)arg2;
- (id)_evaluateSourceExpressionForMapping:(id)arg0 entityPolicy:(NSObject *)arg1;
- (char)_doFirstPassForMapping:(id)arg0 error:(id *)arg1;
- (char)_doSecondPassForMapping:(id)arg0 error:(id *)arg1;
- (char)_validateAllObjectsAfterMigration:(id *)arg0;
- (char)_doThirdPassForMapping:(id)arg0 error:(id *)arg1;
- (id)fetchRequestForSourceEntityNamed:(id)arg0 predicateString:(NSString *)arg1;
- (void)dealloc;
- (void)setUserInfo:(NSDictionary *)arg0;
- (void)reset;
- (NSDictionary *)userInfo;

@end
