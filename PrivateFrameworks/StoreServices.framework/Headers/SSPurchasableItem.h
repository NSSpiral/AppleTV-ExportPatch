/* Runtime dump - SSPurchasableItem
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSPurchasableItem : NSObject
{
    NSDictionary * _propertyValues;
    NSString * _tableName;
    SSSQLiteDatabase * _database;
}

+ (ML3DatabaseTable *)databaseTable;
+ (NSString *)sortByDatePurchasedKey;
+ (NSArray *)allPropertyKeys;

- (long long)storeID;
- (void)dealloc;
- (char)isHidden;
- (NSString *)description;
- (long long)pid;
- (long long)accountUniqueIdentifier;
- (NSDictionary *)propertyValues;
- (SSPurchasableItem *)initWithPropertyValues:(NSDictionary *)arg0;
- (NSDate *)datePurchased;

@end
