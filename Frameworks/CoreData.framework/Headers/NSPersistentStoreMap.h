/* Runtime dump - NSPersistentStoreMap
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSPersistentStoreMap : NSObject
{
    NSMappedObjectStore * _store;
    NSString * _databaseUUID;
    NSDictionary * _storeMetadata;
    unsigned long long _nextPK64;
    NSDictionary * _mappings;
}

+ (void)initialize;

- (NSString *)configurationName;
- (id)_updatedMetadataWithSeed:(unsigned int)arg0 includeVersioning:(char)arg1;
- (NSPersistentStoreMap *)initWithStore:(NSMappedObjectStore *)arg0;
- (void)_setMetadata:(NSData *)arg0;
- (NSMappedObjectStore *)store;
- (void)removeObject:(struct objc_method *)arg0 objectIDMap:(NSObject *)arg1;
- (void)addObject:(struct objc_method *)arg0 objectIDMap:(NSObject *)arg1;
- (void)updateObject:(NSObject *)arg0 objectIDMap:(NSObject *)arg1;
- (id)retainedObjectIDsForRelationship:(id)arg0 forObjectID:(NSObject *)arg1;
- (NSURLRequest *)handleFetchRequest:(NSURLRequest *)arg0;
- (unsigned long long)nextPK64;
- (NSString *)databaseUUID;
- (void)setDatabaseUUID:(NSString *)arg0;
- (id)externalMapping;
- (unsigned long long)_cheatAndLookAtCurrentValueOfnextPK64;
- (id)_storeMetadataForSaving;
- (void)dealloc;
- (void)setMetadata:(NSDictionary *)arg0;
- (NSDictionary *)metadata;
- (NSString *)dataForKey:(NSString *)arg0;

@end
