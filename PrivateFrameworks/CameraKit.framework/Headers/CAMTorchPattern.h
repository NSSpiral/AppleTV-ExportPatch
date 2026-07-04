/* Runtime dump - CAMTorchPattern
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTorchPattern : NSObject
{
    float _torchLevel;
    int __type;
    CAAnimationGroup * __animationGroup;
    double _startTime;
    double __lastUpdateTime;
}

@property (readonly, nonatomic) float torchLevel;
@property (nonatomic) double startTime;
@property (readonly, nonatomic) int _type;
@property (readonly, nonatomic) CAAnimationGroup * _animationGroup;
@property (readonly, nonatomic) double _lastUpdateTime;

- (float)torchLevel;
- (void)updateAtTime:(double)arg0;
- (CAMTorchPattern *)init;
- (void)setStartTime:(double)arg0;
- (CAMTorchPattern *)initWithType:(int)arg0;
- (int)_type;
- (void).cxx_destruct;
- (double)startTime;
- (void)_updateAnimationGroup;
- (id)_patternAnimationWithBeginTime:(double)arg0 duration:(double)arg1 repeatCount:(int)arg2;
- (id)_blinkAnimationWithBeginTime:(double)arg0 duration:(double)arg1 repeatCount:(int)arg2;
- (NSObject *)_shortPatternAnimationGroup;
- (NSObject *)_longPatternAnimationGroup;
- (NSObject *)_blinkAnimationGroup;
- (NSObject *)_doubleBlinkAnimationGroup;
- (CAAnimationGroup *)_animationGroup;
- (double)_lastUpdateTime;

@end
