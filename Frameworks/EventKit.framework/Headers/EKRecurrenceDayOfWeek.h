/* Runtime dump - EKRecurrenceDayOfWeek
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKRecurrenceDayOfWeek : NSObject <NSCopying>
{
    int _dayOfTheWeek;
    int _weekNumber;
}

@property (readonly, nonatomic) int dayOfTheWeek;
@property (readonly, nonatomic) int weekNumber;

+ (EKRecurrenceDayOfWeek *)dayOfWeek:(int)arg0;
+ (EKRecurrenceDayOfWeek *)dayOfWeek:(int)arg0 weekNumber:(int)arg1;

- (NSString *)iCalendarDescription;
- (id)iCalendarValueFromDayOfTheWeek:(unsigned int)arg0;
- (EKRecurrenceDayOfWeek *)initWithDayOfTheWeek:(int)arg0 weekNumber:(int)arg1;
- (int)dayOfTheWeek;
- (int)weekNumber;
- (EKRecurrenceDayOfWeek *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (EKRecurrenceDayOfWeek *)copyWithZone:(struct _NSZone *)arg0;

@end
