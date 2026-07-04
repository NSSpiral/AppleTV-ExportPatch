/* Runtime dump - ABPropertySimpleTransportCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPropertySimpleTransportCell : ABPropertySimpleCell
{
    ABTransportButton * _transportIcon1;
    ABTransportButton * _transportIcon2;
    UIImageView * _starView;
    char _allowsActions;
    UIColor * _actionsColor;
}

@property (nonatomic) char allowsActions;
@property (readonly, nonatomic) char shouldShowStar;
@property (readonly, nonatomic) ABTransportButton * transportIcon1;
@property (readonly, nonatomic) ABTransportButton * transportIcon2;
@property (readonly, nonatomic) ABTransportButton * standardTransportIcon;
@property (readonly, nonatomic) UIImageView * standardStarView;
@property (retain, nonatomic) UIColor * actionsColor;

- (void)setCardGroupItem:(ABCardGroupItem *)arg0;
- (NSArray *)variableConstraints;
- (char)shouldPerformDefaultAction;
- (UIView *)rightMostView;
- (void)setAllowsActions:(char)arg0;
- (void)setActionsColor:(UIColor *)arg0;
- (char)allowsActions;
- (void)updateWithPropertyItem:(ABPropertyGroupItem *)arg0;
- (void)transportButtonClicked:(id)arg0;
- (ABTransportButton *)transportIcon1;
- (ABTransportButton *)transportIcon2;
- (char)shouldShowStar;
- (void)updateStarIcon;
- (void)updateTransportButtons;
- (void)_contentSizeCategoryDidChange:(NSDictionary *)arg0;
- (void)_updateStarImageForView:(NSObject *)arg0;
- (ABTransportButton *)standardTransportIcon;
- (UIImageView *)standardStarView;
- (UIColor *)actionsColor;
- (void)dealloc;
- (ABPropertySimpleTransportCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;

@end
