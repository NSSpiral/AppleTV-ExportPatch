/* Runtime dump - PCScheduleSystemWakeOperation
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCScheduleSystemWakeOperation : NSOperation
{
    char _scheduleOrCancel;
    NSDate * _wakeDate;
    NSString * _serviceIdentifier;
    void * _unqiueIdentifier;
}

- (void)dealloc;
- (void)main;
- (PCScheduleSystemWakeOperation *)initForScheduledWake:(char)arg0 wakeDate:(NSDate *)arg1 serviceIdentifier:(NSString *)arg2 uniqueIdentifier:(void *)arg3;

@end
