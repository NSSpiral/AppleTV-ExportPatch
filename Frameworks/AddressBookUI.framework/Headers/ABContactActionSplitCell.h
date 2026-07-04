/* Runtime dump - ABContactActionSplitCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABContactActionSplitCell : ABLabeledCell
{
    UIButton * _leftLabel;
    UIButton * _rightLabel;
}

@property (readonly, nonatomic) UIButton * leftLabel;
@property (readonly, nonatomic) UIButton * rightLabel;

- (void)setLabelTextAttributes:(NSDictionary *)arg0;
- (void)setCardGroupItem:(ABCardGroupItem *)arg0;
- (UIView<ABText> *)labelView;
- (float)minCellHeight;
- (id)standardButton;
- (UIButton *)leftLabel;
- (void)_setupButton:(id)arg0 forAction:(NSObject *)arg1;
- (UIButton *)rightLabel;
- (NSArray *)constantConstraints;
- (UIView *)rightMostView;
- (void)dealloc;
- (ABContactActionSplitCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;

@end
