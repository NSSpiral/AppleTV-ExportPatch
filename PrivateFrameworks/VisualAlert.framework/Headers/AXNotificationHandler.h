/* Runtime dump - AXNotificationHandler
 * Image: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
 */

@interface AXNotificationHandler : NSObject
{
    NSString * _notificationName;
    id _target;
    id _dispatcher;
    unsigned int _observerIdentifier;
    char _valid;
}

@property (readonly, nonatomic) char valid;
@property (retain, nonatomic) NSString * _notificationName;
@property (retain, nonatomic) id _target;
@property (copy, nonatomic) id _dispatcher;

+ (unsigned int)_safelyRegisterObserver:(NSObject *)arg0;
+ (void)_safelyRemoveObserverForIdentifier:(unsigned int)arg0;
+ (NSString *)_safelyGetObserverForIdentifier:(unsigned int)arg0;

- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (char)isValid;
- (NSObject *)_target;
- (void)_setTarget:(NSObject *)arg0;
- (void)_startObserving;
- (AXNotificationHandler *)initWithNotificationName:(NSString *)arg0 target:(NSObject *)arg1 dispatcher:(IKDOMEventDispatcher *)arg2;
- (AXNotificationHandler *)initWithNotificationName:(NSString *)arg0 target:(NSObject *)arg1 handler:(SEL)arg2;
- (void)processHandler:(SEL)arg0;
- (AXNotificationHandler *)initWithNotificationName:(NSString *)arg0 target:(NSObject *)arg1 dispatcher:(IKDOMEventDispatcher *)arg2 startObserving:(/* block */ id)arg3;
- (void)_setNotificationName:(NSString *)arg0;
- (void)_setDispatcher:(IKDOMEventDispatcher *)arg0;
- (NSString *)_notificationTypeDescription;
- (NSString *)_notificationName;
- (void)_stopObserving;
- (id)_dispatcher;
- (void)_handleNotificationWithName:(NSString *)arg0 object:(void *)arg1 userInfo:(void)arg2;

@end
