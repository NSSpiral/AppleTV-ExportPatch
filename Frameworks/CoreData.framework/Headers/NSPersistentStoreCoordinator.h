/* Runtime dump - NSPersistentStoreCoordinator
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreCoordinator : NSObject <NSLocking>
{
    id _queueOwner;
    void * _dispatchQueue;
    struct _persistentStoreCoordinatorFlags _flags;
    long _miniLock;
    id * _additionalPrivateIvars;
    NSManagedObjectModel * _managedObjectModel;
    NSArray * _persistentStores;
}

@property (readonly) NSManagedObjectModel * managedObjectModel;
@property (readonly) NSArray * persistentStores;
@property (copy) NSString * name;

+ (void)__Multithreading_Violation_AllThatIsLeftToUsIsHonor__;
+ (NSPersistentStoreCoordinator *)_beginPowerAssertionWithAssert:(unsigned int *)arg0;
+ (NSArray *)registeredStoreTypes;
+ (void)_endPowerAssertionWithAssert:(unsigned int)arg0 andApp:(id)arg1;
+ (void)_registerDefaultStoreClassesAndTypes;
+ (Class)_storeClassForStoreType:(NSObject *)arg0;
+ (Class)_classForPersistentStoreAtURL:(NSURL *)arg0;
+ (NSObject *)_storeTypeForStore:(NSObject *)arg0;
+ (void)_registerCoreDataStoreClass:(Class)arg0 forStoreType:(NSObject *)arg1;
+ (void)registerStoreClass:(Class)arg0 forStoreType:(NSObject *)arg1;
+ (char)removeUbiquitousContentAndPersistentStoreAtURL:(NSURL *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
+ (NSURL *)ubiquityStoreURLForStoreURL:(NSURL *)arg0 ubiquityIdentityToken:(<NSObject><NSCopying><NSCoding> *)arg1 localPeerID:(NSString *)arg2 ubiquityName:(NSString *)arg3;
+ (NSURL *)ubiquityStoreURLForStoreURL:(NSURL *)arg0 ubiquityIdentityToken:(<NSObject><NSCopying><NSCoding> *)arg1 ubiquityName:(NSString *)arg2;
+ (NSObject *)metadataForPersistentStoreOfType:(NSObject *)arg0 URL:(NSString *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
+ (char)setMetadata:(NSDictionary *)arg0 forPersistentStoreOfType:(NSObject *)arg1 URL:(NSString *)arg2 options:(NSDictionary *)arg3 error:(id *)arg4;
+ (char)accessInstanceVariablesDirectly;
+ (void)initialize;
+ (NSObject *)metadataForPersistentStoreOfType:(NSObject *)arg0 URL:(NSString *)arg1 error:(id *)arg2;
+ (char)setMetadata:(NSDictionary *)arg0 forPersistentStoreOfType:(NSObject *)arg1 URL:(NSString *)arg2 error:(id *)arg3;

- (char)setURL:(NSString *)arg0 forPersistentStore:(NSObject *)arg1;
- (NSString *)persistentStoreForIdentifier:(NSString *)arg0;
- (char)tryLock;
- (NSURLRequest *)executeRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (NSObject *)newValuesForObjectWithID:(int)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (id)newValueForRelationship:(NSRelationshipDescription *)arg0 forObjectWithID:(int)arg1 withContext:(NSObject *)arg2 error:(id *)arg3;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(int)arg0;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(int)arg0;
- (NSString *)managedObjectIDFromUTF8String:(char *)arg0 length:(unsigned int)arg1;
- (id *)knownKeyValuesForObjectID:(NSObject *)arg0 withContext:(NSObject *)arg1;
- (id)_newOrderedRelationshipInformationForRelationship:(id)arg0 forObjectWithID:(int)arg1 withContext:(NSObject *)arg2 error:(id *)arg3;
- (NSString *)_persistentStoreForIdentifier:(NSString *)arg0;
- (NSDictionary *)managedObjectIDForURIRepresentation:(NSDictionary *)arg0 error:(id *)arg1;
- (void)_copyMetadataFromStore:(NSObject *)arg0 toStore:(NSObject *)arg1 migrationManager:(NSObject *)arg2;
- (void)clearCachedInformationForRequestWithIdentifier:(NSString *)arg0;
- (char)_isRegisteredWithUbiquity;
- (char)_checkForPostLionWriter:(NSObject *)arg0;
- (NSObject *)_realStoreTypeForStoreWithType:(NSObject *)arg0 URL:(NSString *)arg1 error:(id *)arg2;
- (char)_checkForSkewedEntityHashes:(id)arg0 metadata:(NSDictionary *)arg1;
- (void)_addPersistentStore:(NSObject *)arg0 identifier:(NSString *)arg1;
- (void)_postStoresChangedNotificationsForStores:(id)arg0 changeKey:(NSString *)arg1 options:(NSDictionary *)arg2;
- (char)_removePersistentStore:(NSObject *)arg0;
- (id)_retainedPersistentStores;
- (NSObject *)_retainedAllMigratedObjectsInStore:(NSObject *)arg0 toStore:(NSObject *)arg1;
- (NSError *)_exceptionNoStoreSaveFailureForError:(NSError *)arg0 recommendedFrame:(int *)arg1;
- (void)_coordinator_you_never_successfully_opened_the_database_corrupted:(id)arg0;
- (void)_coordinator_you_never_successfully_opened_the_database_schema_mismatch:(id)arg0;
- (void)_coordinator_you_never_successfully_opened_the_database_device_locked:(id)arg0;
- (void)_coordinator_you_never_successfully_opened_the_database_missing_directory:(id)arg0;
- (void)_coordinator_you_never_successfully_opened_the_database_no_permission:(NSObject *)arg0;
- (void)_coordinator_you_never_successfully_opened_the_database_cant_open:(id)arg0;
- (void)_coordinator_you_never_successfully_opened_the_database_disk_full:(id)arg0;
- (void)_coordinator_you_never_successfully_opened_the_database_io_error:(NSError *)arg0;
- (void)_coordinator_you_never_successfully_opened_the_database_so_saving_back_to_it_is_kinda_hard:(id)arg0;
- (void)_introspectLastErrorAndThrow;
- (void)_coordinator_no_idea_what_kind_of_request_that_was_supposed_to_be;
- (NSObject *)_checkRequestForStore:(NSObject *)arg0 withContext:(NSObject *)arg1 originalRequest:(NSURLRequest *)arg2 andOptimisticLocking:(id)arg3;
- (void)_doPreSaveAssignmentsForObjects:(NSArray *)arg0;
- (NSObject *)_saveRequestForStore:(NSObject *)arg0 withContext:(NSObject *)arg1 originalRequest:(NSURLRequest *)arg2 andOptimisticLocking:(id)arg3;
- (NSArray *)_processStoreResults:(NSArray *)arg0 forRequest:(NSURLRequest *)arg1;
- (NSObject *)URLForPersistentStore:(NSObject *)arg0;
- (NSObject *)migratePersistentStore:(NSObject *)arg0 toURL:(NSURL *)arg1 options:(NSDictionary *)arg2 withType:(NSObject *)arg3 error:(id *)arg4;
- (NSString *)managedObjectIDFromUTF8String:(char *)arg0 length:(unsigned int)arg1 error:(id *)arg2;
- (char)_canSaveGraphRootedAtObject:(NSObject *)arg0 intoStore:(NSObject *)arg1 withPreviouslyChecked:(struct __CFSet *)arg2 withAcceptableEntities:(struct __CFSet *)arg3;
- (void)_assignObjects:(NSArray *)arg0 toStore:(NSObject *)arg1;
- (id)_newObjectGraphStyleRecordForRow:(id)arg0 andObject:(NSObject *)arg1 withContext:(NSObject *)arg2;
- (NSObject *)_newConflictRecordForObject:(NSObject *)arg0 andOriginalRow:(id)arg1 withContext:(NSObject *)arg2;
- (NSObject *)_conflictsWithRowCacheForObject:(NSObject *)arg0 withContext:(NSObject *)arg1 andStore:(NSObject *)arg2;
- (void)_assignObject:(NSObject *)arg0 toPersistentStore:(NSObject *)arg1 forConfiguration:(NSDictionary *)arg2;
- (NSObject *)_fetchAllInstancesFromStore:(NSObject *)arg0 intoContext:(struct CGContext *)arg1 underlyingException:(id *)arg2;
- (void)_assignObject:(NSObject *)arg0 toPersistentStore:(NSObject *)arg1;
- (void)_setIsRegisteredWithUbiquity:(char)arg0;
- (char)_destroyPersistentStoreAtURL:(NSURL *)arg0 withType:(NSObject *)arg1 error:(id *)arg2;
- (char)_deleteAllRowsNoRelationshipIntegrityForStore:(NSObject *)arg0 andEntityWithAllSubentities:(CoreDAVItemWithNoChildren *)arg1 error:(id *)arg2;
- (void)dealloc;
- (NSPersistentStoreCoordinator *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)lock;
- (void)unlock;
- (NSManagedObjectModel *)managedObjectModel;
- (NSPersistentStoreCoordinator *)initWithManagedObjectModel:(NSManagedObjectModel *)arg0;
- (void)performBlockAndWait:(id)arg0;
- (void)performBlock:(id /* block */)arg0;
- (NSObject *)addPersistentStoreWithType:(NSObject *)arg0 configuration:(NSDictionary *)arg1 URL:(NSString *)arg2 options:(NSDictionary *)arg3 error:(id *)arg4;
- (NSURL *)persistentStoreForURL:(NSURL *)arg0;
- (char)removePersistentStore:(NSObject *)arg0 error:(id *)arg1;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (NSDictionary *)managedObjectIDForURIRepresentation:(NSDictionary *)arg0;
- (char)obtainPermanentIDsForObjects:(NSArray *)arg0 error:(id *)arg1;
- (char)_replacePersistentStoreAtURL:(NSURL *)arg0 destinationOptions:(NSDictionary *)arg1 withPersistentStoreFromURL:(NSURL *)arg2 sourceOptions:(NSDictionary *)arg3 storeType:(NSString *)arg4 error:(id *)arg5;
- (char)_destroyPersistentStoreAtURL:(NSURL *)arg0 withType:(NSObject *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (NSArray *)persistentStores;
- (NSObject *)metadataForPersistentStore:(NSObject *)arg0;
- (void)setMetadata:(NSDictionary *)arg0 forPersistentStore:(NSObject *)arg1;
- (NSObject *)_allOrderKeysForDestination:(NSObject *)arg0 inRelationship:(OCXRelationship *)arg1 error:(id *)arg2;
- (void)finalize;

@end
