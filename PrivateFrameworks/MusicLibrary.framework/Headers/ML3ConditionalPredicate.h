/* Runtime dump - ML3ConditionalPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ConditionalPredicate : ML3Predicate
{
    ML3Predicate * _conditionPredicate;
    ML3Predicate * _thenPredicate;
    ML3Predicate * _elsePredicate;
}

@property (readonly, copy, nonatomic) ML3Predicate * conditionPredicate;
@property (readonly, copy, nonatomic) ML3Predicate * thenPredicate;
@property (readonly, copy, nonatomic) ML3Predicate * elsePredicate;

+ (NSPredicate *)predicateWithConditionPredicate:(ML3Predicate *)arg0 thenPredicate:(ML3Predicate *)arg1 elsePredicate:(ML3Predicate *)arg2;

- (ML3ConditionalPredicate *)initWithCoder:(NSCoder *)arg0;
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
- (ML3ConditionalPredicate *)initWithConditionPredicate:(ML3Predicate *)arg0 thenPredicate:(ML3Predicate *)arg1 elsePredicate:(ML3Predicate *)arg2;
- (ML3Predicate *)conditionPredicate;
- (ML3Predicate *)thenPredicate;
- (ML3Predicate *)elsePredicate;

@end
