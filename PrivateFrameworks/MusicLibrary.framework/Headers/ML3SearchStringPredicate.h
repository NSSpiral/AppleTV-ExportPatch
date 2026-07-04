/* Runtime dump - ML3SearchStringPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SearchStringPredicate : ML3Predicate
{
    NSArray * _properties;
    NSString * _searchString;
}

@property (copy, nonatomic) NSArray * properties;
@property (copy, nonatomic) NSString * searchString;

+ (NSDictionary *)predicateWithConcatenatedProperties:(NSDictionary *)arg0 searchString:(NSString *)arg1;

- (ML3SearchStringPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)searchString;
- (void).cxx_destruct;
- (void)setProperties:(NSArray *)arg0;
- (NSArray *)properties;
- (void)setSearchString:(NSString *)arg0;
- (NSObject *)SQLJoinClausesForClass:(Class)arg0;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (NSDictionary *)databaseStatementParameters;
- (char)isDynamicForEntityClass:(Class)arg0;
- (ML3SearchStringPredicate *)initWithConcatenatedProperties:(NSDictionary *)arg0 searchString:(NSString *)arg1;

@end
