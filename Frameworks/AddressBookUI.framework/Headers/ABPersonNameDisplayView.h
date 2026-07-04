/* Runtime dump - ABPersonNameDisplayView
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonNameDisplayView : ABPasteboardControl
{
    ABNamePropertyGroup * _namePropertyGroup;
    int _primaryProperty;
    NSString * _primaryPropertyFormattingCountryCode;
    float _minimumHeight;
    char _alignOnBottom;
    UILabel * _headlineLabel;
    UILabel * _tagLineLabel;
    UILabel * _messageLabel;
    UILabel * _messageDetailLabel;
    UIFont * _messageFont;
    UIFont * _messageDetailFont;
    ABStyleProvider * _styleProvider;
    NSString * _customHeadline;
    NSString * _customTagLine;
    NSString * _customMessage;
    NSString * _customMessageDetail;
    UIView * _customMessageView;
}

@property (retain, nonatomic) ABNamePropertyGroup * namePropertyGroup;
@property (nonatomic) int primaryProperty;
@property (copy, nonatomic) NSString * primaryPropertyFormattingCountryCode;
@property (nonatomic) float minimumHeight;
@property (nonatomic) char alignOnBottom;
@property (copy, nonatomic) NSString * headline;
@property (copy, nonatomic) NSString * tagLine;
@property (copy, nonatomic) NSString * message;
@property (retain, nonatomic) UIFont * messageFont;
@property (copy, nonatomic) NSString * messageDetail;
@property (retain, nonatomic) UIFont * messageDetailFont;
@property (retain, nonatomic) ABStyleProvider * styleProvider;
@property (retain, nonatomic) UIView * customMessageView;

- (ABStyleProvider *)styleProvider;
- (void)setStyleProvider:(ABStyleProvider *)arg0;
- (void)setPrimaryProperty:(int)arg0;
- (int)primaryProperty;
- (char)abShouldShowMenu;
- (void)abMenuControllerWillShow:(id)arg0;
- (void)abMenuControllerWillHide;
- (void)_updateHeadlineText;
- (void)_updateTagLineText;
- (void)_setMessageText:(NSString *)arg0 isDetail:(char)arg1;
- (void)_setFont:(UIFont *)arg0 isDetail:(char)arg1;
- (UIFont *)_newLabelWithFont:(UIFont *)arg0 numberOfLines:(unsigned int)arg1;
- (void)initializeHeadlineAndTaglineIfNeeded;
- (float)_heightForLabelsForWidth:(float)arg0;
- (struct CGSize)multilineLabel:(NSString *)arg0 sizeThatFits:(struct CGSize)arg1;
- (void)_adjustLabelTextColorForPasteboardSelection:(char)arg0;
- (id)_copyPrimaryValue;
- (id)_copyTagLine;
- (void)_appendString:(NSString *)arg0 withFormatKey:(NSString *)arg1 toTagLine:(id)arg2;
- (void)_setLabel:(NSString *)arg0 highlighted:(char)arg1 animated:(char)arg2;
- (void)setNamePropertyGroup:(ABNamePropertyGroup *)arg0;
- (void)setHeadline:(NSString *)arg0;
- (void)setTagLine:(NSString *)arg0;
- (void)setMessageFont:(UIFont *)arg0;
- (void)setMessageDetailFont:(UIFont *)arg0;
- (void)setMessageDetail:(NSString *)arg0;
- (void)setCustomMessageView:(UIView *)arg0;
- (void)reloadNameDataAnimated:(char)arg0;
- (void)_setSubviewsHighlighted:(char)arg0 animated:(char)arg1;
- (ABNamePropertyGroup *)namePropertyGroup;
- (NSString *)primaryPropertyFormattingCountryCode;
- (void)setPrimaryPropertyFormattingCountryCode:(NSString *)arg0;
- (float)minimumHeight;
- (void)setMinimumHeight:(float)arg0;
- (char)alignOnBottom;
- (void)setAlignOnBottom:(char)arg0;
- (NSString *)headline;
- (NSString *)tagLine;
- (NSString *)messageDetail;
- (UIFont *)messageFont;
- (UIFont *)messageDetailFont;
- (UIView *)customMessageView;
- (ABPersonNameDisplayView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (char)canPerformAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (NSString *)message;
- (void)copy:(id)arg0;
- (void)setMessage:(NSString *)arg0;

@end
