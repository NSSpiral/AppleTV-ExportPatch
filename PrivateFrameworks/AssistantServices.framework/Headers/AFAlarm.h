/* Runtime dump - AFAlarm
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFAlarm : AFSiriModelObject <NSCopying>
{
    char _enabled;
    int _daysOfWeek;
    int _hourOfDay;
    int _minuteOfHour;
    NSString * _label;
}

@property (nonatomic) char enabled;
@property (nonatomic) int daysOfWeek;
@property (nonatomic) int hourOfDay;
@property (nonatomic) int minuteOfHour;
@property (copy, nonatomic) NSString * label;

+ (char)supportsSecureCoding;

- (int)hourOfDay;
- (int)minuteOfHour;
- (AFAlarm *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (AFAlarm *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;
- (int)daysOfWeek;
- (void)setDaysOfWeek:(int)arg0;
- (void)setHourOfDay:(int)arg0;
- (void)setMinuteOfHour:(int)arg0;

@end
