/* Runtime dump - AVRunLoopConditionRunLoopState
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRunLoopConditionRunLoopState : NSObject
{
    struct __CFRunLoop * _runLoop;
    struct __CFRunLoopSource * _signalSource;
    char _signaled;
}

@property (readonly, nonatomic) struct __CFRunLoop * runLoop;
@property (nonatomic) struct __CFRunLoopSource * signalSource;
@property (nonatomic) char signaled;

+ (NSObject *)runLoopStateWithRunLoop:(struct __CFRunLoop *)arg0;

- (AVRunLoopConditionRunLoopState *)initWithRunLoop:(struct __CFRunLoop *)arg0;
- (struct __CFRunLoopSource *)signalSource;
- (void)setSignalSource:(struct __CFRunLoopSource *)arg0;
- (char)signaled;
- (void)setSignaled:(char)arg0;
- (void)dealloc;
- (struct __CFRunLoop *)runLoop;

@end
