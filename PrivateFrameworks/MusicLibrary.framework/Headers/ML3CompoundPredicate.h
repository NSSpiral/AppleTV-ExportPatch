/* Runtime dump - ML3CompoundPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3CompoundPredicate : ML3Predicate
{
    NSArray * _predicates;
}

@property (retain, nonatomic) NSArray * predicates;
@property (readonly, copy, nonatomic) NSString * compoundOperatorJoiner;

+ (ML3CompoundPredicate *)predicateMatchingPredicates:(id)arg0;

- (ML3CompoundPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (NSObject *)SQLJoinClausesForClass:(Class)arg0;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (NSDictionary *)databaseStatementParameters;
- (char)isDynamicForEntityClass:(Class)arg0;
- (NSPredicate *)spotlightPredicate;
- (char)containsPropertyPredicate:(NSPredicate *)arg0 matchingValue:(id)arg1 usingComparison:(int)arg2;
- (void)setPredicates:(NSArray *)arg0;
- (NSArray *)predicates;
- (ML3CompoundPredicate *)initWithPredicates:(NSArray *)arg0;

@end
