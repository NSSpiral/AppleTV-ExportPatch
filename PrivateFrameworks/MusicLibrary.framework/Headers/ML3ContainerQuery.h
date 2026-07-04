/* Runtime dump - ML3ContainerQuery
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ContainerQuery : ML3Query
{
    ML3Predicate * _containerPredicate;
    ML3Container * _container;
    NSArray * _limitedPersistentIDs;
}

@property (readonly, nonatomic) NSArray * limitedPersistentIDs;
@property (readonly, nonatomic) ML3Container * container;
@property (readonly, nonatomic) char requiresSmartLimiting;

- (ML3ContainerQuery *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (ML3ContainerQuery *)copyWithZone:(struct _NSZone *)arg0;
- (ML3Container *)container;
- (void).cxx_destruct;
- (unsigned int)countOfEntities;
- (char)hasEntities;
- (unsigned int)countOfDistinctRowsForColumn:(id)arg0;
- (NSDictionary *)selectPersistentIDsSQLAndProperties:(NSDictionary *)arg0 ordered:(char)arg1;
- (id)enumerationDatabaseResultForSQL:(id)arg0 onConnection:(NSURLConnection *)arg1 withParameters:(NSDictionary *)arg2;
- (id)valueForAggregateFunction:(id)arg0 onEntitiesForProperty:(NSString *)arg1;
- (char)requiresSmartLimiting;
- (ML3ContainerQuery *)initWithEntityClass:(Class)arg0 container:(ML3Container *)arg1 predicate:(NSPredicate *)arg2 orderingTerms:(NSArray *)arg3;
- (NSSet *)selectPersistentIDsSQLAndPropertiesForResultSet:(NSSet *)arg0 ordered:(char)arg1;
- (NSArray *)limitedPersistentIDs;

@end
