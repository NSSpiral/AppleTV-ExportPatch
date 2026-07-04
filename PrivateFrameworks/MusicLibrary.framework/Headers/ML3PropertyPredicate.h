/* Runtime dump - ML3PropertyPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3PropertyPredicate : ML3Predicate
{
    NSString * _property;
}

@property (copy, nonatomic) NSString * property;

+ (NSPredicate *)predicateWithProperty:(NSString *)arg0;

- (ML3PropertyPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_destruct;
- (NSString *)property;
- (NSObject *)SQLJoinClausesForClass:(Class)arg0;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (char)isDynamicForEntityClass:(Class)arg0;
- (ML3PropertyPredicate *)initWithProperty:(NSString *)arg0;
- (void)setProperty:(NSString *)arg0;

@end
