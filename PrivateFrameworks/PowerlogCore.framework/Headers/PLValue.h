/* Runtime dump - PLValue
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLValue : NSObject
{
    short _formatter;
    id _value;
    NSString * _unit;
}

@property (retain, nonatomic) id value;
@property (retain, nonatomic) NSString * unit;
@property short formatter;
@property (readonly) NSNumberFormatter * numberFormatter;

+ (char)isFormater:(short)arg0 validForObject:(NSObject *)arg1;
+ (PLValue *)valueWithValue:(id)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;
+ (PLValue *)valueWithLongLong:(long long)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;
+ (PLValue *)valueWithUnsignedLong:(unsigned long)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;
+ (PLValue *)valueWithTimeIntervalSince1970:(double)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;
+ (NSDate *)valueWithDate:(NSDate *)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;
+ (NSDate *)formattedStringForDate:(NSDate *)arg0;
+ (void)resetTimestampFormaterTimezone;
+ (PLValue *)valueWithUnsignedLongLong:(unsigned long long)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;
+ (PLValue *)valueWithDouble:(double)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;
+ (NSString *)valueWithString:(NSString *)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;
+ (PLValue *)valueWithBool:(char)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;
+ (PLValue *)valueWithLong:(long)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;
+ (NSNumber *)valueWithNumber:(NSNumber *)arg0 withUnit:(NSString *)arg1 withFormat:(short)arg2;

- (short)formatter;
- (void)setFormatter:(short)arg0;
- (NSNumberFormatter *)numberFormatter;
- (char)boolValue;
- (void)dealloc;
- (PLValue *)init;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (double)doubleValue;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (long long)longLongValue;
- (unsigned long long)unsignedLongLongValue;
- (void).cxx_destruct;
- (double)timeIntervalSince1970;
- (unsigned long)unsignedLongValue;
- (long)longValue;
- (NSString *)unit;
- (void)setUnit:(NSString *)arg0;

@end
