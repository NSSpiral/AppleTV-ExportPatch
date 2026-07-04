/* Runtime dump - ATVHIDThread
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface ATVHIDThread : BRSingleton
{
    NSThread * _hidThread;
    struct __CFRunLoop * _runLoop;
    NSConditionLock * _startLock;
    struct __CFRunLoopSource * _invocationRunLoopSource;
    NSInvocation * _pendingInvocation;
    NSConditionLock * _invocationLock;
}

+ (ATVHIDThread *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)_hidThreadLoop;
- (char)invokeOnHIDThread:(NSObject *)arg0;
- (void)_invocationHandler;
- (void)dealloc;
- (ATVHIDThread *)init;

@end
