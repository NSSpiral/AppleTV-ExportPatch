/* Runtime dump - UINavigationItemButtonView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavigationItemButtonView : UINavigationItemView <UIGestureRecognizerDelegate>
{
    int _style;
    char _pressed;
    _UIBarButtonItemAppearanceStorage * _appearanceStorage;
    char _customBackgroundImageChangedToOrFromNil;
    UIImageView * _backgroundImageView;
    UIImageView * _imageView;
    char _wantsBlendModeForAccessibilityBackgrounds;
    unsigned int _abbreviatedTitleIndex;
}

@property (nonatomic) unsigned int _abbreviatedTitleIndex;
@property (nonatomic) char _wantsBlendModeForAccessibilityBackgrounds;
@property (retain, nonatomic) UIColor * _tintColor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (UINavigationItemButtonView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldReceiveTouch:(UITouch *)arg1;
- (NSString *)title;
- (struct UIEdgeInsets)alignmentRectInsets;
- (UIImage *)image;
- (void)_focusedViewDidChange:(NSDictionary *)arg0;
- (char)_canDrawContent;
- (void)traitCollectionDidChange:(NSDictionary *)arg0;
- (char)canBecomeFocused;
- (Class)_appearanceGuideClass;
- (void)tintColorDidChange;
- (void)_focusedViewWillChange:(NSDictionary *)arg0;
- (void)_didChangeFromIdiom:(int)arg0 onScreen:(NSObject *)arg1 traverseHierarchy:(char)arg2;
- (NSDictionary *)_scriptingInfo;
- (unsigned int)_abbreviatedTitleIndex;
- (void)_setAbbreviatedTitleIndex:(unsigned int)arg0;
- (void)setPressed:(char)arg0;
- (_UIBarButtonItemAppearanceStorage *)_appearanceStorage;
- (void)_applyBarButtonAppearanceStorage:(id)arg0 withTaggedSelectors:(char)arg1;
- (char)_wantsAccessibilityButtonShapes;
- (NSObject *)_backButtonBackgroundImageForState:(unsigned int)arg0 barMetrics:(int)arg1;
- (void)_accessibilityButtonShapesDidChangeNotification:(NSNotification *)arg0;
- (void)setStyle:(int)arg0;
- (char)customBackgroundImageChangedToOrFromNil;
- (char)_suppressesBackIndicatorView;
- (void)setPressed:(char)arg0 initialPress:(char)arg1;
- (char)pressed;
- (void)_UIAppearance_setTintColor:(UIColor *)arg0;
- (void)_setTintColor:(UIColor *)arg0;
- (char)_showsAccessibilityBackgroundWhenEnabled;
- (void)_setWantsBlendModeForAccessibilityBackgrounds:(char)arg0;
- (void)_accessibilityButtonShapesParametersDidChange;
- (void)backIndicatorViewHasRespondedToCustomBackgroundImageChange;
- (void)setStyle:(int)arg0 animated:(char)arg1;
- (char)hasCustomBackgroundImage;
- (UIImageView *)backgroundImageView;
- (struct CGSize)imageSize;
- (UIFont *)_defaultFont;
- (float)_backgroundVerticalPositionAdjustmentForBarMetrics:(int)arg0;
- (char)_wantsBlendModeForAccessibilityBackgrounds;
- (UIColor *)_tintColor;
- (void)_setBackgroundImage:(UIImage *)arg0 forState:(unsigned int)arg1 style:(int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(UIImage *)arg0 forState:(unsigned int)arg1 style:(int)arg2 barMetrics:(int)arg3;
- (void)_UIAppearance_setBackgroundImage:(UIImage *)arg0 forState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_UIAppearance_setTitleTextAttributes:(NSDictionary *)arg0 forState:(unsigned int)arg1;
- (void)_UIAppearance_setBackgroundVerticalPositionAdjustment:(float)arg0 forBarMetrics:(int)arg1;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg0 forBarMetrics:(int)arg1;
- (void)_setTitleTextAttributes:(NSDictionary *)arg0 forState:(unsigned int)arg1;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg0 forBarMetrics:(int)arg1;
- (void)_setBackgroundVerticalPositionAdjustment:(float)arg0 forBarMetrics:(int)arg1;
- (void)_setBackgroundImage:(UIImage *)arg0 forState:(unsigned int)arg1 barMetrics:(int)arg2;
- (NSObject *)_titleTextAttributesForState:(unsigned int)arg0;
- (void)_UIAppearance_setBackButtonBackgroundImage:(UIImage *)arg0 forState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_setBackButtonBackgroundImage:(UIImage *)arg0 forState:(unsigned int)arg1 barMetrics:(int)arg2;
- (void)_UIAppearance_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg0 forBarMetrics:(int)arg1;
- (void)_setBackButtonTitlePositionAdjustment:(struct UIOffset)arg0 forBarMetrics:(int)arg1;
- (void)_UIAppearance_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg0 forBarMetrics:(int)arg1;
- (void)_setBackButtonBackgroundVerticalPositionAdjustment:(float)arg0 forBarMetrics:(int)arg1;
- (char)_useSilverLookForBarStyle:(int)arg0;
- (NSObject *)_currentTextColorForBarStyle:(int)arg0;
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(int)arg0;
- (NSObject *)_currentTextShadowColorForBarStyle:(int)arg0;
- (float)_titleYAdjustmentCustomization;
- (id)_currentCustomBackgroundNeedsDarkening:(char *)arg0;
- (void)_drawBackground_legacy;
- (void)_styleAnimationDidStop:(id)arg0 finished:(id /* block */)arg1 context:(NSObject *)arg2;
- (float)_backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(int)arg0;
- (void)_installBackSelectGestureRecognizer;
- (void)_uninstallBackSelectGestureRecognizer;
- (void)_backSelectGestureChanged:(NSNotification *)arg0;
- (struct UIOffset)_backButtonTitlePositionAdjustmentForBarMetrics:(int)arg0;

@end
