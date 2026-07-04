/* Runtime dump - NSMemoryObjectStore
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSMemoryObjectStore : NSMappedObjectStore

+ (NSURL *)metadataForPersistentStoreWithURL:(NSString *)arg0 error:(id *)arg1;
+ (char)setMetadata:(NSDictionary *)arg0 forPersistentStoreWithURL:(NSString *)arg1 error:(id *)arg2;

- (NSMemoryObjectStore *)initWithPersistentStoreCoordinator:(NSPersistentStoreCoordinator *)arg0 configurationName:(NSString *)arg1 URL:(NSString *)arg2 options:(NSDictionary *)arg3;
- (void)_preflightCrossCheck;
- (void)saveDocumentToPath:(NSString *)arg0;
- (NSData *)_archivedData;
- (NSString *)type;

@end
