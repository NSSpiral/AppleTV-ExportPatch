/* Runtime dump - ML3Query
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Query : NSObject <NSCoding, NSCopying>
{
    ML3MusicLibrary * _library;
    Class _entityClass;
    ML3Predicate * _predicate;
    NSArray * _orderingTerms;
    NSString * _propertyToCount;
    ML3AggregateQuery * _nonDirectAggregateQuery;
    char _usingSections;
    long long _options;
    char _filtersOnDynamicProperties;
    unsigned int _limit;
}

@property (readonly, nonatomic) ML3MusicLibrary * library;
@property (readonly, nonatomic) Class entityClass;
@property (readonly, nonatomic) ML3Predicate * predicate;
@property (readonly, nonatomic) ML3Predicate * predicateIncludingSystemwidePredicates;
@property (readonly, nonatomic) NSArray * orderingTerms;
@property (readonly, nonatomic) NSString * propertyToCount;
@property (readonly, nonatomic) char hasEntities;
@property (readonly, nonatomic) long long anyEntityPersistentID;
@property (readonly, nonatomic) unsigned int countOfEntities;
@property (readonly, nonatomic) ML3AggregateQuery * nonDirectAggregateQuery;
@property (readonly, nonatomic) NSString * sectionProperty;
@property (readonly, nonatomic) char usingSections;
@property (nonatomic) unsigned int limit;
@property (nonatomic) char ignoreSystemFilterPredicates;
@property (nonatomic) char ignoreRestrictionsPredicates;
@property (readonly, nonatomic) long long options;
@property (readonly, nonatomic) NSString * selectPersistentIDsSQL;
@property (readonly, nonatomic) NSString * selectCountSQL;
@property (readonly, nonatomic) NSString * persistentIDProperty;
@property (readonly, nonatomic) char filtersOnDynamicProperties;

- (ML3Query *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (ML3Query *)copyWithZone:(struct _NSZone *)arg0;
- (ML3Predicate *)predicate;
- (long long)options;
- (void).cxx_destruct;
- (NSArray *)sections;
- (ML3MusicLibrary *)library;
- (unsigned int)countOfEntities;
- (void)enumeratePersistentIDsAndProperties:(NSDictionary *)arg0 usingBlock:(id /* block */)arg1;
- (Class)entityClass;
- (void)enumeratePersistentIDsUsingBlock:(id /* block */)arg0;
- (char)hasEntities;
- (ML3Query *)initWithLibrary:(ML3MusicLibrary *)arg0 entityClass:(Class)arg1 predicate:(ML3Predicate *)arg2 orderingTerms:(NSArray *)arg3 usingSections:(char)arg4 nonDirectAggregateQuery:(ML3AggregateQuery *)arg5 propertyToCount:(NSString *)arg6 options:(long long)arg7;
- (NSArray *)orderingTerms;
- (ML3AggregateQuery *)nonDirectAggregateQuery;
- (NSString *)propertyToCount;
- (char)usingSections;
- (char)ignoreSystemFilterPredicates;
- (char)ignoreRestrictionsPredicates;
- (void)loadNamesFromLibrary:(NSObject *)arg0 onConnection:(NSURLConnection *)arg1 forPredicate:(NSPredicate *)arg2 loadAllNames:(char)arg3 cancelHandler:(id /* block */)arg4;
- (NSArray *)selectSQLWithColumns:(NSArray *)arg0 orderingTerms:(NSArray *)arg1 limit:(unsigned int)arg2;
- (NSDictionary *)persistentIDParameters;
- (char)hasRowForColumn:(id)arg0;
- (unsigned int)countOfDistinctRowsForColumn:(id)arg0;
- (void)enumerateSectionsUsingBlock:(id /* block */)arg0;
- (char)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg0;
- (NSArray *)selectSectionsSQL;
- (NSString *)sectionProperty;
- (NSDictionary *)sectionsParameters;
- (void)enumeratePersistentIDsAndProperties:(NSDictionary *)arg0 ordered:(char)arg1 sectionProperty:(NSString *)arg2 cancelBlock:(id /* block */)arg3 usingBlock:(/* block */ id)arg4;
- (NSObject *)nameOrderPropertyForProperty:(NSString *)arg0;
- (NSDictionary *)selectPersistentIDsSQLAndProperties:(NSDictionary *)arg0 ordered:(char)arg1;
- (id)enumerationDatabaseResultForSQL:(id)arg0 onConnection:(NSURLConnection *)arg1 withParameters:(NSDictionary *)arg2;
- (NSArray *)selectSQLWithColumns:(NSArray *)arg0 orderingTerms:(NSArray *)arg1;
- (NSArray *)selectSQLWithColumns:(NSArray *)arg0 groupBy:(ABNamePropertyGroup *)arg1 orderingTerms:(NSArray *)arg2 directionality:(id)arg3 usingLowerBound:(char)arg4 distinct:(char)arg5 limit:(unsigned int)arg6;
- (ML3Predicate *)predicateIncludingSystemwidePredicates;
- (NSString *)persistentIDProperty;
- (char)sectionsPersistentIDColumnIsDistinct;
- (NSArray *)selectSQLWithColumns:(NSArray *)arg0 groupBy:(ABNamePropertyGroup *)arg1 orderingTerms:(NSArray *)arg2 limit:(unsigned int)arg3;
- (NSDictionary *)selectPersistentIDsSQLAndProperties:(NSDictionary *)arg0 ordered:(char)arg1 distinct:(char)arg2;
- (NSArray *)selectSQLWithColumns:(NSArray *)arg0 groupBy:(ABNamePropertyGroup *)arg1 distinct:(char)arg2;
- (NSArray *)selectSQLWithColumns:(NSArray *)arg0 orderingTerms:(NSArray *)arg1 distinct:(char)arg2;
- (void)setIgnoreSystemFilterPredicates:(char)arg0;
- (void)setIgnoreRestrictionsPredicates:(char)arg0;
- (NSObject *)reverseQuery;
- (long long)anyEntityPersistentID;
- (char)deleteAllEntitiesFromLibrary;
- (char)deleteAllEntitiesFromLibraryWithDeletionType:(int)arg0 usingConnection:(NSURLConnection *)arg1;
- (void)enumeratePersistentIDsAndSectionsWithProperty:(NSString *)arg0 usingBlock:(id /* block */)arg1;
- (void)enumeratePersistentIDsAndProperties:(NSDictionary *)arg0 ordered:(char)arg1 usingBlock:(id /* block */)arg2;
- (void)enumeratePersistentIDsAndProperties:(NSDictionary *)arg0 ordered:(char)arg1 cancelBlock:(id /* block */)arg2 usingBlock:(/* block */ id)arg3;
- (id)valueForAggregateFunction:(id)arg0 onEntitiesForProperty:(NSString *)arg1;
- (NSArray *)selectSQLWithColumns:(NSArray *)arg0 groupBy:(ABNamePropertyGroup *)arg1;
- (NSArray *)selectSQLWithColumns:(NSArray *)arg0 orderingTerms:(NSArray *)arg1 directionality:(id)arg2;
- (NSArray *)selectSQLWithColumns:(NSArray *)arg0 groupBy:(ABNamePropertyGroup *)arg1 orderingTerms:(NSArray *)arg2;
- (NSArray *)selectSQLWithColumns:(NSArray *)arg0 groupBy:(ABNamePropertyGroup *)arg1 orderingTerms:(NSArray *)arg2 directionality:(id)arg3 usingLowerBound:(char)arg4;
- (id)lowerBoundParametersForOrderingTerms:(id)arg0 lowerBoundPersistentID:(long long)arg1;
- (id)selectUnorderedPersistentIDsSQL;
- (NSString *)selectPersistentIDsSQL;
- (NSString *)selectCountSQL;
- (NSDictionary *)countStatementParameters;
- (unsigned int)limit;
- (void)setLimit:(unsigned int)arg0;
- (char)filtersOnDynamicProperties;

@end
