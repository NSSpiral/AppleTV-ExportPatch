/* Runtime dump - SSMemoryEntity
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMemoryEntity : NSObject <NSCopying>
{
    long long _databaseID;
    NSMutableDictionary * _propertyValues;
    NSMutableDictionary * _externalPropertyValues;
}

@property (nonatomic) long long databaseID;
@property (readonly, copy, nonatomic) NSDictionary * propertyValues;
@property (readonly, copy, nonatomic) NSDictionary * externalPropertyValues;

+ (SSMemoryEntity *)defaultProperties;
+ (SSMemoryEntity *)queryWithDatabase:(SSSQLiteDatabase *)arg0 predicate:(NSPredicate *)arg1;
+ (SSMemoryEntity *)anyInDatabase:(id)arg0 predicate:(NSPredicate *)arg1;
+ (SSMemoryEntity *)queryWithDatabase:(SSSQLiteDatabase *)arg0 predicate:(NSPredicate *)arg1 orderingProperties:(NSArray *)arg2;
+ (Class)databaseEntityClass;

- (long long)databaseID;
- (void)dealloc;
- (SSMemoryEntity *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (SSMemoryEntity *)copyWithZone:(struct _NSZone *)arg0;
- (void *)valueForProperty:(NSString *)arg0;
- (void)setDatabaseID:(long long)arg0;
- (void)setValues:(id *)arg0 forProperties:(id *)arg1 count:(NSObject *)arg2;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (NSObject *)valueForExternalProperty:(NSObject *)arg0;
- (void)setExternalValuesWithDictionary:(NSDictionary *)arg0;
- (void)setValuesWithDictionary:(NSDictionary *)arg0;
- (void)reloadFromDatabaseEntity:(NSObject *)arg0 properties:(NSDictionary *)arg1;
- (void)setValues:(id *)arg0 forExternalProperties:(id *)arg1 count:(NSObject *)arg2;
- (NSDictionary *)propertyValues;
- (NSDictionary *)externalPropertyValues;
- (SSMemoryEntity *)initWithDatabaseEntity:(NSObject *)arg0 properties:(NSDictionary *)arg1;
- (void)setValue:(NSObject *)arg0 forExternalProperty:(NSObject *)arg1;

@end
