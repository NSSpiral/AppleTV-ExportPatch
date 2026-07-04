/* Runtime dump - AXAutoForwardingLocalNotificationHandler
 * Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler
{
    SEL * _possibleHandlers;
    unsigned long _possibleHandlersCount;
}

- (void)dealloc;
- (void)_startObserving;
- (AXAutoForwardingLocalNotificationHandler *)initWithNotificationName:(NSString *)arg0 target:(NSObject *)arg1 handler:(SEL)arg2;
- (AXAutoForwardingLocalNotificationHandler *)initWithNotificationName:(NSString *)arg0 target:(NSObject *)arg1 dispatcher:(IKDOMEventDispatcher *)arg2 possibleHandlers:(/* block */ id)arg3;
- (void)processHandler:(SEL)arg0;
- (AXAutoForwardingLocalNotificationHandler *)initWithNotificationName:(NSString *)arg0 target:(NSObject *)arg1 dispatcher:(IKDOMEventDispatcher *)arg2 startObserving:(/* block */ id)arg3;
- (NSString *)_notificationTypeDescription;
- (void)_stopObserving;
- (id)_forwardDistributedNotificationNameForHandler:(SEL)arg0;
- (NSString *)_prefixForForwardDistributedNotificationName;
- (char)_handleForwardDistributedNotificationWithName:(NSString *)arg0 object:(void *)arg1 userInfo:(void)arg2;

@end
