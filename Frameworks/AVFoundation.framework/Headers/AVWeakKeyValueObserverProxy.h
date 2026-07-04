/* Runtime dump - AVWeakKeyValueObserverProxy
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVWeakKeyValueObserverProxy : NSObject
{
    AVWeakReference * _weakReferenceToObserver;
}

- (AVWeakKeyValueObserverProxy *)initWithWeakReferenceToObserver:(AVWeakReference *)arg0;
- (void)dealloc;
- (AVWeakKeyValueObserverProxy *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;

@end
