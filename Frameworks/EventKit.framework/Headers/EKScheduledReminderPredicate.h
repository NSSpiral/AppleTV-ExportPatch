/* Runtime dump - EKScheduledReminderPredicate
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKScheduledReminderPredicate : EKPredicate
{
    NSDate * _day;
}

@property (retain, nonatomic) NSDate * day;

+ (EKScheduledReminderPredicate *)predicateForScheduledRemindersInCalendars:(id)arg0 onDay:(id)arg1;
+ (char)supportsSecureCoding;

- (void)dealloc;
- (EKScheduledReminderPredicate *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (EKScheduledReminderPredicate *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDay:(NSDate *)arg0;
- (NSDate *)day;

@end
