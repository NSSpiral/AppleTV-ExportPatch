/* Runtime dump - ABPropertyEditingTableViewCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyEditingTableViewCell : UITableViewCell <ABStyleProviding>
{
    int _property;
    UITextField * _textField;
    NSString * _placeholder;
    <ABPropertyEditingTableViewCellDelegate> * _delegate;
}

@property (nonatomic) int property;
@property (nonatomic) char usesLargeFont;
@property (copy, nonatomic) NSString * placeholder;
@property (copy, nonatomic) NSString * value;
@property (nonatomic) <ABPropertyEditingTableViewCellDelegate> * delegate;

- (<ABStyleProvider> *)styleProvider;
- (ABPropertyEditingTableViewCell *)initWithReuseIdentifier:(NSString *)arg0 property:(int)arg1 delegate:(<ABPropertyEditingTableViewCellDelegate> *)arg2;
- (void)_resizeAndCenterTextField;
- (char)usesLargeFont;
- (void)setUsesLargeFont:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(<ABPropertyEditingTableViewCellDelegate> *)arg0;
- (void)layoutSubviews;
- (<ABPropertyEditingTableViewCellDelegate> *)delegate;
- (char)resignFirstResponder;
- (char)becomeFirstResponder;
- (NSString *)value;
- (void)setValue:(NSString *)arg0;
- (char)canBecomeFirstResponder;
- (char)isFirstResponder;
- (ABPropertyEditingTableViewCell *)initWithReuseIdentifier:(NSString *)arg0;
- (void)textFieldValueDidChange:(NSDictionary *)arg0;
- (void)setPlaceholder:(NSString *)arg0;
- (char)canResignFirstResponder;
- (NSString *)placeholder;
- (int)property;
- (void)setProperty:(int)arg0;

@end
