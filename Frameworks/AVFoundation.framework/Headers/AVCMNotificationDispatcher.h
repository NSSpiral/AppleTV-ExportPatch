/* Runtime dump - AVCMNotificationDispatcher
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCMNotificationDispatcher : NSObject
{
    struct opaqueCMNotificationCenter * _cmNotificationCenter;
    AVCallbackRegistry * _callbackRegistry;
    NSMutableDictionary * _listenerObjectsPassedToFig;
    NSObject<OS_dispatch_queue> * _listenerObjectsQueue;
}

@property (readonly, nonatomic) struct opaqueCMNotificationCenter * CMNotificationCenter;
@property (readonly, nonatomic) AVCallbackRegistry * callbackRegistry;

+ (AVCMNotificationDispatcher *)notificationDispatcherForCMNotificationCenter:(struct opaqueCMNotificationCenter *)arg0;
+ (void)initialize;

- (void)addListenerWithWeakReference:(AVWeakReference *)arg0 callback:(/* block */ id *)arg1 name:(struct __CFString *)arg2 object:(void *)arg3 flags:(void)arg4;
- (void)removeListenerWithWeakReference:(AVWeakReference *)arg0 callback:(/* block */ id *)arg1 name:(struct __CFString *)arg2 object:(void *)arg3;
- (AVCMNotificationDispatcher *)initWithCMNotificationCenter:(struct opaqueCMNotificationCenter *)arg0;
- (AVCallbackRegistry *)_callbackRegistry;
- (void)_addListenerAndCallback:(id /* block */)arg0 forWeakReferenceToListener:(id)arg1 callback:(/* block */ id *)arg2 name:(struct __CFString *)arg3 object:(void *)arg4;
- (struct opaqueCMNotificationCenter *)CMNotificationCenter;
- (id)_copyAndRemoveListenerAndCallbackForWeakReferenceToListener:(id)arg0 callback:(/* block */ id *)arg1 name:(struct __CFString *)arg2 object:(void *)arg3;
- (void)dealloc;
- (AVCMNotificationDispatcher *)init;
- (void)finalize;

@end
