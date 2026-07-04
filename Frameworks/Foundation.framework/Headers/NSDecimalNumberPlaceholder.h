/* Runtime dump - NSDecimalNumberPlaceholder
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDecimalNumberPlaceholder : NSDecimalNumber

+ (NSDecimalNumberPlaceholder *)allocWithZone:(struct _NSZone *)arg0;
+ (char)supportsSecureCoding;

- (NSDecimalNumberPlaceholder *)initWithUnsignedLongLong:(unsigned long long)arg0;
- (NSDecimalNumberPlaceholder *)initWithShort:(short)arg0;
- (NSDecimalNumberPlaceholder *)initWithChar:(char)arg0;
- (NSDecimalNumberPlaceholder *)initWithString:(NSString *)arg0 locale:(NSObject *)arg1;
- (NSDecimalNumberPlaceholder *)initWithDecimal:(struct ?)arg0;
- (NSDecimalNumberPlaceholder *)initWithMantissa:(unsigned long long)arg0 exponent:(short)arg1 isNegative:(char)arg2;
- (NSDecimalNumberPlaceholder *)retain;
- (void)release;
- (NSDecimalNumberPlaceholder *)initWithCoder:(NSCoder *)arg0;
- (NSDecimalNumberPlaceholder *)init;
- (NSDecimalNumberPlaceholder *)autorelease;
- (unsigned int)retainCount;
- (NSDecimalNumberPlaceholder *)initWithLong:(long)arg0;
- (NSDecimalNumberPlaceholder *)initWithString:(NSString *)arg0;
- (NSDecimalNumberPlaceholder *)initWithInt:(int)arg0;
- (NSDecimalNumberPlaceholder *)initWithBool:(char)arg0;
- (NSDecimalNumberPlaceholder *)initWithInteger:(int)arg0;
- (NSDecimalNumberPlaceholder *)initWithFloat:(float)arg0;
- (NSDecimalNumberPlaceholder *)initWithUnsignedLong:(unsigned long)arg0;
- (NSDecimalNumberPlaceholder *)initWithLongLong:(long long)arg0;
- (NSDecimalNumberPlaceholder *)initWithUnsignedInteger:(unsigned int)arg0;
- (NSDecimalNumberPlaceholder *)initWithUnsignedShort:(unsigned short)arg0;
- (NSDecimalNumberPlaceholder *)initWithUnsignedChar:(unsigned char)arg0;
- (NSDecimalNumberPlaceholder *)initWithUnsignedInt:(unsigned int)arg0;
- (NSDecimalNumberPlaceholder *)initWithDouble:(double)arg0;

@end
