/* Runtime dump - ML3OrderingTerm
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3OrderingTerm : NSObject <NSCopying, NSCoding>
{
    NSString * _property;
    int _direction;
    NSString * _collation;
}

@property (readonly, nonatomic) NSString * property;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) NSString * collation;

+ (NSObject *)orderingTermWithProperty:(NSString *)arg0;
+ (ML3OrderingTerm *)reversedTerms:(id)arg0;
+ (NSObject *)orderingTermWithProperty:(NSString *)arg0 direction:(int)arg1;

- (ML3OrderingTerm *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (ML3OrderingTerm *)copyWithZone:(struct _NSZone *)arg0;
- (int)direction;
- (void).cxx_destruct;
- (NSString *)property;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (ML3OrderingTerm *)initWithProperty:(NSString *)arg0;
- (ML3OrderingTerm *)initWithProperty:(NSString *)arg0 direction:(int)arg1;
- (ML3OrderingTerm *)initWithProperty:(NSString *)arg0 direction:(int)arg1 collation:(NSString *)arg2;
- (NSString *)collation;

@end
