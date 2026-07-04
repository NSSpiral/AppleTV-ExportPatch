/* Runtime dump - ABLinkedCardsPlaceholderCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABLinkedCardsPlaceholderCell : ABPropertyPlaceholderCell
{
    <ABPropertyCellDelegate> * _delegate;
}

@property (nonatomic) <ABPropertyCellDelegate> * delegate;

- (void)performDefaultAction;
- (void)setDelegate:(<ABPropertyCellDelegate> *)arg0;
- (<ABPropertyCellDelegate> *)delegate;

@end
