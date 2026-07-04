/* Runtime dump - ABLinkedCardsCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABLinkedCardsCell : ABLabeledCell
{
    <ABPropertyCellDelegate> * _delegate;
    UILabel * _sourceLabel;
    UILabel * _nameLabel;
}

@property (nonatomic) <ABPropertyCellDelegate> * delegate;
@property (readonly, nonatomic) UILabel * sourceLabel;
@property (readonly, nonatomic) UILabel * nameLabel;

+ (char)wantsChevron;

- (void)performDefaultAction;
- (void)setCardGroupItem:(ABCardGroupItem *)arg0;
- (UIView<ABText> *)labelView;
- (char)shouldPerformDefaultAction;
- (UILabel *)sourceLabel;
- (UILabel *)nameLabel;
- (UIView<ABText> *)valueView;
- (void)dealloc;
- (void)setDelegate:(<ABPropertyCellDelegate> *)arg0;
- (<ABPropertyCellDelegate> *)delegate;

@end
