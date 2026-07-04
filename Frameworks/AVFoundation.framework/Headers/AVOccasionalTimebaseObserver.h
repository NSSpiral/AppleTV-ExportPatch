/* Runtime dump - AVOccasionalTimebaseObserver
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOccasionalTimebaseObserver : AVTimebaseObserver
{
    NSArray * _times;
    id _block;
}

- (AVOccasionalTimebaseObserver *)initWithTimebase:(struct OpaqueCMTimebase *)arg0 times:(NSArray *)arg1 queue:(NSObject *)arg2 block:(id /* block */)arg3;
- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (void)_fireBlock;
- (struct ?)_nextFiringTimeAfterTime:(struct ?)arg0;
- (struct ?)_previousFiringTimeBeforeTime:(struct ?)arg0;
- (void)dealloc;

@end
