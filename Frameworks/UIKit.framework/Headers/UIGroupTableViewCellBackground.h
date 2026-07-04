/* Runtime dump - UIGroupTableViewCellBackground
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIGroupTableViewCellBackground : UIView
{
    int _sectionLocation;
    int _newSectionLocation;
    int _animationCount;
    int _selectionStyle;
    int _separatorStyle;
    UIView * _topSeparatorView;
    UIView * _bottomSeparatorView;
    UIColor * _selectionTintColor;
    float _sectionBorderWidth;
    struct UIEdgeInsets _separatorInset;
    struct ? _groupBackgroundFlags;
}

@property (nonatomic) int sectionLocation;
@property (nonatomic) int selectionStyle;
@property (nonatomic) int separatorStyle;
@property (nonatomic) struct UIEdgeInsets separatorInset;
@property (retain, nonatomic) UIColor * selectionTintColor;
@property (nonatomic) char selected;
@property (nonatomic) float sectionBorderWidth;

+ (void)initialize;
+ (void)_flushCacheOnNotification:(NSNotification *)arg0;

- (UIGroupTableViewCellBackground *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (UIColor *)backgroundColor;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (UIColor *)_backgroundColor;
- (void)setSeparatorStyle:(int)arg0;
- (struct UIEdgeInsets)separatorInset;
- (char)isSelected;
- (void)setSectionLocation:(int)arg0 animated:(char)arg1;
- (void)setSelected:(char)arg0;
- (void)setSeparatorInset:(struct UIEdgeInsets)arg0;
- (int)separatorStyle;
- (UIColor *)_separatorColor;
- (UIColor *)_sectionBorderColor;
- (void)_layoutSubviews:(char)arg0;
- (void)displayLayer:(MDDisplayLayer *)arg0;
- (UIColor *)_fillColor;
- (void)setSelectionTintColor:(UIColor *)arg0;
- (void)setSelectionStyle:(int)arg0;
- (int)selectionStyle;
- (UIColor *)selectionTintColor;
- (int)sectionLocation;
- (CALayer *)_contentMaskLayer;
- (UIColor *)_topShadowViewWithColor:(UIColor *)arg0;
- (void)setSectionBorderWidth:(float)arg0;
- (void)setSectionLocation:(int)arg0;
- (UIColor *)_topShadowColor;
- (UIColor *)_bottomShadowColor;
- (float)sectionBorderWidth;
- (NSObject *)_roundedRectBezierPathInRect:(struct CGRect)arg0 withSectionLocation:(struct CGSize)arg1 forBorder:(WXBorder *)arg2 cornerRadiusAdjustment:(int)arg3;
- (float)_pixelDisplayedImageHeight;
- (struct CGRect)_contentsRect:(NSObject *)arg0;
- (struct CGRect)_contentsCenter:(id)arg0;
- (void)_updateSeparatorViews;
- (NSString *)_cachedImageForKey:(NSString *)arg0;
- (struct CGRect)_contentRectForContentHeight:(id)arg0;
- (void)_incrementAnimationCount;
- (void)_decrementAnimationCount;
- (void)_setSectionLocationAnimationDidStop;
- (void)setSelectionTintColor:(UIColor *)arg0 layoutSubviews:(char)arg1;

@end
