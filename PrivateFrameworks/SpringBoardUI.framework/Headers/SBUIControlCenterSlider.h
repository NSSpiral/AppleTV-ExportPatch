/* Runtime dump - SBUIControlCenterSlider
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBUIControlCenterSlider : _UIDynamicSlider <_UISettingsKeyObserver, SBUIControlCenterControl>
{
    float _valueImagePadding;
    char _customTrackImage;
    UIVisualEffectView * _highlightEffectView;
    char _highlightMinimumTrackImage;
    char _shouldHighlightValueImagesWhileAdjusting;
    char _adjusting;
    UIImage * _minValueMaskImage;
    UIImage * _maxValueMaskImage;
    UIImage * _trackMaskImage;
    struct UIEdgeInsets _trackCapInsets;
}

@property (nonatomic) char highlightMinimumTrackImage;
@property (nonatomic) char shouldHighlightValueImagesWhileAdjusting;
@property (nonatomic) char adjusting;
@property (retain) UIImage * minValueMaskImage;
@property (retain) UIImage * maxValueMaskImage;
@property (retain) UIImage * trackMaskImage;
@property struct UIEdgeInsets trackCapInsets;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;
+ (void)controlAppearanceDidChangeForState:(int)arg0;
+ (UIImage *)_trackImage;
+ (NSObject *)_createTrackImageForState:(int)arg0;
+ (NSObject *)_minTrackImageForState:(int)arg0;
+ (UIImage *)_maxTrackImage;
+ (UIImage *)_knobImage;

- (void)_updateEffects;
- (SBUIControlCenterSlider *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)beginTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (void)endTrackingWithTouch:(UITouch *)arg0 withEvent:(Event *)arg1;
- (struct CGRect)trackRectForBounds:(id)arg0;
- (struct CGRect)minimumValueImageRectForBounds:(id)arg0;
- (struct CGRect)maximumValueImageRectForBounds:(id)arg0;
- (void)setMinimumValueImage:(UIImage *)arg0;
- (void)setMaximumValueImage:(UIImage *)arg0;
- (void)settings:(_UISettings *)arg0 changedValueForKey:(NSString *)arg1;
- (void)setTrackImage:(UIImage *)arg0;
- (UIImage *)trackMaskImage;
- (void)controlAppearanceDidChangeForState:(int)arg0;
- (void)controlConfigurationDidChangeForState:(int)arg0;
- (void)setTrackMaskImage:(UIImage *)arg0;
- (void)setMinValueMaskImage:(UIImage *)arg0;
- (void)setMaxValueMaskImage:(UIImage *)arg0;
- (UIImage *)minValueMaskImage;
- (UIImage *)_valueImageForImage:(UIImage *)arg0 state:(int)arg1;
- (UIImage *)maxValueMaskImage;
- (void)setAdjusting:(char)arg0;
- (char)shouldHighlightValueImagesWhileAdjusting;
- (void)_updateValueImageView:(NSObject *)arg0 fadeToImage:(UIImage *)arg1;
- (struct UIEdgeInsets)trackCapInsets;
- (void)_updateMinimumTrackImage;
- (void)_setTrackImage:(UIImage *)arg0;
- (void)setTrackCapInsets:(struct UIEdgeInsets)arg0;
- (void)_updateMaximumTrackImage;
- (void)_updateMinimumValueImage;
- (void)_updateMaximumValueImage;
- (float)_valueImageCenterTrackOffset;
- (float)_naturalTrackWidth;
- (float)_valueImagePadding;
- (void)_configureControlStates;
- (char)highlightMinimumTrackImage;
- (void)setHighlightMinimumTrackImage:(char)arg0;
- (void)setShouldHighlightValueImagesWhileAdjusting:(char)arg0;
- (char)isAdjusting;

@end
