/* Runtime dump - ML3Predicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3Predicate : NSObject <NSCoding, NSCopying>

- (ML3Predicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (ML3Predicate *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)SQLJoinClausesForClass:(Class)arg0;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (NSDictionary *)databaseStatementParameters;
- (NSObject *)SQLForEntityClass:(Class)arg0;
- (char)isDynamicForEntityClass:(Class)arg0;
- (NSPredicate *)spotlightPredicate;
- (char)isTrueAlways;
- (char)isFalseAlways;
- (char)containsPropertyPredicate:(NSPredicate *)arg0 matchingValue:(id)arg1 usingComparison:(int)arg2;

@end
