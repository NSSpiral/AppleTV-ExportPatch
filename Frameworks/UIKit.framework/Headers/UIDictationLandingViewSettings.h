/* Runtime dump - UIDictationLandingViewSettings
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIDictationLandingViewSettings : NSObject
{
    char _useBlackWave;
    float _fadeInDuration;
    float _fadeOutDuration;
    float _shrinkDuration;
    float _colorTransitionInDuration;
    float _colorTransitionOutDuration;
    float _circleRPM;
}

@property (nonatomic) float fadeInDuration;
@property (nonatomic) float fadeOutDuration;
@property (nonatomic) float shrinkDuration;
@property (nonatomic) float colorTransitionInDuration;
@property (nonatomic) float colorTransitionOutDuration;
@property (nonatomic) float circleRPM;
@property (nonatomic) char useBlackWave;

+ (UIDictationLandingViewSettings *)sharedInstance;

- (UIDictationLandingViewSettings *)init;
- (float)fadeOutDuration;
- (float)colorTransitionInDuration;
- (float)colorTransitionOutDuration;
- (char)useBlackWave;
- (void)setUseBlackWave:(char)arg0;
- (void)setFadeInDuration:(float)arg0;
- (void)setFadeOutDuration:(float)arg0;
- (void)setShrinkDuration:(float)arg0;
- (void)setColorTransitionInDuration:(float)arg0;
- (void)setColorTransitionOutDuration:(float)arg0;
- (void)setCircleRPM:(float)arg0;
- (float)fadeInDuration;
- (float)shrinkDuration;
- (float)circleRPM;

@end
