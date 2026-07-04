/* Runtime dump - MPWeakTimer
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPWeakTimer : NSObject
{
    NSObject<OS_dispatch_source> * _timerSource;
}

+ (MPWeakTimer *)timerWithInterval:(double)arg0 repeats:(char)arg1 block:(id /* block */)arg2;
+ (MPWeakTimer *)timerWithInterval:(double)arg0 repeats:(char)arg1 queue:(NSObject *)arg2 block:(id /* block */)arg3;
+ (MPWeakTimer *)timerWithInterval:(double)arg0 block:(id /* block */)arg1;
+ (MPWeakTimer *)timerWithInterval:(double)arg0 queue:(NSObject *)arg1 block:(id /* block */)arg2;

- (MPWeakTimer *)initWithInterval:(double)arg0 queue:(NSObject *)arg1 block:(id /* block */)arg2;
- (MPWeakTimer *)initWithInterval:(double)arg0 repeats:(char)arg1 queue:(NSObject *)arg2 block:(id /* block */)arg3;
- (void)dealloc;
- (void)invalidate;
- (void).cxx_destruct;

@end
