/* Runtime dump - CAMFocusView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFocusView : UIView
{
    NSArray * _images;
    CAKeyframeAnimation * _contentsAnimation;
    CAKeyframeAnimation * _boundsAnimation;
    double _animationStartTime;
    double _lastInteractionTime;
    char _fadingOut;
    int _suspendCount;
    char _shouldFadeOut;
    char _fadeOutStarted;
    UIColor * _color;
    double _lastFadeOutTime;
}

@property (readonly, nonatomic) double lastFadeOutTime;
@property (retain, nonatomic) UIColor * color;

+ (double)minimumTimeBeforeFadeOut;

- (void)_fadeOut;
- (void)dealloc;
- (CAMFocusView *)init;
- (void)stopAnimating;
- (void)startAnimating;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (CAMFocusView *)initWithColor:(UIColor *)arg0;
- (void).cxx_destruct;
- (double)fadeOutDuration;
- (double)fadeInDuration;
- (UIImage *)nameForLightImage;
- (UIImage *)nameForDarkImage;
- (double)dimAfterInteractionDelay;
- (void)_loadImagesWithColor:(UIColor *)arg0 imageSize:(struct CGSize *)arg1;
- (void)startAnimatingContents:(char)arg0 bounds:(char)arg1 fadeIn:(char)arg2;
- (void)_cancelDelayedFadeOut;
- (void)updateLastInteractionTime;
- (NSObject *)_createContentsAnimation;
- (NSObject *)_createBoundsAnimation;
- (void)_cancelDelayedDim;
- (void)_fadeOutDidStop:(id)arg0 finished:(id /* block */)arg1 context:(void *)arg2;
- (void)resetFadeOutSuspension;
- (void)_cancelDelayedPauseContentsAnimation;
- (void)_fadeOutIfNeeded;
- (void)_pauseContentsAnimation;
- (void)_dimForInactivity;
- (char)_cancelFadeOutForSuspend;
- (void)_scheduleDelayedDim;
- (void)_animateAlpha:(float)arg0 withDuration:(double)arg1 completion:(id /* block */)arg2;
- (void)stopContentsAnimation;
- (void)setDefaultContents;
- (void)focusDidEnd;
- (void)cancelFadeOut;
- (void)suspendFadeOut;
- (void)resumeFadeOutResetPending:(char)arg0;
- (double)lastFadeOutTime;

@end
