/* Runtime dump - NSBinaryObjectStore
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSBinaryObjectStore : NSMappedObjectStore

+ (NSURL *)metadataForPersistentStoreWithURL:(NSString *)arg0 error:(id *)arg1;
+ (char)setMetadata:(NSDictionary *)arg0 forPersistentStoreWithURL:(NSString *)arg1 error:(id *)arg2;

- (NSBinaryObjectStore *)initWithPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg0 configurationName:(NSString *)arg1 URL:(NSString *)arg2 options:(NSDictionary *)arg3;
- (void)saveDocumentToPath:(NSString *)arg0;
- (id *)knownKeyValuesForObjectID:(NSObject *)arg0 withContext:(NSObject *)arg1;
- (NSString *)type;

@end
