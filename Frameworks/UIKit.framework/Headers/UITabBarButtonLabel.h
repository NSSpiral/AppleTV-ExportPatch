/* Runtime dump - UITabBarButtonLabel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITabBarButtonLabel : UILabel
{
    float _boundsWidth;
    _UITabBarItemAppearanceStorage * _appearanceStorage;
    char _isSelected;
    char _isHighlighted;
    Class _appearanceGuideClass;
    UIColor * _unselectedTintColor;
}

@property (nonatomic) Class _appearanceGuideClass;
@property (retain, nonatomic) UIColor * unselectedTintColor;

+ (float)_fontPointSizeForIdiom:(int)arg0;

- (void)dealloc;
- (char)_shouldAnimatePropertyWithKey:(NSString *)arg0;
- (Class)_appearanceGuideClass;
- (void)tintColorDidChange;
- (void)_didChangeFromIdiom:(int)arg0 onScreen:(NSObject *)arg1 traverseHierarchy:(char)arg2;
- (void)setHighlighted:(char)arg0;
- (void)_UIAppearance_setTitleTextAttributes:(NSDictionary *)arg0 forState:(unsigned int)arg1;
- (void)_setTitleTextAttributes:(NSDictionary *)arg0 forState:(unsigned int)arg1;
- (NSObject *)_titleTextAttributesForState:(unsigned int)arg0;
- (void)_setAppearanceGuideClass:(Class)arg0;
- (void)setSelected:(char)arg0;
- (char)_shouldCeilSizeToViewScale;
- (UIFont *)_fontForIdiom:(int)arg0;
- (void)updateTextColorsForState;
- (id)_containingTabBarButton;
- (void)_updateForFontChangeWithIdiom:(int)arg0;
- (void)sizeToFitBounds:(struct CGRect)arg0;
- (void)_setUnselectedTintColor:(UIColor *)arg0;
- (void)_UIAppearance_setTitlePositionAdjustment:(struct UIOffset)arg0;
- (void)_setTitlePositionAdjustment:(struct UIOffset)arg0;
- (void)_applyTabBarButtonAppearanceStorage:(id)arg0 withTaggedSelectors:(char)arg1;
- (UIColor *)_unselectedTintColor;

@end
