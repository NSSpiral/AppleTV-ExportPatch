/* Runtime dump - NSMappedObjectStore
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMappedObjectStore : NSPersistentStore
{
    NSPersistentStoreMap * _theMap;
    NSSet * _entitiesToFetch;
}

- (NSMappedObjectStore *)initWithPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg0 configurationName:(NSString *)arg1 URL:(NSString *)arg2 options:(NSDictionary *)arg3;
- (NSDictionary *)_rawMetadata__;
- (NSURLRequest *)executeFetchRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1;
- (NSURLRequest *)executeSaveChangesRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1;
- (NSURLRequest *)executeCountRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1;
- (NSURLRequest *)executeRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (NSObject *)newValuesForObjectWithID:(int)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (id)newValueForRelationship:(NSRelationshipDescription *)arg0 forObjectWithID:(int)arg1 withContext:(NSObject *)arg2 error:(id *)arg3;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(int)arg0;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(int)arg0;
- (void)_setMap:(NSObject *)arg0;
- (NSPersistentStoreMap *)_theMap;
- (void)saveDocumentToPath:(NSString *)arg0;
- (NSObject *)getNewIDForObject:(NSObject *)arg0;
- (void)_addObject:(NSObject *)arg0 objectIDMap:(NSObject *)arg1;
- (void)_removeObject:(NSObject *)arg0 objectIDMap:(NSObject *)arg1;
- (void)_updateObject:(NSObject *)arg0 objectIDMap:(NSObject *)arg1;
- (void)save;
- (NSString *)_pathFromURI:(NSString *)arg0;
- (void)dealloc;
- (NSMappedObjectStore *)init;
- (NSString *)identifier;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (NSArray *)obtainPermanentIDsForObjects:(NSArray *)arg0 error:(id *)arg1;
- (NSString *)dataForKey:(NSString *)arg0;

@end
