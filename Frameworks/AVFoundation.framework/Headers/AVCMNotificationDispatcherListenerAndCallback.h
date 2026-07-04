/* Runtime dump - AVCMNotificationDispatcherListenerAndCallback
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCMNotificationDispatcherListenerAndCallback : NSObject
{
    AVWeakReference * _weakReferenceToListener;
    /* block */ id * _callback;
}

@property (readonly, nonatomic) id listener;
@property (readonly, nonatomic) /* block */ id * callback;

- (AVCMNotificationDispatcherListenerAndCallback *)initWithWeakReferenceToListener:(AVWeakReference *)arg0 callback:(/* block */ id *)arg1;
- (void)dealloc;
- (AVCMNotificationDispatcherListenerAndCallback *)init;
- (NSObject<OS_tcp_listener> *)listener;
- (/* block */ id *)callback;

@end
