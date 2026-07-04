/* Runtime dump - VKTimer
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKTimer : NSObject
{
    NSObject<OS_dispatch_source> * _source;
    double _nextFireDate;
}

@property (readonly, nonatomic) double nextFireDate;

- (void)dealloc;
- (void)invalidate;
- (VKTimer *)initWithTarget:(NSObject *)arg0 selector:(SEL)arg1 queue:(NSObject *)arg2;
- (double)nextFireDate;
- (void)fireAfter:(double)arg0;
- (void)disable;

@end
