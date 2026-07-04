/* Runtime dump - ISDelayedInvocationRecorder
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDelayedInvocationRecorder : ISInvocationRecorder
{
    double _delayInterval;
}

@property (nonatomic) double delayInterval;

- (void)setDelayInterval:(double)arg0;
- (void)invokeInvocation:(NSObject *)arg0;
- (double)delayInterval;

@end
