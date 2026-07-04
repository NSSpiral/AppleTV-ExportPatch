/* Runtime dump - AVCMNotificationDispatcherListenerKey
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCMNotificationDispatcherListenerKey : NSObject <NSCopying>
{
    AVWeakReference * _weakReferenceToListener;
    /* block */ id * _callback;
    NSString * _name;
    void * _object;
}

+ (AVCMNotificationDispatcherListenerKey *)listenerKeyWithWeakReferenceToListener:(AVWeakReference *)arg0 callback:(/* block */ id *)arg1 name:(NSString *)arg2 object:(void *)arg3;

- (AVCMNotificationDispatcherListenerKey *)initWithWeakReferenceToListener:(AVWeakReference *)arg0 callback:(/* block */ id *)arg1 name:(NSString *)arg2 object:(void *)arg3;
- (void)dealloc;
- (AVCMNotificationDispatcherListenerKey *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (AVCMNotificationDispatcherListenerKey *)copyWithZone:(struct _NSZone *)arg0;

@end
