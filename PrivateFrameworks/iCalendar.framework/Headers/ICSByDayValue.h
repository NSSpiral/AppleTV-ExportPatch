/* Runtime dump - ICSByDayValue
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSByDayValue : NSObject <NSCoding>
{
    NSNumber * _number;
    int _weekday;
}

@property int weekday;
@property (retain, nonatomic) NSNumber * number;

+ (int)weekdayFromICSString:(NSString *)arg0;
+ (NSString *)byDayValueFromICSString:(NSString *)arg0;

- (ICSByDayValue *)initWithWeekday:(int)arg0 number:(NSNumber *)arg1;
- (ICSByDayValue *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (int)compare:(NSObject *)arg0;
- (int)weekday;
- (void)setWeekday:(int)arg0;
- (void)setNumber:(NSNumber *)arg0;
- (NSNumber *)number;
- (void)_ICSStringWithOptions:(unsigned int)arg0 appendingToString:(NSString *)arg1;
- (ICSByDayValue *)initWithWeekday:(int)arg0;

@end
