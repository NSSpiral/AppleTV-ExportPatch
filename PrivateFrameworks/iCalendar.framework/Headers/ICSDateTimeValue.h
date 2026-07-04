/* Runtime dump - ICSDateTimeValue
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSDateTimeValue : ICSDateValue <NSCoding>
{
    int _hour;
    int _minute;
    int _second;
}

@property (readonly) int hour;
@property (readonly) int minute;
@property (readonly) int second;

- (ICSDateTimeValue *)initWithYear:(int)arg0 month:(int)arg1 day:(int)arg2 hour:(int)arg3 minute:(int)arg4 second:(int)arg5;
- (ICSDateTimeValue *)initWithYear:(int)arg0 month:(int)arg1 day:(int)arg2;
- (ICSDateTimeValue *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (int)hour;
- (int)minute;
- (int)second;
- (NSArray *)components;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (int)dateType;

@end
