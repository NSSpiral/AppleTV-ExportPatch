/* Runtime dump - ML3SpotlightMatchPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3SpotlightMatchPredicate : ML3Predicate
{
    ML3SpotlightNameCache * _names;
    NSArray * _searchProperties;
    NSString * _searchString;
}

@property (readonly, nonatomic) NSString * searchString;

+ (NSDictionary *)predicateWithProperties:(NSDictionary *)arg0 searchString:(NSString *)arg1;

- (void)dealloc;
- (NSString *)searchString;
- (NSObject *)SQLJoinClausesForClass:(Class)arg0;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (NSPredicate *)spotlightPredicate;
- (ML3SpotlightMatchPredicate *)initWithSearchString:(NSString *)arg0 matchingProperties:(NSDictionary *)arg1;

@end
