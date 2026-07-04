/* Runtime dump - UITableViewHeaderFooterView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewHeaderFooterView : UIView <UITableViewSubviewReusing>
{
    int _tableViewStyle;
    UIImage * _backgroundImage;
    struct CGRect _frame;
    int _textAlignment;
    UITableView * _tableView;
    float _maxTitleWidth;
    NSString * _reuseIdentifier;
    UIView * _backgroundView;
    _UITableViewHeaderFooterViewLabel * _label;
    _UITableViewHeaderFooterViewLabel * _detailLabel;
    UIView * _contentView;
    UIColor * _tintColor;
    struct UIEdgeInsets _separatorInset;
    struct ? _headerFooterFlags;
}

@property (retain, nonatomic) UIColor * tintColor;
@property (readonly, retain, nonatomic) UILabel * textLabel;
@property (readonly, retain, nonatomic) UILabel * detailTextLabel;
@property (readonly, retain, nonatomic) UIView * contentView;
@property (retain, nonatomic) UIView * backgroundView;
@property (copy, nonatomic) NSString * reuseIdentifier;
@property (nonatomic) char floating;
@property (nonatomic) int tableViewStyle;
@property (retain, nonatomic) UIImage * backgroundImage;
@property (nonatomic) char sectionHeader;
@property (nonatomic) UITableView * tableView;
@property (nonatomic) int textAlignment;
@property (copy, nonatomic) NSString * text;
@property (nonatomic) float maxTitleWidth;
@property (nonatomic) float marginWidth;
@property (nonatomic) float rightMarginWidth;
@property (nonatomic) char stripPadding;
@property (nonatomic) char topHeader;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (UIFont *)_defaultPlainHeaderFooterFont;
+ (NSObject *)_defaultFontForTableViewStyle:(int)arg0 isSectionHeader:(char)arg1;
+ (NSObject *)_defaultTextColorForTableViewStyle:(int)arg0 isSectionHeader:(char)arg1;

- (UITableViewHeaderFooterView *)initWithFrame:(struct CGRect)arg0;
- (void)setOpaque:(char)arg0;
- (void)dealloc;
- (void)setBackgroundColor:(UIColor *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGRect)frame;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)setTextAlignment:(int)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (UIView *)contentView;
- (UIColor *)tintColor;
- (void)setTintColor:(UIColor *)arg0;
- (char)_transparentFocusContainer;
- (struct CGSize)systemLayoutSizeFittingSize:(struct CGSize)arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2;
- (NSDictionary *)_scriptingInfo;
- (UIImage *)backgroundImage;
- (void)_updateBackgroundImage;
- (struct CGRect)_labelFrame;
- (void)setMaxTitleWidth:(float)arg0;
- (void)setFloating:(char)arg0;
- (void)setTableViewStyle:(int)arg0;
- (void)setSectionHeader:(char)arg0;
- (void)setTableView:(UITableView *)arg0;
- (void)_setMarginWidth:(float)arg0;
- (void)_setRightMarginWidth:(float)arg0;
- (void)_setupLabelAppearance;
- (void)_setBackgroundViewColor:(UIColor *)arg0;
- (UITableViewHeaderFooterView *)initWithReuseIdentifier:(NSString *)arg0;
- (NSString *)reuseIdentifier;
- (void)setBackgroundView:(UIView *)arg0;
- (void)prepareForReuse;
- (void)setReuseIdentifier:(NSString *)arg0;
- (UILabel *)textLabel;
- (UILabel *)detailTextLabel;
- (void)_setTopHeader:(char)arg0;
- (void)_setStripPadding:(char)arg0;
- (UIView *)backgroundView;
- (void)_tableViewDidUpdateMarginWidth;
- (float)_marginWidth;
- (int)textAlignment;
- (void)setBackgroundImage:(UIImage *)arg0;
- (void)setNeedsUpdateConstraints;
- (UITableView *)tableView;
- (struct CGSize)_sizeThatFits:(struct CGSize)arg0 stripPaddingForAbuttingView:(char)arg1 isTopHeader:(char)arg2;
- (int)tableViewStyle;
- (float)_rightMarginWidth;
- (void)_setupBackgroundView;
- (void)_invalidateLabelBackgroundColor;
- (void)_invalidateDetailLabelBackgroundColor;
- (struct CGRect)_backgroundRect;
- (char)sectionHeader;
- (char)_useDetailText;
- (void)_updateLabelBackgroundColor;
- (void)_updateDetailLabelBackgroundColor;
- (NSString *)_label:(char)arg0;
- (struct CGSize)_textSizeForWidth:(float)arg0;
- (struct CGSize)_detailTextSizeForWidth:(float)arg0;
- (void)_updateLayerContents;
- (void)_updateContentAndBackgroundView;
- (void)_updateLabelBackgroundColorIfNeeeded;
- (struct CGRect)_detailLabelFrame;
- (void)_updateDetailLabelBackgroundColorIfNeeded;
- (char)floating;
- (char)_stripPadding;
- (char)_isTopHeader;
- (float)maxTitleWidth;

@end
