/* Runtime dump - ML3ComparisonPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3ComparisonPredicate : ML3PropertyPredicate
{
    id _value;
    NSString * _transformFunction;
    int _comparison;
    char _caseInsensitive;
    NSString * _treatNullAsString;
}

@property (retain, nonatomic) id value;
@property (nonatomic) int comparison;
@property (nonatomic) char caseInsensitive;
@property (copy, nonatomic) NSString * treatNullAsString;
@property (copy, nonatomic) NSString * transformFunction;
@property (readonly, copy, nonatomic) NSString * operator;

+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 equalToInt64:(long long)arg1;
+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 equalToValue:(id)arg1;
+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 equalToInteger:(int)arg1;
+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 value:(NSObject *)arg1 comparison:(int)arg2;
+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 value:(NSObject *)arg1 comparison:(int)arg2 caseInsensitive:(char)arg3 treatNullAsString:(NSString *)arg4;
+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 value:(NSObject *)arg1 comparison:(int)arg2 caseInsensitive:(char)arg3;
+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 value:(NSObject *)arg1 comparison:(int)arg2 transformFunction:(NSString *)arg3;

- (ML3ComparisonPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (void).cxx_destruct;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (NSDictionary *)databaseStatementParameters;
- (int)comparison;
- (char)containsPropertyPredicate:(NSPredicate *)arg0 matchingValue:(id)arg1 usingComparison:(int)arg2;
- (void)setComparison:(int)arg0;
- (void)setCaseInsensitive:(char)arg0;
- (void)setTreatNullAsString:(NSString *)arg0;
- (void)setTransformFunction:(NSString *)arg0;
- (char)caseInsensitive;
- (NSString *)treatNullAsString;
- (NSString *)transformFunction;
- (NSString *)operator;
- (NSObject *)valueToBindForOperation:(int)arg0;
- (ML3ComparisonPredicate *)initWithProperty:(NSString *)arg0 value:(NSObject *)arg1 comparison:(int)arg2 caseInsensitive:(char)arg3 transformFunction:(NSString *)arg4 treatNullAsString:(NSString *)arg5;

@end
