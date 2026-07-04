/* Runtime dump - ABPropertyCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertyCell : ABLabeledCell
{
    char _allowsEditing;
    UIResponder * _firstResponderItem;
    float _labelWidth;
    <ABPropertyCellDelegate> * _delegate;
    <ABPresenterDelegate> * _presentingDelegate;
}

@property (readonly, nonatomic) ABPropertyGroupItem * propertyItem;
@property (readonly, nonatomic) UIResponder * firstResponderItem;
@property (nonatomic) char allowsEditing;
@property (nonatomic) float labelWidth;
@property (nonatomic) <ABPropertyCellDelegate> * delegate;
@property (nonatomic) <ABPresenterDelegate> * presentingDelegate;

- (void)performDefaultAction;
- (void)setCardGroupItem:(ABCardGroupItem *)arg0;
- (void)performAccessoryAction;
- (UIResponder *)firstResponderItem;
- (ABPropertyGroupItem *)propertyItem;
- (<ABPresenterDelegate> *)presentingDelegate;
- (void)updateWithPropertyItem:(ABPropertyGroupItem *)arg0;
- (void)setPresentingDelegate:(<ABPresenterDelegate> *)arg0;
- (void)setLabelWidth:(float)arg0;
- (NSString *)labelString;
- (void)updateValueWithPropertyItem:(ABPropertyGroupItem *)arg0;
- (NSString *)valueString;
- (void)setPropertyItem:(ABPropertyGroupItem *)arg0;
- (float)labelWidth;
- (void)setDelegate:(<ABPropertyCellDelegate> *)arg0;
- (ABPropertyCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (<ABPropertyCellDelegate> *)delegate;
- (void)copy:(id)arg0;
- (char)allowsEditing;
- (void)setAllowsEditing:(char)arg0;

@end
