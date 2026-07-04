/* Runtime dump - UIDictationMeterView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationMeterView : UIButton
{
    UIImageView * _background;
    UIImageView * _overlay;
    NSMutableArray * _micListeningImages;
    CALayer * _micImageLayer;
    CALayer * _animatingLayer;
    NSTimer * _fillTimer;
    int _phase;
    int _state;
    id _runningPowerLevels;
    unsigned int _powerPointer;
    CADisplayLink * _displayLink;
    double _releaseStart;
    float _releaseLevel;
    int _cachedViewMode;
}

- (UIDictationMeterView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setState:(int)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)_reset;
- (UIImage *)_emptyMicImage;
- (void)_startListening;
- (void)_startAttack;
- (void)_clearDisplayLink;
- (void)_removeAnimationsAndClearLayers;
- (float)_updateMedianWithNewValue:(float)arg0;
- (float)_powerLevelForMicPower:(float)arg0;
- (double)_animationInterval;
- (UIImage *)imageForMicLevel:(float)arg0;
- (float)_adjustedDuration:(float)arg0;
- (id)_keyframeAnimationForCGImages:(id)arg0 duration:(double)arg1;
- (NSObject *)_attackKeyFrameAnimation;
- (NSObject *)_decayKeyFrameAnimation;
- (NSObject *)_sustainKeyFrameAnimation;
- (float)_currentMicPowerLevel;
- (void)_resetRunningPowerLevels;
- (void)_updateReleaseAnimation:(NSObject *)arg0;
- (void)_updateListeningAnimation:(NSObject *)arg0;
- (void)_startDecay;
- (void)_startSustain;
- (void)_startRelease;

@end
