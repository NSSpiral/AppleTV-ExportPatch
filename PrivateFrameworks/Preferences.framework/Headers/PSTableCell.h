/* Runtime dump - PSTableCell
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSTableCell : UITableViewCell
{
    id _value;
    UIImageView * _checkedImageView;
    char _checked;
    char _shouldHideTitle;
    NSString * _hiddenTitle;
    int _alignment;
    SEL _pAction;
    id _pTarget;
    char _cellEnabled;
    PSSpecifier * _specifier;
    int _type;
    char _lazyIcon;
    char _lazyIconDontUnload;
    char _lazyIconForceSynchronous;
    NSString * _lazyIconAppID;
    char _reusedCell;
    PSTableCellHighlightContext * _customHighlightContext;
    char _forceHideDisclosureIndicator;
    char _isCopyable;
    UILongPressGestureRecognizer * _longTapRecognizer;
}

@property (nonatomic) int type;
@property (retain, nonatomic) PSSpecifier * specifier;
@property (nonatomic) char reusedCell;
@property (nonatomic) char forceHideDisclosureIndicator;
@property (nonatomic) char isCopyable;
@property (retain, nonatomic) UILongPressGestureRecognizer * longTapRecognizer;

+ (int)cellStyle;
+ (PSTableCell *)reuseIdentifierForSpecifier:(id)arg0;
+ (Class)cellClassForSpecifier:(id)arg0;
+ (NSObject *)stringFromCellType:(int)arg0;
+ (NSObject *)reuseIdentifierForClassAndType:(int)arg0;
+ (NSArray *)reuseIdentifierForBasicCellTypes:(int)arg0;
+ (int)cellTypeFromString:(NSString *)arg0;
+ (float)defaultCellHeight;

- (UILabel *)valueLabel;
- (PSSpecifier *)specifier;
- (void)setSpecifier:(PSSpecifier *)arg0;
- (void)setAlignment:(int)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setChecked:(char)arg0;
- (void)setTitle:(NSString *)arg0;
- (char)canPerformAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (void)setTarget:(NSObject *)arg0;
- (void)setType:(int)arg0;
- (int)type;
- (SEL)action;
- (NSString *)title;
- (void *)value;
- (void)setValue:(NSObject *)arg0;
- (NSObject *)_automationID;
- (NSObject *)target;
- (NSArray *)scriptingInfoWithChildren;
- (char)canBecomeFirstResponder;
- (NSString *)titleLabel;
- (void)setAction:(SEL)arg0;
- (void)setHighlighted:(char)arg0 animated:(char)arg1;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (void)prepareForReuse;
- (NSString *)_contentString;
- (void)copy:(id)arg0;
- (void)setIcon:(UIImage *)arg0;
- (UIImage *)_checkmarkImage:(char)arg0;
- (UIImage *)_disclosureChevronImage:(char)arg0;
- (float)textFieldOffset;
- (char)isChecked;
- (char)canReload;
- (void)reloadWithSpecifier:(PSSpecifier *)arg0 animated:(char)arg1;
- (PSTableCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1 specifier:(PSSpecifier *)arg2;
- (void)setReusedCell:(char)arg0;
- (void)refreshCellContentsWithSpecifier:(PSSpecifier *)arg0;
- (void)forceSynchronousIconLoadOnNextIconLoad;
- (void)cellRemovedFromView;
- (char)canBeChecked;
- (void)highlightCellForDuration:(double)arg0 animateUnighlight:(char)arg1;
- (void)_invalidateHighlightContext;
- (NSString *)_copyableText;
- (void)_updateAccessoryTypeForSpecifier:(id)arg0;
- (void)longPressed:(id)arg0;
- (void)setShouldHideTitle:(char)arg0;
- (UIImage *)blankIcon;
- (UIImage *)getLazyIcon;
- (UIImage *)getLazyIconID;
- (NSOperationQueue *)lazyIconQueue:(NSObject *)arg0;
- (void)setCellEnabled:(char)arg0;
- (void)setValueChangedTarget:(NSObject *)arg0 action:(SEL)arg1 specifier:(PSSpecifier *)arg2;
- (NSObject *)iconImageView;
- (void)setCellTarget:(NSObject *)arg0;
- (void)setCellAction:(SEL)arg0;
- (NSObject *)cellTarget;
- (SEL)cellAction;
- (void)setForceHideDisclosureIndicator:(char)arg0;
- (NSString *)titleTextLabel;
- (UIImage *)getIcon;
- (char)cellEnabled;
- (char)reusedCell;
- (char)forceHideDisclosureIndicator;
- (char)isCopyable;
- (void)setIsCopyable:(char)arg0;
- (UILongPressGestureRecognizer *)longTapRecognizer;
- (void)setLongTapRecognizer:(UILongPressGestureRecognizer *)arg0;

@end
