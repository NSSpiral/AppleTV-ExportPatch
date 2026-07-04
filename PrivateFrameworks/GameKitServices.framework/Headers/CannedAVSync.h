/* Runtime dump - CannedAVSync
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface CannedAVSync : NSObject
{
    double _base;
    double _modulo;
}

@property (nonatomic) double base;
@property (nonatomic) double modulo;

+ (CannedAVSync *)sharedCannedAVSync;

- (CannedAVSync *)init;
- (void)clear;
- (double)base;
- (void)setBase:(double)arg0;
- (double)clampForTime:(double)arg0;
- (void)addDrift:(double)arg0;
- (void)addStreamWithCount:(int)arg0 rate:(double)arg1;
- (double)modulo;
- (void)setModulo:(double)arg0;

@end
