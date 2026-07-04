/* Runtime dump - HMTimerTrigger
 * Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@interface HMTimerTrigger : HMTrigger <NSSecureCoding>
{
    NSDate * _fireDate;
    NSTimeZone * _timeZone;
    NSDateComponents * _recurrence;
    NSCalendar * _recurrenceCalendar;
}

@property (copy, nonatomic) NSDate * fireDate;
@property (copy, nonatomic) NSTimeZone * timeZone;
@property (copy, nonatomic) NSDateComponents * recurrence;
@property (copy, nonatomic) NSCalendar * recurrenceCalendar;

+ (char)supportsSecureCoding;

- (id)_serializeForAdd;
- (void)_registerNotificationHandlers;
- (void)_handleTriggerFired:(id)arg0;
- (void)_updateFireDate:(NSDate *)arg0 completionHandler:(id /* block */)arg1;
- (void)_updateTimeZone:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)_updateRecurrence:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)_handleScheduleChangedNotification:(NSNotification *)arg0;
- (HMTimerTrigger *)initWithName:(NSString *)arg0 fireDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 recurrence:(NSDateComponents *)arg3 recurrenceCalendar:(NSCalendar *)arg4;
- (void)updateFireDate:(NSDate *)arg0 completionHandler:(id /* block */)arg1;
- (void)updateTimeZone:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)updateRecurrence:(id)arg0 completionHandler:(id /* block */)arg1;
- (NSCalendar *)recurrenceCalendar;
- (void)setRecurrenceCalendar:(NSCalendar *)arg0;
- (void)dealloc;
- (HMTimerTrigger *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (HMTimerTrigger *)init;
- (void)setFireDate:(NSDate *)arg0;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (NSTimeZone *)timeZone;
- (void).cxx_destruct;
- (NSDate *)fireDate;
- (void)setRecurrence:(NSDateComponents *)arg0;
- (NSDateComponents *)recurrence;
- (char)_mergeWithNewObject:(char)arg0 operations:(HMObjectMergeOperations *)arg1;

@end
