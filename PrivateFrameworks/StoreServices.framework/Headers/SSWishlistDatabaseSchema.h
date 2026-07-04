/* Runtime dump - SSWishlistDatabaseSchema
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSWishlistDatabaseSchema : NSObject

+ (void)createSchemaInDatabase:(id)arg0;
+ (void)_migrate7000to7001InDatabase:(id)arg0;
+ (NSString *)databasePathWithAccountIdentifier:(long long)arg0;
+ (void)_migrate7001to7002InDatabase:(id)arg0;

@end
