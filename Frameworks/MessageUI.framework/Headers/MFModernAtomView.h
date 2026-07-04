/* Runtime dump - MFModernAtomView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFModernAtomView : UIDefaultKeyboardInput <MFModernAtomViewResembling>
{
    MFModernAtomIconView * _badgeIconView;
    MFModernAtomIconView * _accessoryIconView;
    UIColor * _effectiveTintColor;
    unsigned int _disabledPresentationOptions;
    UIView * _baselineView;
    MFModernAtomBackgroundView * _background;
    UIView * _compositingView;
    UIView * _titleLabelFillView;
    UILabel * _label;
    UIActivityIndicatorView * _activityIndicator;
    float _scalingFactor;
    char _isPrimaryAddressAtom;
    char _separatorHidden;
    char _separatorIsLeftAligned;
    char _selected;
    UIFont * _titleFont;
    unsigned int _presentationOptions;
}

@property (copy, nonatomic) NSString * title;
@property (readonly, nonatomic) UILabel * titleLabel;
@property (nonatomic) char selected;
@property (readonly, nonatomic) unsigned int effectivePresentationOptions;
@property (readonly, nonatomic) UIColor * effectiveTintColor;
@property (readonly, nonatomic) struct CGRect selectionFrame;
@property (readonly, nonatomic) MFModernAtomBackgroundView * backgroundView;
@property (readonly, nonatomic) MFModernAtomIconView * badgeIconView;
@property (readonly, nonatomic) MFModernAtomIconView * accessoryIconView;
@property (readonly, nonatomic) UIActivityIndicatorView * activityIndicator;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (nonatomic) char isPrimaryAddressAtom;
@property (nonatomic) char hidesVIPIndicator;
@property (nonatomic) char separatorHidden;
@property (nonatomic) char separatorIsLeftAligned;
@property (nonatomic) float scale;
@property (nonatomic) int separatorStyle;
@property (nonatomic) unsigned int presentationOptions;
@property (readonly, nonatomic) struct CGPoint baselinePoint;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsets;
@property (retain, nonatomic) UIFont * titleFont;

+ (UIColor *)_defaultTintColor;
+ (NSDictionary *)_defaultLabelAttributes;
+ (UIFont *)primaryAtomFont;
+ (UIFont *)_defaultLabelAttributesWithFont:(UIFont *)arg0;
+ (UIColor *)_failureTintColor;
+ (UIColor *)_SMSTintColor;
+ (NSDictionary *)_badgeImagesForPresentationOptions:(unsigned int)arg0 iconOrder:(unsigned int *)arg1 orderingLength:(unsigned int)arg2 tintColor:(unsigned int)arg3 large:(id)arg4 variant:(char)arg5;
+ (struct CGPoint)defaultBaselinePoint;
+ (float)defaultHeight;
+ (MFModernAtomView *)defaultFont;
+ (float)horizontalPadding;

- (void)setSeparatorHidden:(char)arg0;
- (MFModernAtomView *)initWithFrame:(struct CGRect)arg0 presentationOptions:(struct CGSize)arg1 separatorStyle:(int)arg2;
- (void)_invalidatePresentationOptions;
- (void)setTitleFont:(UIFont *)arg0;
- (UIColor *)effectiveTintColor;
- (void)_setEffectiveTintColor:(UIColor *)arg0;
- (unsigned int)presentationOptions;
- (int)_preferredIconVariant;
- (char)isPrimaryAddressAtom;
- (void)_updateActivityIndicator;
- (void)setSelected:(char)arg0 animated:(char)arg1 style:(unsigned int)arg2;
- (void)_updateCompositingFilters;
- (void)_setPresentationOption:(unsigned int)arg0 enabled:(char)arg1;
- (float)preferredWidthWithSizeConstraints:(struct CGSize)arg0;
- (float)_leftPadding;
- (float)_rightPadding;
- (void)_updateFontIfNecessary;
- (char)separatorHidden;
- (float)_rightInset;
- (float)_leftInset;
- (float)preferredWidth;
- (void)performBuildInAnimationFromTextColor:(UIColor *)arg0 withDuration:(double)arg1;
- (void)setIsPrimaryAddressAtom:(char)arg0;
- (char)hidesVIPIndicator;
- (void)setHidesVIPIndicator:(char)arg0;
- (char)separatorIsLeftAligned;
- (void)setSeparatorIsLeftAligned:(char)arg0;
- (void)setPresentationOptions:(unsigned int)arg0;
- (void)appendPresentationOption:(unsigned int)arg0;
- (void)clearPresentationOption:(unsigned int)arg0;
- (unsigned int)effectivePresentationOptions;
- (MFModernAtomIconView *)accessoryIconView;
- (MFModernAtomIconView *)badgeIconView;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setTitle:(NSString *)arg0;
- (NSString *)description;
- (float)scale;
- (NSString *)title;
- (struct UIEdgeInsets)edgeInsets;
- (void)tintColorDidChange;
- (struct CGSize)intrinsicContentSize;
- (void)setScale:(float)arg0;
- (UILabel *)titleLabel;
- (void)setSeparatorStyle:(int)arg0;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (char)isSelected;
- (void)setSelected:(char)arg0;
- (MFModernAtomBackgroundView *)backgroundView;
- (int)separatorStyle;
- (NSObject *)viewForBaselineLayout;
- (struct CGRect)selectionFrame;
- (struct CGPoint)baselinePoint;
- (UIFont *)titleFont;
- (UIActivityIndicatorView *)activityIndicator;

@end
