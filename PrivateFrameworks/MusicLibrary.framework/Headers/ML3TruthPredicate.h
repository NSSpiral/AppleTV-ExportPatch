/* Runtime dump - ML3TruthPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3TruthPredicate : ML3Predicate
{
    char _truthValue;
}

+ (NSPredicate *)truePredicate;
+ (NSPredicate *)falsePredicate;

- (ML3TruthPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (char)isTrueAlways;
- (char)isFalseAlways;
- (NSString *)_predicateString;

@end
