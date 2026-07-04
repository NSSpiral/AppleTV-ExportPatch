/* Runtime dump - ML3Entity
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Entity : NSObject
{
    ML3MusicLibrary * _library;
    long long _persistentID;
}

@property (weak) ML3MusicLibrary * library;
@property (readonly) long long persistentID;
@property (readonly) char existsInLibrary;

+ (NSObject *)propertyForMPMediaEntityProperty:(NSObject *)arg0;
+ (NSObject *)spotlightPropertyForMPMediaEntityProperty:(NSObject *)arg0;
+ (int)revisionTrackingCode;
+ (char)insertValues:(NSArray *)arg0 intoTable:(id)arg1 persistentID:(long long)arg2 connection:(NSURLConnection *)arg3;
+ (ML3Entity *)persistentIDColumnForTable:(id)arg0;
+ (char)incrementRevisionForRevisionTypeContentWithConnection:(NSURLConnection *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2;
+ (char)_shouldIncrementRevisionForType:(int)arg0 persistentID:(long long)arg1 usingConnection:(NSURLConnection *)arg2;
+ (char)incrementRevisionWithLibrary:(ML3MusicLibrary *)arg0 persistentID:(long long)arg1 deletionType:(int)arg2 revisionType:(int)arg3 usingConnection:(NSURLConnection *)arg4;
+ (NSDictionary *)unsettableProperties;
+ (NSObject *)joinClausesForProperty:(NSString *)arg0;
+ (NSObject *)foreignDatabaseTableForProperty:(NSString *)arg0;
+ (NSObject *)foreignColumnForProperty:(NSString *)arg0;
+ (char)insertValues:(NSArray *)arg0 intoTable:(id)arg1 persistentID:(long long)arg2 library:(ML3MusicLibrary *)arg3;
+ (ML3Entity *)extraTablesToInsert;
+ (char)insertionChangesLibraryContents;
+ (char)incrementRevisionWithLibrary:(ML3MusicLibrary *)arg0 persistentID:(long long)arg1 deletionType:(int)arg2 revisionType:(int)arg3;
+ (NSDictionary *)allProperties;
+ (NSPredicate *)predicateIncludingSystemwidePredicatesWithPredicate:(NSPredicate *)arg0 library:(ML3MusicLibrary *)arg1 options:(long long)arg2;
+ (NSDictionary *)newSelectSQLForProperties:(id *)arg0 count:(NSObject *)arg1 predicate:(unsigned int)arg2;
+ (NSObject *)disambiguatedSelectSQLForProperty:(NSString *)arg0;
+ (NSPredicate *)predicateByOptimizingComparisonPredicate:(NSPredicate *)arg0;
+ (char)propertyIsCountProperty:(NSObject *)arg0;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1;
+ (NSObject *)countingQueryForBaseQuery:(NSObject *)arg0 countProperty:(NSObject *)arg1 forIdentifier:(long long)arg2;
+ (ML3Entity *)unrestrictedAllItemsQueryWithlibrary:(id)arg0 predicate:(NSPredicate *)arg1 orderingTerms:(NSArray *)arg2;
+ (NSOperationQueue *)widthLimitedSetValuesQueue;
+ (char)setValues:(NSArray *)arg0 forProperties:(id *)arg1 forEntityPersistentIDs:(id)arg2 inLibrary:(NSObject *)arg3 usingConnection:(NSURLConnection *)arg4;
+ (void)_didChangeValueForProperties:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1;
+ (char)libraryContentsChangeForProperty:(NSString *)arg0;
+ (char)libraryDynamicChangeForProperty:(NSString *)arg0;
+ (char)deleteFromLibrary:(NSObject *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2 count:(long long)arg3 usingConnection:(unsigned int)arg4;
+ (char)_deleteRowForPersistentIDs:(long long *)arg0 count:(long long)arg1 library:(unsigned int)arg2 table:(_UIAlertSheetTable *)arg3 usingColumn:(id)arg4 usingConnection:(NSURLConnection *)arg5;
+ (ML3Entity *)extraTablesToDelete;
+ (ML3Entity *)collectionClassesToUpdateBeforeDelete;
+ (char)incrementRevisionForRevisionTypeContentWithConnection:(NSURLConnection *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2 count:(long long)arg3;
+ (char)deleteFromLibrary:(NSObject *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2 count:(long long)arg3;
+ (NSObject *)disambiguatedSQLForProperty:(NSString *)arg0;
+ (NSDictionary *)predisambiguatedProperties;
+ (char)incrementRevisionForRevisionTypeContentWithLibrary:(ML3MusicLibrary *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2;
+ (void)enumeratePersistentIDsInLibrary:(NSObject *)arg0 matchingPredicate:(NSPredicate *)arg1 orderingTerms:(NSArray *)arg2 persistentIDs:(long long *)arg3 count:(long long)arg4 options:(unsigned int)arg5 usingBlock:(long long)arg6;
+ (NSObject *)subselectStatementForProperty:(NSString *)arg0;
+ (NSObject *)subselectPropertyForProperty:(NSString *)arg0;
+ (NSDictionary *)newSelectAllEntitiesSQLForProperties:(id *)arg0 count:(NSObject *)arg1 predicate:(unsigned int)arg2;
+ (ML3Entity *)defaultFilterPredicates;
+ (NSPredicate *)predicateByOptimizingPredicate:(NSPredicate *)arg0;
+ (NSObject *)newWithPersistentID:(long long)arg0 inLibrary:(NSObject *)arg1;
+ (NSDictionary *)newWithDictionary:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1;
+ (NSDictionary *)newWithDictionary:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1 cachedNameOrders:(id)arg2;
+ (NSDictionary *)newWithDictionary:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1 cachedNameOrders:(id)arg2 usingConnection:(NSURLConnection *)arg3;
+ (ML3Entity *)defaultOrderingTerms;
+ (NSObject *)sectionPropertyForProperty:(NSString *)arg0;
+ (NSObject *)foreignPropertyForProperty:(NSString *)arg0 entityClass:(Class)arg1;
+ (char)removeFromMyLibrary:(NSObject *)arg0 deletionType:(int)arg1 persistentIDs:(long long *)arg2 count:(long long)arg3;
+ (void)predisambiguateProperties:(NSDictionary *)arg0 toDictionary:(NSDictionary *)arg1;
+ (NSDictionary *)indexableSQLForProperties:(NSDictionary *)arg0;
+ (NSDictionary *)orderingSQLForProperties:(NSDictionary *)arg0 directionality:(id)arg1;
+ (void)enumeratePersistentIDsInLibrary:(NSObject *)arg0 afterRevision:(long long)arg1 usingBlock:(id /* block */)arg2;
+ (NSObject *)anyInLibrary:(NSObject *)arg0 predicate:(NSPredicate *)arg1;
+ (NSObject *)anyInLibrary:(NSObject *)arg0 predicate:(NSPredicate *)arg1 options:(long long)arg2;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 usingSections:(char)arg2;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 orderingTerms:(NSArray *)arg2 usingSections:(char)arg3;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 orderingTerms:(NSArray *)arg2 usingSections:(char)arg3 options:(long long)arg4;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 orderingProperties:(NSArray *)arg2;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 orderingProperties:(NSArray *)arg2 usingSections:(char)arg3;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 orderingProperties:(NSArray *)arg2 orderingDirectionMappings:(NSDictionary *)arg3 usingSections:(char)arg4;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 options:(long long)arg2;
+ (NSObject *)directCollectionQueryWithAggregateQuery:(NSObject *)arg0 predicate:(NSPredicate *)arg1 usingSections:(char)arg2;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 orderingTerms:(NSArray *)arg2;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 orderingTerms:(NSArray *)arg2 propertyToCount:(NSString *)arg3;
+ (NSObject *)queryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 orderingTerms:(NSArray *)arg2 propertyToCount:(NSString *)arg3 options:(long long)arg4;
+ (NSObject *)unrestrictedQueryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 orderingTerms:(NSArray *)arg2;
+ (NSObject *)allItemsQueryWithLibrary:(ML3MusicLibrary *)arg0 predicate:(NSPredicate *)arg1 orderingTerms:(NSArray *)arg2 usingSections:(char)arg3;
+ (NSObject *)aggregateQueryWithUnitQuery:(NSString *)arg0 foreignPersistentIDProperty:(NSString *)arg1;
+ (NSDictionary *)replacerWithProperties:(NSDictionary *)arg0 library:(ML3MusicLibrary *)arg1;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (ML3Entity *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (ML3MusicLibrary *)library;
- (long long)persistentID;
- (ML3Entity *)initWithDictionary:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1 cachedNameOrders:(id)arg2 usingConnection:(NSURLConnection *)arg3;
- (ML3Entity *)initWithPersistentID:(long long)arg0 inLibrary:(NSObject *)arg1;
- (void)getValues:(id *)arg0 forProperties:(id *)arg1 count:(NSObject *)arg2;
- (ML3Entity *)initWithDictionary:(NSDictionary *)arg0 inLibrary:(NSObject *)arg1 cachedNameOrders:(id)arg2;
- (char)setValues:(NSArray *)arg0 forProperties:(id *)arg1;
- (char)setValues:(NSArray *)arg0 forProperties:(id *)arg1 usingConnection:(NSURLConnection *)arg2;
- (NSObject *)copyInLibrary:(NSObject *)arg0;
- (char)existsInLibrary;
- (char)matchesPredicate:(NSPredicate *)arg0;
- (NSDictionary *)getValuesForProperties:(NSDictionary *)arg0;
- (char)setValues:(id *)arg0 forProperties:(id *)arg1 count:(id *)arg2;
- (void)setValues:(NSArray *)arg0 forProperties:(id *)arg1 async:(char)arg2 withCompletionBlock:(id /* block */)arg3;
- (char)setValuesForPropertiesWithDictionary:(NSDictionary *)arg0;
- (char)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;
- (void)didChangeValueForProperties:(NSDictionary *)arg0;
- (char)deleteFromLibrary;
- (void)incrementRevision;
- (void)setLibrary:(ML3MusicLibrary *)arg0;

@end
