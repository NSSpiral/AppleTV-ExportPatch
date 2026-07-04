/* Runtime dump - AXDistributedNotificationHandler
 * Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXDistributedNotificationHandler : AXNotificationHandler

+ (void)postDistributedNotificationWithName:(NSString *)arg0;

- (void)_startObserving;
- (NSString *)_notificationTypeDescription;
- (void)_stopObserving;

@end
