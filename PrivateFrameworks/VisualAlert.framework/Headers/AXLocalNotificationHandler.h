/* Runtime dump - AXLocalNotificationHandler
 * Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXLocalNotificationHandler : AXNotificationHandler
{
    id _opaqueObserver;
}

@property (retain, nonatomic) id _opaqueObserver;

- (void)_startObserving;
- (NSString *)_notificationTypeDescription;
- (void)_stopObserving;
- (void)_setOpaqueObserver:(NSObject *)arg0;
- (NSObject *)_opaqueObserver;
- (void)_startObservingWithObject:(NSObject *)arg0;
- (void)_stopObservingWithObject:(NSObject *)arg0;

@end
