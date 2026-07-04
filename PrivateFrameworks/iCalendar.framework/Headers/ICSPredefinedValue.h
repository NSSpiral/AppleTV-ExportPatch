/* Runtime dump - ICSPredefinedValue
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSPredefinedValue : NSNumber
{
    long _value;
}

+ (ICSPredefinedValue *)numberWithLong:(long)arg0;

- (ICSPredefinedValue *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)getValue:(void *)arg0;
- (Class)classForCoder;
- (ICSPredefinedValue *)initWithLong:(long)arg0;
- (char *)objCType;
- (long)longValue;
- (ICSPredefinedValue *)initWithBytes:(void *)arg0 objCType:(void)arg1;

@end
