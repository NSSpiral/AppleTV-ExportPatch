/* Runtime dump - NSDecimalNumber
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSDecimalNumber : NSNumber
{
    id _exponent;
    id _length;
    id _isNegative;
    id _isCompact;
    id _reserved;
    id _hasExternalRefCount;
    id _refs;
    id _mantissa;
}

@property (readonly) struct ? decimalValue;
@property (readonly) char * objCType;
@property (readonly) double doubleValue;

+ (NSDecimalNumber *)decimalNumberWithString:(NSString *)arg0;
+ (NSDecimalNumber *)zero;
+ (NSDecimalNumber *)decimalNumberWithDecimal:(struct ?)arg0;
+ (NSNumber *)notANumber;
+ (NSDecimalNumber *)defaultBehavior;
+ (NSDecimalNumber *)decimalNumberWithMantissa:(unsigned long long)arg0 exponent:(short)arg1 isNegative:(char)arg2;
+ (NSNumber *)minimumDecimalNumber;
+ (NSNumber *)maximumDecimalNumber;
+ (NSDecimalNumber *)one;
+ (void)setDefaultBehavior:(ATVDefaultBehavior *)arg0;
+ (NSDecimalNumber *)numberWithInt:(int)arg0;
+ (NSDecimalNumber *)numberWithBool:(char)arg0;
+ (NSDecimalNumber *)numberWithDouble:(double)arg0;
+ (NSDecimalNumber *)numberWithInteger:(int)arg0;
+ (NSDecimalNumber *)numberWithLongLong:(long long)arg0;
+ (NSDecimalNumber *)numberWithUnsignedInteger:(unsigned int)arg0;
+ (NSDecimalNumber *)allocWithZone:(struct _NSZone *)arg0;
+ (NSDecimalNumber *)numberWithUnsignedInt:(unsigned int)arg0;
+ (NSDecimalNumber *)numberWithFloat:(float)arg0;
+ (NSDecimalNumber *)numberWithChar:(char)arg0;
+ (char)supportsSecureCoding;
+ (NSDecimalNumber *)numberWithUnsignedLong:(unsigned long)arg0;
+ (NSDecimalNumber *)numberWithLong:(long)arg0;
+ (NSDecimalNumber *)numberWithUnsignedLongLong:(unsigned long long)arg0;
+ (NSDecimalNumber *)numberWithUnsignedShort:(unsigned short)arg0;
+ (NSDecimalNumber *)numberWithUnsignedChar:(unsigned char)arg0;
+ (NSDecimalNumber *)decimalNumberWithString:(NSString *)arg0 locale:(NSObject *)arg1;
+ (NSDecimalNumber *)numberWithShort:(short)arg0;

- (BOOL)_getCString:(char *)arg0 length:(int)arg1 multiplier:(double)arg2;
- (char)_allowsDirectEncoding;
- (struct ?)decimalValue;
- (id)decimalNumberByDividingBy:(id)arg0;
- (NSDecimalNumber *)initWithString:(NSString *)arg0 locale:(NSObject *)arg1;
- (NSDecimalNumber *)initWithDecimal:(struct ?)arg0;
- (NSDecimalNumber *)initWithMantissa:(unsigned long long)arg0 exponent:(short)arg1 isNegative:(char)arg2;
- (id)decimalNumberByAdding:(id)arg0 withBehavior:(CABehavior *)arg1;
- (id)decimalNumberBySubtracting:(id)arg0 withBehavior:(CABehavior *)arg1;
- (id)decimalNumberByMultiplyingBy:(id)arg0 withBehavior:(CABehavior *)arg1;
- (id)decimalNumberByDividingBy:(id)arg0 withBehavior:(CABehavior *)arg1;
- (id)decimalNumberByRaisingToPower:(unsigned int)arg0 withBehavior:(CABehavior *)arg1;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg0 withBehavior:(CABehavior *)arg1;
- (id)decimalNumberByMultiplyingBy:(id)arg0;
- (id)decimalNumberByAdding:(id)arg0;
- (id)decimalNumberBySubstracting:(id)arg0;
- (id)decimalNumberBySubstracting:(id)arg0 withBehavior:(CABehavior *)arg1;
- (id)decimalNumberBySubtracting:(id)arg0;
- (id)decimalNumberByRaisingToPower:(unsigned int)arg0;
- (id)decimalNumberByMultiplyingByPowerOf10:(short)arg0;
- (id)decimalNumberByRoundingAccordingToBehavior:(id)arg0;
- (int)intValue;
- (char)boolValue;
- (NSDecimalNumber *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSDecimalNumber *)copy;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (double)doubleValue;
- (NSDecimalNumber *)copyWithZone:(struct _NSZone *)arg0;
- (void)getValue:(void *)arg0;
- (Class)classForCoder;
- (float)floatValue;
- (NSDecimalNumber *)initWithString:(NSString *)arg0;
- (long long)longLongValue;
- (unsigned int)unsignedIntValue;
- (char *)objCType;
- (unsigned long long)unsignedLongLongValue;
- (unsigned long)unsignedLongValue;
- (long)longValue;
- (unsigned char)unsignedCharValue;
- (unsigned short)unsignedShortValue;
- (char)charValue;
- (short)shortValue;
- (NSLocale *)descriptionWithLocale:(NSObject *)arg0;

@end
