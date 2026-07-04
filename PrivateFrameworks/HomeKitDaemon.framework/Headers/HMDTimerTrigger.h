/* Runtime dump - HMDTimerTrigger
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDTimerTrigger : HMDTrigger
{
    NSDate * _fireDate;
    NSTimeZone * _fireDateTimeZone;
    NSDateComponents * _fireRepeatInterval;
    NSString * _timerID;
    NSDate * _currentFireDate;
    NSTimer * _timer;
}

@property (copy, nonatomic) NSDate * fireDate;
@property (copy, nonatomic) NSTimeZone * fireDateTimeZone;
@property (copy, nonatomic) NSDateComponents * fireRepeatInterval;
@property (retain, nonatomic) NSString * timerID;
@property (retain, nonatomic) NSDate * currentFireDate;
@property (retain, nonatomic) NSTimer * timer;

+ (char)supportsSecureCoding;
+ (NSDate *)validateWholeMinuteDate:(NSDate *)arg0 onCalendar:(NSObject *)arg1;

- (void)dealloc;
- (HMDTimerTrigger *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)invalidate;
- (void)setFireDate:(NSDate *)arg0;
- (void).cxx_destruct;
- (NSDate *)fireDate;
- (void)_stopTimer;
- (void)setTimer:(NSTimer *)arg0;
- (NSTimer *)timer;
- (void)activate:(char)arg0 completionHandler:(id /* block */)arg1;
- (void)_registerForMessages;
- (void)configure:(id)arg0 messageDispatcher:(HMDIDSMessageDispatcher *)arg1 queue:(NSObject *)arg2;
- (void)completeConfiguration;
- (NSString *)timerID;
- (void)timerTriggered;
- (HMDTimerTrigger *)initWithName:(NSString *)arg0 fireDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 recurrence:(SAReminderRecurrence *)arg3;
- (id)validateRecurrence:(id)arg0;
- (void)setTimerID:(NSString *)arg0;
- (NSTimeZone *)fireDateTimeZone;
- (void)_timerTriggered;
- (NSObject *)getCalendar;
- (NSDate *)currentFireDate;
- (NSDateComponents *)fireRepeatInterval;
- (void)setCurrentFireDate:(NSDate *)arg0;
- (void)_handleUpdateTimerTriggerPropertiesRequest:(NSURLRequest *)arg0;
- (void)setFireDateTimeZone:(NSTimeZone *)arg0;
- (void)setFireRepeatInterval:(NSDateComponents *)arg0;
- (NSDate *)_nextFireDate;
- (void)_startTimerWithFireDate:(NSDate *)arg0;
- (void)_closestDatesForStartDate:(NSDate *)arg0 earliestDate:(NSDate *)arg1 timeZone:(NSTimeZone *)arg2 deliveryRepeatInterval:(id)arg3 returnDateBefore:(id *)arg4 returnDateAfter:(id *)arg5;
- (void)nsTimerTriggered:(id)arg0;

@end
