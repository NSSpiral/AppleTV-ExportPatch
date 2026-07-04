/* Runtime dump - ABStarkContactPropertyCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABStarkContactPropertyCell : ABPropertyPhoneNumberCell
{
    struct UIEdgeInsets _contentInsets;
}

@property (nonatomic) struct UIEdgeInsets contentInsets;

+ (char)wantsHorizontalLayout;

- (void)performDefaultAction;
- (NSArray *)variableConstraints;
- (NSArray *)constantConstraints;
- (void)transportButtonClicked:(id)arg0;
- (float)bottomBaselineConstant;
- (ABTransportButton *)standardTransportIcon;
- (UIImageView *)standardStarView;
- (ABStarkContactPropertyCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)setHighlighted:(char)arg0 animated:(char)arg1;
- (void)setSelected:(char)arg0 animated:(char)arg1;
- (void)setContentInsets:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)contentInsets;

@end
