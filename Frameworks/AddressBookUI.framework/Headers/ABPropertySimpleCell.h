/* Runtime dump - ABPropertySimpleCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertySimpleCell : ABPropertyCell
{
    UILabel * _labelLabel;
    UILabel * _valueLabel;
}

@property (readonly, nonatomic) UILabel * labelLabel;
@property (readonly, nonatomic) UILabel * valueLabel;

- (UIView<ABText> *)labelView;
- (UIView<ABText> *)valueView;
- (UILabel *)labelLabel;
- (UILabel *)valueLabel;
- (void)dealloc;

@end
