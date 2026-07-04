/* Runtime dump - ML3UnaryPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3UnaryPredicate : ML3Predicate
{
    ML3Predicate * _predicate;
}

@property (retain, nonatomic) ML3Predicate * predicate;

+ (NSPredicate *)predicateWithPredicate:(ML3Predicate *)arg0;

- (ML3UnaryPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setPredicate:(ML3Predicate *)arg0;
- (ML3Predicate *)predicate;
- (void).cxx_destruct;
- (NSObject *)SQLJoinClausesForClass:(Class)arg0;
- (NSDictionary *)databaseStatementParameters;
- (ML3UnaryPredicate *)initWithPredicate:(ML3Predicate *)arg0;

@end
