/* Runtime dump - AVOnceTimebaseObserver
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVOnceTimebaseObserver : AVTimebaseObserver
{
    struct ? _fireTime;
    id _block;
    char _didFire;
}

@property (readonly, nonatomic) char didFire;

- (void)_effectiveRateChanged;
- (void)_resetNextFireTime;
- (void)_handleTimeDiscontinuity;
- (void)_fireBlock;
- (AVOnceTimebaseObserver *)initWithTimebase:(struct OpaqueCMTimebase *)arg0 fireTime:(struct ?)arg1 queue:(NSObject *)arg2 block:(id /* block */)arg3;
- (char)didFire;
- (void)dealloc;
- (void)invalidate;

@end
