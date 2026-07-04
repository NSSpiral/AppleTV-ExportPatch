/* Runtime dump - SSAppPurchaseHistoryEntry
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAppPurchaseHistoryEntry : SSSQLiteEntity

+ (ML3DatabaseTable *)databaseTable;
+ (NSObject *)disambiguatedSQLForProperty:(NSString *)arg0;
+ (NSString *)predicateForAccountIdentifier:(NSString *)arg0;
+ (SSAppPurchaseHistoryEntry *)predicateForNotHidden;
+ (NSPredicate *)supportsPlatformPredicate:(char)arg0;
+ (SSAppPurchaseHistoryEntry *)predicateForNotFirstParty;

@end
