/* Runtime dump - MPUserNotification
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPUserNotification : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSObject<OS_dispatch_queue> * _callbackInvocationQueue;
    id _willShowNotificationHandler;
    id strongSelf;
    char _isShowing;
    struct __CFRunLoopSource * _runLoopSource;
    NSMutableArray * _showingCompletionHandlers;
    struct __CFUserNotification * _cfUserNotification;
}

@property (readonly, nonatomic) struct __CFUserNotification * cfUserNotification;
@property (copy, nonatomic) id willShowNotificationHandler;

+ (void)_setUserNotification:(NSNotification *)arg0 forCFUserNotification:(struct __CFUserNotification *)arg1;
+ (NSOperationQueue *)_userNotificationConversionAccessQueue;
+ (NSNotification *)_userNotificationForCFUserNotification:(struct __CFUserNotification *)arg0;

- (MPUserNotification *)initWithCFUserNotification:(struct __CFUserNotification *)arg0;
- (void)_cancelSynchronously:(char)arg0;
- (id /* block */)willShowNotificationHandler;
- (void)setWillShowNotificationHandler:(id /* block */)arg0;
- (void)showWithCompletionHandler:(id /* block */)arg0;
- (void)_didReceiveResponseWithFlags:(unsigned long)arg0;
- (struct __CFUserNotification *)cfUserNotification;
- (void)cancel;
- (void)dealloc;
- (MPUserNotification *)init;
- (void).cxx_destruct;

@end
