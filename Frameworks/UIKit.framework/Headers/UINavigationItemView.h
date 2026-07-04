/* Runtime dump - UINavigationItemView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UINavigationItemView : UIView
{
    UINavigationItem * _item;
    struct CGSize _titleSize;
    UIView * _topCrossView;
    UIView * _bottomCrossView;
    char _isCrossFading;
    char _customFontSet;
    UILabel * _label;
    char _isFadingInFromCustomAlpha;
}

@property (nonatomic) char _isFadingInFromCustomAlpha;

- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (UINavigationItem *)navigationItem;
- (NSString *)title;
- (void)setFont:(UIFont *)arg0;
- (NSDictionary *)_scriptingInfo;
- (void)_resetTitleSize;
- (void)_setLineBreakMode:(int)arg0;
- (UINavigationItemView *)initWithNavigationItem:(NSObject *)arg0;
- (char)titleAutoresizesToFit;
- (void)setTitleAutoresizesToFit:(char)arg0;
- (void)_updateLabelColor;
- (void)_prepareCrossViewsForNewSize:(struct CGSize)arg0;
- (void)_crossFadeHiddingButton:(char)arg0;
- (void)_cleanUpCrossView;
- (struct CGSize)_titleSize;
- (char)_isFadingInFromCustomAlpha;
- (void)_setFadingInFromCustomAlpha:(char)arg0;
- (UIFont *)_defaultFont;
- (void)_setFont:(UIFont *)arg0;
- (struct CGRect)_labelFrame;
- (char)_useSilverLookForBarStyle:(int)arg0;
- (NSObject *)_currentTextColorForBarStyle:(int)arg0;
- (struct CGSize)_currentTextShadowOffsetForBarStyle:(int)arg0;
- (NSObject *)_currentTextShadowColorForBarStyle:(int)arg0;
- (float)_titleYAdjustmentCustomization;
- (void)_updateLabel;
- (void)_updateLabelContents;
- (UIFont *)font;
- (void)_adjustLabelTrackingIfNecessary;

@end
