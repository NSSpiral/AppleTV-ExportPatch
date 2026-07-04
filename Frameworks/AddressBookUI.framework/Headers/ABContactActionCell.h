/* Runtime dump - ABContactActionCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactActionCell : ABLabeledCell
{
    UILabel * _label;
    ABTransportButton * _transportIcon;
}

@property (readonly, nonatomic) ABCardActionGroupItem * actionGroupItem;
@property (readonly, nonatomic) ABContactAction * action;
@property (retain, nonatomic) UILabel * label;
@property (retain, nonatomic) ABTransportButton * transportIcon;

- (void)setTransportIcon:(ABTransportButton *)arg0;
- (void)setLabelTextAttributes:(NSDictionary *)arg0;
- (void)setCardGroupItem:(ABCardGroupItem *)arg0;
- (ABTransportButton *)transportIcon;
- (ABCardActionGroupItem *)actionGroupItem;
- (NSArray *)variableConstraints;
- (UIView<ABText> *)labelView;
- (float)minCellHeight;
- (char)shouldPerformDefaultAction;
- (void)dealloc;
- (ABContactAction *)action;
- (UILabel *)label;
- (void)setLabel:(UILabel *)arg0;

@end
