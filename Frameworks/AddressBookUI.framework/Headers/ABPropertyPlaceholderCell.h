/* Runtime dump - ABPropertyPlaceholderCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyPlaceholderCell : ABLabeledCell
{
    UILabel * _label;
}

@property (retain, nonatomic) UILabel * label;

- (void)setCardGroupItem:(ABCardGroupItem *)arg0;
- (UIView<ABText> *)labelView;
- (float)minCellHeight;
- (char)shouldPerformDefaultAction;
- (void)dealloc;
- (UILabel *)label;
- (void)setLabel:(UILabel *)arg0;

@end
