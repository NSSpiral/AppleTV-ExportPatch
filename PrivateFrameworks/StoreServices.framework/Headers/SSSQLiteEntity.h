/* Runtime dump - SSSQLiteEntity
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSQLiteEntity : NSObject <SSSQLiteEntity>
{
    SSSQLiteDatabase * _database;
    long long _persistentID;
}

@property (readonly, nonatomic) SSSQLiteDatabase * database;
@property (readonly, nonatomic) long long persistentID;
@property (readonly, nonatomic) char existsInDatabase;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)foreignDatabaseTableForProperty:(NSString *)arg0;
+ (ML3DatabaseTable *)databaseTable;
+ (NSObject *)disambiguatedSQLForProperty:(NSString *)arg0;
+ (SSSQLiteEntity *)queryWithDatabase:(SSSQLiteDatabase *)arg0 predicate:(NSPredicate *)arg1;
+ (SSSQLiteEntity *)anyInDatabase:(id)arg0 predicate:(NSPredicate *)arg1;
+ (char)_insertValues:(NSArray *)arg0 intoTable:(id)arg1 withPersistentID:(long long)arg2 database:(SSSQLiteDatabase *)arg3;
+ (NSObject *)databasePropertyToSetClientProperty:(NSObject *)arg0;
+ (NSObject *)databaseValueForProperty:(NSString *)arg0 clientValue:(id)arg1;
+ (NSObject *)joinClauseForProperty:(NSString *)arg0;
+ (NSObject *)databasePropertyToGetClientProperty:(NSObject *)arg0;
+ (SSSQLiteEntity *)foreignDatabaseTablesToDelete;
+ (SSSQLiteEntity *)foreignKeyColumnForTable:(id)arg0;
+ (NSObject *)foreignDatabaseColumnForProperty:(NSString *)arg0;
+ (NSDictionary *)copyDatabaseDictionaryToSetClientDictionary:(NSDictionary *)arg0;
+ (Class)memoryEntityClass;
+ (NSObject *)_aggregateValueForProperty:(NSString *)arg0 function:(NSString *)arg1 predicate:(NSPredicate *)arg2 database:(SSSQLiteDatabase *)arg3;
+ (SSSQLiteEntity *)queryWithDatabase:(SSSQLiteDatabase *)arg0 predicate:(NSPredicate *)arg1 orderingProperties:(NSArray *)arg2;
+ (NSObject *)countForProperty:(NSString *)arg0 predicate:(NSPredicate *)arg1 database:(SSSQLiteDatabase *)arg2;
+ (NSObject *)maxValueForProperty:(NSString *)arg0 predicate:(NSPredicate *)arg1 database:(SSSQLiteDatabase *)arg2;
+ (NSObject *)minValueForProperty:(NSString *)arg0 predicate:(NSPredicate *)arg1 database:(SSSQLiteDatabase *)arg2;

- (void *)valueForProperty:(NSString *)arg0;
- (SSSQLiteDatabase *)database;
- (long long)persistentID;
- (void)getValues:(id *)arg0 forProperties:(id *)arg1 count:(NSObject *)arg2;
- (char)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (char)setValuesWithDictionary:(NSDictionary *)arg0;
- (char)deleteFromDatabase;
- (SSSQLiteEntity *)initWithPropertyValues:(NSString *)arg0 inDatabase:(char)arg1;
- (NSArray *)_copyTableClusteredValuesWithValues:(NSArray *)arg0;
- (SSSQLiteEntity *)initWithPersistentID:(long long)arg0 inDatabase:(char)arg1;
- (char)_deleteRowFromTable:(id)arg0 usingColumn:(id)arg1;
- (NSDictionary *)copyValuesForClientProperties:(NSDictionary *)arg0;
- (NSDictionary *)copyXPCEncodedValuesForClientProperties:(NSDictionary *)arg0;
- (char)existsInDatabase;

@end
