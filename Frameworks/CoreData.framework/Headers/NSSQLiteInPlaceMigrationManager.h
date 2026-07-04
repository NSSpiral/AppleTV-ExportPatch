/* Runtime dump - NSSQLiteInPlaceMigrationManager
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLiteInPlaceMigrationManager : NSMigrationManager

+ (char)_canMigrateWithMappingModel:(NSMappingModel *)arg0;

- (char)migrateStoreFromURL:(NSURL *)arg0 type:(NSObject *)arg1 options:(NSDictionary *)arg2 withMappingModel:(NSMappingModel *)arg3 toDestinationURL:(NSURL *)arg4 destinationType:(NSString *)arg5 destinationOptions:(NSDictionary *)arg6 error:(id *)arg7;
- (void)dealloc;

@end
