/* Runtime dump - EKCalendarNotificationReference
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKCalendarNotificationReference : NSObject
{
    struct ? _objectID;
    NSDate * _date;
    EKEventStore * _eventStore;
    EKCalendarNotification * _notification;
    int _type;
}

@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) EKCalendarNotification * notification;

- (EKCalendarNotificationReference *)initWithType:(int)arg0 objectID:(struct ?)arg1 date:(NSDate *)arg2 eventStore:(EKEventStore *)arg3;
- (EKCalendarNotificationReference *)initWithType:(int)arg0 objectID:(struct ?)arg1 eventStore:(EKEventStore *)arg2;
- (int)_notificationTypeForResourceChange:(NSDictionary *)arg0 notificationType:(int)arg1;
- (void)dealloc;
- (NSString *)description;
- (EKCalendarNotification *)notification;
- (int)type;

@end
