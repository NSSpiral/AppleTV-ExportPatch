/* Runtime dump - UIHandleLocalNotificationAction
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIHandleLocalNotificationAction : BSAction
{
    NSObject<OS_dispatch_semaphore> * _decodeSemaphore;
    UILocalNotification * _cachedNotification;
}

@property (readonly, copy, nonatomic) UILocalNotification * notification;
@property (readonly, copy, nonatomic) NSString * action;

- (void)dealloc;
- (int)UIActionType;
- (UILocalNotification *)notification;
- (NSString *)action;
- (UIHandleLocalNotificationAction *)initWithInfo:(NSDictionary *)arg0 timeout:(double)arg1 forResponseOnQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (NSString *)keyDescriptionForSetting:(unsigned int)arg0;
- (NSString *)valueDescriptionForFlag:(int)arg0 object:(NSObject *)arg1 ofSetting:(unsigned int)arg2;
- (UIHandleLocalNotificationAction *)initWithNotification:(UILocalNotification *)arg0 withHandler:(id /* block */)arg1;
- (NSNotification *)_initWithNotification:(UILocalNotification *)arg0 action:(NSString *)arg1 type:(int)arg2 withHandler:(id /* block */)arg3;
- (UIHandleLocalNotificationAction *)initWithNotification:(UILocalNotification *)arg0;
- (UIHandleLocalNotificationAction *)initWithXPCDictionary:(NSDictionary *)arg0;
- (UIHandleLocalNotificationAction *)initWithNotification:(UILocalNotification *)arg0 action:(NSString *)arg1 withHandler:(id /* block */)arg2;

@end
