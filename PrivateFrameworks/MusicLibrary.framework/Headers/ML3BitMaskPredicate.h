/* Runtime dump - ML3BitMaskPredicate
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3BitMaskPredicate : ML3PropertyPredicate
{
    long long _mask;
    long long _value;
}

@property (nonatomic) long long mask;
@property (nonatomic) long long value;

+ (NSPredicate *)predicateWithProperty:(NSString *)arg0 mask:(long long)arg1 value:(long long)arg2;

- (ML3BitMaskPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (long long)value;
- (void)setValue:(long long)arg0;
- (long long)mask;
- (void)setMask:(long long)arg0;
- (void)appendSQLToMutableString:(NSString *)arg0 entityClass:(Class)arg1;
- (NSDictionary *)databaseStatementParameters;
- (ML3BitMaskPredicate *)initWithProperty:(NSString *)arg0 mask:(long long)arg1 value:(long long)arg2;

@end
