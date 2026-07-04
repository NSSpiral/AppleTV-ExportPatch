/* Runtime dump - NEUserNotification
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEUserNotification : NSObject
{
    char _isBanner;
    struct __CFUserNotification * _notification;
    struct __CFRunLoopSource * _notificationSource;
    NSObject<OS_dispatch_queue> * _callbackQueue;
    id _callback;
}

@property char isBanner;
@property struct __CFUserNotification * notification;
@property struct __CFRunLoopSource * notificationSource;
@property (retain) NSObject<OS_dispatch_queue> * callbackQueue;
@property (copy, nonatomic) id callback;

- (void)setIsBanner:(char)arg0;
- (char)isBanner;
- (NEUserNotification *)initBannerWithHeader:(NSString *)arg0 message:(NSString *)arg1 disagreeMessage:(NSString *)arg2;
- (NEUserNotification *)initAuthenticationWithHeader:(NSString *)arg0 options:(NSDictionary *)arg1 flags:(unsigned int)arg2;
- (char)postNotificationWithCallbackQueue:(NSObject<OS_dispatch_queue> *)arg0 callbackHandler:(id /* block */)arg1;
- (void)cancel;
- (void)dealloc;
- (struct __CFUserNotification *)notification;
- (void).cxx_destruct;
- (void)setNotificationSource:(struct __CFRunLoopSource *)arg0;
- (struct __CFRunLoopSource *)notificationSource;
- (NSObject<OS_dispatch_queue> *)callbackQueue;
- (void)setCallbackQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setNotification:(struct __CFUserNotification *)arg0;
- (id /* block */)callback;
- (void)setCallback:(id /* block */)arg0;

@end
