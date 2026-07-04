/* Runtime dump - CAMShutterButton
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMShutterButton : UIButton
{
    char _pulsing;
    char _spinning;
    char _showDisabled;
    int _mode;
    UIView * __outerView;
    UIImageView * __outerImageView;
    CAMTimelapseShutterRingView * __timelapseOuterView;
    UIView * __innerView;
    UIActivityIndicatorView * __progressActivityIndicatorView;
    struct CAMShutterButtonSpec _spec;
}

@property (nonatomic) int mode;
@property (nonatomic) struct CAMShutterButtonSpec spec;
@property (nonatomic) char pulsing;
@property (nonatomic) char spinning;
@property (nonatomic) char showDisabled;
@property (readonly, nonatomic) UIView * _outerView;
@property (readonly, nonatomic) UIImageView * _outerImageView;
@property (readonly, nonatomic) CAMTimelapseShutterRingView * _timelapseOuterView;
@property (readonly, nonatomic) UIView * _innerView;
@property (readonly, nonatomic) UIActivityIndicatorView * _progressActivityIndicatorView;

+ (CAMShutterButton *)shutterButton;
+ (CAMShutterButton *)smallShutterButton;
+ (CAMShutterButton *)tinyShutterButton;
+ (NSObject *)shutterButtonWithSpec:(struct CAMShutterButtonSpec)arg0;

- (CAMShutterButton *)initWithFrame:(struct CGRect)arg0;
- (CAMShutterButton *)initWithCoder:(NSCoder *)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (struct CGSize)intrinsicContentSize;
- (void)setHighlighted:(char)arg0;
- (void)setMode:(int)arg0;
- (int)mode;
- (void)setSpinning:(char)arg0;
- (void).cxx_destruct;
- (struct CAMShutterButtonSpec)spec;
- (void)_setSpec:(struct CAMShutterButtonSpec)arg0;
- (void)_updateOuterAndInnerLayers;
- (void)_commonCAMShutterButtonInitialization;
- (struct CGSize)_sizeForMode:(int)arg0;
- (float)_cornerRadiusForMode:(int)arg0;
- (void)_performHighlightAnimation;
- (void)setMode:(int)arg0 animated:(char)arg1;
- (void)_performModeSwitchAnimationFromMode:(int)arg0 toMode:(int)arg1 animated:(char)arg2;
- (void)_updateSpinningAnimations;
- (float)_innerCircleDiameter;
- (char)_shouldUseImageViewForMode:(int)arg0;
- (id)_outerImageForMode:(int)arg0;
- (char)_shouldUseTimelapseOuterViewForMode:(int)arg0;
- (UIView *)_outerView;
- (float)_borderWidthForMode:(int)arg0;
- (UIView *)_innerView;
- (UIColor *)_colorForMode:(int)arg0;
- (UIImageView *)_outerImageView;
- (CAMTimelapseShutterRingView *)_timelapseOuterView;
- (char)_isStopMode:(int)arg0;
- (void)setPulsing:(char)arg0;
- (void)setShowDisabled:(char)arg0;
- (char)isPulsing;
- (char)isSpinning;
- (char)showDisabled;
- (UIActivityIndicatorView *)_progressActivityIndicatorView;

@end
