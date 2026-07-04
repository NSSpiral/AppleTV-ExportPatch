/* Runtime dump - SSUpdatesDatabaseSchema
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSUpdatesDatabaseSchema : NSObject

+ (NSString *)databasePath;
+ (void)createSchemaInDatabase:(id)arg0 withName:(NSString *)arg1;
+ (char)databaseRequiresMigration:(id)arg0;
+ (void)_migrate7000to7001InDatabase:(id)arg0;

@end
