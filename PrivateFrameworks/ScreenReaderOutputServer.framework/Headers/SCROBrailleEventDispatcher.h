/* Runtime dump - SCROBrailleEventDispatcher
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@interface SCROBrailleEventDispatcher : NSObject
{
    NSLock * _queueLock;
    struct __CFRunLoop * _runLoop;
    struct __CFRunLoopSource * _queueSource;
    struct __CFArray * _queue;
    NSMutableArray * _brailleEventQueue;
    id _target;
    char _isValid;
}

- (void)dealloc;
- (void)invalidate;
- (char)isValid;
- (SCROBrailleEventDispatcher *)initWithTarget:(NSObject *)arg0;
- (void)start;
- (void)_processQueue;
- (void)enqueueEvent:(NSObject *)arg0;

@end
