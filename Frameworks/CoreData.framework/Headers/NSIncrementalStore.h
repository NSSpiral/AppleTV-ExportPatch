/* Runtime dump - NSIncrementalStore
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSIncrementalStore : NSPersistentStore
{
    NSDictionary * _storeMetadata;
    unsigned long long _lastIdentifier;
    void * _reserveda;
    void * _reservedb;
}

+ (NSURL *)metadataForPersistentStoreWithURL:(NSString *)arg0 error:(id *)arg1;
+ (char)setMetadata:(NSDictionary *)arg0 forPersistentStoreWithURL:(NSString *)arg1 error:(id *)arg2;
+ (NSURL *)identifierForNewStoreAtURL:(NSURL *)arg0;

- (char)load:(id *)arg0;
- (NSObject *)referenceObjectForObjectID:(NSObject *)arg0;
- (NSDictionary *)_rawMetadata__;
- (NSURLRequest *)executeRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (NSObject *)newValuesForObjectWithID:(int)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (id)newValueForRelationship:(NSRelationshipDescription *)arg0 forObjectWithID:(int)arg1 withContext:(NSObject *)arg2 error:(id *)arg3;
- (void)_preflightCrossCheck;
- (void)managedObjectContextDidRegisterObjectsWithIDs:(int)arg0;
- (void)managedObjectContextDidUnregisterObjectsWithIDs:(int)arg0;
- (char)_prepareForExecuteRequest:(NSURLRequest *)arg0 withContext:(NSObject *)arg1 error:(id *)arg2;
- (NSString *)_newObjectIDForEntityDescription:(NSString *)arg0 pk:(long long)arg1;
- (void)_setMetadata:(NSData *)arg0 includeVersioning:(char)arg1;
- (NSObject *)newObjectIDForEntity:(NSObject *)arg0 referenceObject:(NSObject *)arg1;
- (void)dealloc;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (NSArray *)obtainPermanentIDsForObjects:(NSArray *)arg0 error:(id *)arg1;
- (char)loadMetadata:(id *)arg0;

@end
