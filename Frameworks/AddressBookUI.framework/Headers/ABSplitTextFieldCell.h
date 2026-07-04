/* Runtime dump - ABSplitTextFieldCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABSplitTextFieldCell : UITableViewCell
{
    UITextField * _textFieldLeft;
    UITextField * _textFieldRight;
    ABRepeatingGradientSeparatorView * _separator;
}

@property (retain, nonatomic) UITextField * textFieldLeft;
@property (retain, nonatomic) UITextField * textFieldRight;
@property (retain, nonatomic) ABRepeatingGradientSeparatorView * separator;

+ (char)requiresConstraintBasedLayout;

- (UITextField *)textFieldLeft;
- (UITextField *)textFieldRight;
- (void)setTextFieldLeft:(UITextField *)arg0;
- (void)setTextFieldRight:(UITextField *)arg0;
- (void)setSeparator:(ABRepeatingGradientSeparatorView *)arg0;
- (void)dealloc;
- (ABSplitTextFieldCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)updateConstraints;
- (void)setNeedsUpdateConstraints;
- (ABRepeatingGradientSeparatorView *)separator;

@end
