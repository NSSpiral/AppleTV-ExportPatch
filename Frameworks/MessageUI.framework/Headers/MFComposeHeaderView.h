/* Runtime dump - MFComposeHeaderView
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFComposeHeaderView : UIView
{
    id _delegate;
    MFHeaderLabelView * _labelView;
    UIView * _separator;
    NSString * _navTitle;
}

@property (copy, nonatomic) NSString * label;
@property (copy, nonatomic) NSString * navTitle;
@property (readonly, nonatomic) MFHeaderLabelView * labelView;

+ (float)preferredHeight;
+ (float)_labelTopPaddingSpecification;
+ (float)separatorHeight;
+ (MFComposeHeaderView *)defaultFont;

- (MFHeaderLabelView *)labelView;
- (float)labelTopPadding;
- (void)handleTouchesEnded;
- (struct CGRect)titleLabelBaselineAlignmentRectForLabel:(NSString *)arg0;
- (void)refreshPreferredContentSize;
- (void)setNavTitle:(NSString *)arg0;
- (MFComposeHeaderView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)setFrame:(struct CGRect)arg0;
- (void)layoutSubviews;
- (void)touchesEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (NSObject *)_automationID;
- (NSString *)label;
- (char)_canBecomeFirstResponder;
- (void)setLabel:(NSString *)arg0;
- (NSString *)navTitle;
- (UIColor *)labelColor;

@end
