/* Runtime dump - UISwitch
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISwitch : UIControl <UIGestureRecognizerDelegate, NSCoding>
{
    UILongPressGestureRecognizer * _pressGesture;
    UIPanGestureRecognizer * _panGesture;
    UIView<_UISwitchInternalViewProtocol> * _control;
    char _onStateChangedByLongPressGestureRecognizer;
    char _onStateChangedByPanGestureRecognizer;
    char _on;
    float _enabledAlpha;
}

@property (retain, nonatomic) UIColor * onColor;
@property (nonatomic) char alwaysShowOnOffLabel;
@property (retain, nonatomic) UIColor * onTintColor;
@property (retain, nonatomic) UIColor * tintColor;
@property (retain, nonatomic) UIColor * thumbTintColor;
@property (retain, nonatomic) UIImage * onImage;
@property (retain, nonatomic) UIImage * offImage;
@property (nonatomic) char on;
@property (nonatomic) float enabledAlpha;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (Class)_internalViewClass;

- (UISwitch *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (UISwitch *)initWithCoder:(NSCoder *)arg0;
- (void)_populateArchivedSubviews:(NSMutableArray *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)setAlpha:(float)arg0;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg0;
- (UISwitch *)init;
- (void)setFrame:(struct CGRect)arg0;
- (char)_contentHuggingDefault_isUsuallyFixedHeight;
- (char)_contentHuggingDefault_isUsuallyFixedWidth;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setEnabled:(char)arg0;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)_encodeFrameWithCoder:(NSCoder *)arg0;
- (UIColor *)tintColor;
- (void)setTintColor:(UIColor *)arg0;
- (NSDictionary *)_scriptingInfo;
- (char)_gestureRecognizer:(NSObject *)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(ADTapGestureRecognizer *)arg1;
- (void)setThumbTintColor:(UIColor *)arg0;
- (UIColor *)thumbTintColor;
- (void)_setOnTintColor:(UIColor *)arg0;
- (void)_onAnimationDidStop:(id)arg0 finished:(id /* block */)arg1 context:(void *)arg2;
- (UIColor *)onTintColor;
- (void)setOnTintColor:(UIColor *)arg0;
- (UIImage *)onImage;
- (void)setOnImage:(UIImage *)arg0;
- (UIImage *)offImage;
- (void)setOffImage:(UIImage *)arg0;
- (void)setOn:(char)arg0;
- (UIColor *)_onTintColor;
- (void)setEnabledAlpha:(float)arg0;
- (void)_handlePanNL:(id)arg0;
- (void)_handleTapNL:(id)arg0;
- (void)_handleLongPressNL:(id)arg0;
- (char)_handleTranslationInPanGestureRecognizer:(NSObject *)arg0;
- (void)_animateToOn:(char)arg0 withDuration:(float)arg1 sendAction:(char)arg2;
- (char)_useOldSize;
- (void)_commonInitNewLook;
- (void)_commonInitNewLookNeue1;
- (char)_shouldAlterCodedFrame;
- (char)isOn;
- (void)setOn:(char)arg0 animated:(char)arg1;
- (void)_setOnColor:(UIColor *)arg0;
- (UIColor *)_onColor;
- (void)_setAlwaysShowsOnOffLabel:(char)arg0;
- (char)_alwaysShowOnOffLabel;
- (float)enabledAlpha;
- (void)setAlternateColors:(char)arg0;
- (void)_setPressed:(char)arg0 on:(char)arg1 animated:(char)arg2 completion:(id /* block */)arg3;
- (float)_knobBounceDuration;
- (void)_setKnobBounceDuration:(float)arg0;
- (float)_knobBounceDamping;
- (void)_setKnobBounceDamping:(float)arg0;
- (float)_knobBounceStiffness;
- (void)_setKnobBounceStiffness:(float)arg0;
- (float)_knobBounceMass;
- (void)_setKnobBounceMass:(float)arg0;
- (unsigned long long)defaultAccessibilityTraits;
- (char)isAccessibilityElementByDefault;
- (char)isElementAccessibilityExposedToInterfaceBuilder;

@end
