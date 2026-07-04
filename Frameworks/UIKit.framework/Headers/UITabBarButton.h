/* Runtime dump - UITabBarButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarButton : UIControl
{
    struct CGRect _hitRect;
    UIView * _info;
    UIVisualEffectView * _vibrancyEffectView;
    UITabBarButtonLabel * _label;
    _UIBadgeView * _badge;
    UITabBarSelectionIndicatorView * _selectedIndicator;
    char _selected;
    char _barHeight;
    char _badgeAnimated;
    struct UIEdgeInsets _infoInsets;
    struct UIOffset _selectedInfoOffset;
    struct UIOffset _infoOffset;
    UIImage * _customSelectedIndicatorImage;
    NSValue * _labelOffsetValue;
    NSMutableDictionary * _buttonTintColorsForState;
    NSMutableDictionary * _contentTintColorsForState;
    char _showsHighlightedState;
    char _centerAllContents;
    Class _appearanceGuideClass;
    UIColor * _unselectedTintColor;
}

@property (nonatomic) Class _appearanceGuideClass;
@property (retain, nonatomic) NSValue * labelOffsetValue;
@property (readonly, nonatomic) UITabBarButtonLabel * tabBarButtonLabel;
@property (nonatomic) char _centerAllContents;
@property (retain, nonatomic) UIColor * unselectedTintColor;
@property (nonatomic) char _showsHighlightedState;
@property (nonatomic) char _selected;

+ (UIColor *)_defaultLabelColor;

- (void)dealloc;
- (void)setImage:(UIImage *)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)pointInside:(struct CGPoint)arg0 forEvent:(struct __GSEvent *)arg1;
- (struct CGRect)_responderSelectionRectForWindow:(NSObject *)arg0;
- (void)setEnabled:(char)arg0;
- (void)focusedViewDidChange;
- (char)canBecomeFocused;
- (Class)_appearanceGuideClass;
- (NSDictionary *)_scriptingInfo;
- (void)setHighlighted:(char)arg0;
- (void)_UIAppearance_setTitleTextAttributes:(NSDictionary *)arg0 forState:(unsigned int)arg1;
- (void)_setTitleTextAttributes:(NSDictionary *)arg0 forState:(unsigned int)arg1;
- (void)_setAppearanceGuideClass:(Class)arg0;
- (char)_isSelected;
- (void)_positionBadge;
- (void)_badgeAnimationDidStop:(id)arg0 finished:(id /* block */)arg1;
- (void)_setBadgeValue:(id)arg0;
- (void)_setBadgeAnimated:(char)arg0;
- (void)_setBarHeight:(float)arg0;
- (char)_useBarHeight;
- (NSObject *)_contentTintColorForState:(unsigned int)arg0;
- (void)_setUnselectedTintColor:(UIColor *)arg0;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg0;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg0;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg0 withTaggedSelectors:(char)arg1;
- (UIColor *)_unselectedTintColor;
- (void)_setContentTintColor:(UIColor *)arg0 forState:(unsigned int)arg1;
- (void)_setUpSelectedIndicatorViewIfNeeded;
- (void)_updateSelectedIndicatorView;
- (void)_setSelected:(char)arg0;
- (void)_updateToMatchCurrentState;
- (char)_showsHighlightedState;
- (NSObject *)_buttonTintColorForState:(unsigned int)arg0;
- (void)_setUnselectedTintColor:(UIColor *)arg0 forceLabelToConform:(char)arg1;
- (struct CGRect)_frameForSelectedIndicator;
- (void)_updateInfoFrame;
- (void)_showSelectedIndicator:(char)arg0 changeSelection:(char)arg1;
- (void)_setShowsHighlightedState:(char)arg0;
- (UITabBarButtonLabel *)tabBarButtonLabel;
- (NSObject *)_selectedIndicatorView;
- (UITabBarButton *)initWithImage:(UIImage *)arg0 selectedImage:(UIImage *)arg1 label:(UITabBarButtonLabel *)arg2 withInsets:(struct UIEdgeInsets)arg3;
- (void)_setTabBarHitRect:(struct CGRect)arg0;
- (struct CGRect)_tabBarHitRect;
- (NSObject *)_swappableImageView;
- (void)_setSelectedInfoOffset:(struct UIOffset)arg0;
- (void)_setInfoOffset:(struct UIOffset)arg0;
- (void)_setCustomSelectedIndicatorImage:(UIImage *)arg0;
- (void)_setLabelHidden:(char)arg0;
- (struct UIOffset)_titlePositionAdjustment;
- (void)_setButtonTintColor:(UIColor *)arg0 forState:(unsigned int)arg1;
- (NSValue *)labelOffsetValue;
- (void)setLabelOffsetValue:(NSValue *)arg0;
- (char)_centerAllContents;
- (void)_setCenterAllContents:(char)arg0;

@end
