/* Runtime dump - NSAtomicStore
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSAtomicStore : NSPersistentStore
{
    NSMutableDictionary * _nodeCache;
    NSMutableDictionary * _entityCache;
    NSMutableDictionary * _storeMetadata;
    int _nextReference;
    void * _reserved4;
    void * _reserved5;
}

+ (NSURL *)metadataForPersistentStoreWithURL:(NSString *)arg0 error:(id *)arg1;
+ (void)initialize;

- (NSAtomicStore *)initWithPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg0 configurationName:(NSString *)arg1 URL:(NSString *)arg2 options:(NSDictionary *)arg3;
- (void)_registerCacheNode:(NSObject *)arg0;
- (char)load:(id *)arg0;
- (void)addCacheNodes:(id)arg0;
- (id)cacheNodes;
- (void)willRemoveCacheNodes:(id)arg0;
- (NSObject *)cacheNodeForObjectID:(NSObject *)arg0;
- (NSObject *)newCacheNodeForManagedObject:(NSObject *)arg0;
- (void)updateCacheNode:(NSObject *)arg0 fromManagedObject:(NSObject *)arg1;
- (NSObject *)newReferenceObjectForManagedObject:(NSObject *)arg0;
- (NSObject *)objectIDForEntity:(NSObject *)arg0 referenceObject:(NSObject *)arg1;
- (NSObject *)referenceObjectForObjectID:(NSObject *)arg0;
- (NSDictionary *)_rawMetadata__;
- (void)_insertNodeIntoMainCache:(NSObject *)arg0;
- (void)_insertNodeIntoEntityCache:(NSObject *)arg0;
- (NSURLRequest *)executeFetchRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1;
- (NSURLRequest *)executeSaveChangesRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1;
- (NSURLRequest *)executeCountRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1;
- (NSURLRequest *)executeRefreshRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1;
- (NSURLRequest *)_retrieveNodesSatisfyingRequest:(NSURLRequest *)arg0;
- (NSObject *)_retrieveNodeForObjectID:(NSObject *)arg0;
- (NSObject *)_getNewIDForObject:(NSObject *)arg0;
- (void)_addObject:(NSObject *)arg0;
- (NSObject *)_retrieveNodeForObject:(NSObject *)arg0;
- (void)_removeObject:(NSObject *)arg0;
- (void)_updateObject:(NSObject *)arg0;
- (void)_storeNextReferenceInMetadata;
- (void)_deleteNodeFromMainCache:(NSObject *)arg0;
- (void)_deleteNodeFromEntityCache:(NSObject *)arg0;
- (NSURLRequest *)executeRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (NSObject *)newValuesForObjectWithID:(int)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (id)newValueForRelationship:(NSRelationshipDescription *)arg0 forObjectWithID:(int)arg1 withContext:(NSObject *)arg2 error:(id *)arg3;
- (void)_didLoadMetadata;
- (void)_preflightCrossCheck;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(int)arg0;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(int)arg0;
- (NSObject *)_retainedObjectIDForEntity:(NSObject *)arg0 referenceObject:(NSObject *)arg1;
- (void)dealloc;
- (NSAtomicStore *)init;
- (char)save:(id *)arg0;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (NSArray *)obtainPermanentIDsForObjects:(NSArray *)arg0 error:(id *)arg1;

@end
