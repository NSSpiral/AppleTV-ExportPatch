/* Runtime dump - NSDictionaryStoreMap
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSDictionaryStoreMap : NSPersistentStoreMap
{
    NSMutableDictionary * _theMap;
}

+ (void)initialize;

- (NSDictionaryStoreMap *)initWithStore:(NSObject *)arg0 fromPath:(NSString *)arg1;
- (NSDictionaryStoreMap *)initWithStore:(NSMappedObjectStore *)arg0;
- (void)saveToPath:(NSString *)arg0;
- (NSObject *)_nodeFromObject:(NSObject *)arg0 objectIDMap:(NSObject *)arg1;
- (void)removeObject:(struct objc_method *)arg0 objectIDMap:(NSObject *)arg1;
- (void)addObject:(struct objc_method *)arg0 objectIDMap:(NSObject *)arg1;
- (NSDictionaryStoreMap *)initWithStore:(NSObject *)arg0 fromArchivedData:(NSData *)arg1;
- (NSDictionary *)_theDictionary;
- (void)updateObject:(NSObject *)arg0 objectIDMap:(NSObject *)arg1;
- (id)retainedObjectIDsForRelationship:(id)arg0 forObjectID:(NSObject *)arg1;
- (NSURLRequest *)handleFetchRequest:(NSURLRequest *)arg0;
- (NSData *)_archivedData;
- (void)dealloc;
- (NSString *)dataForKey:(NSString *)arg0;

@end
