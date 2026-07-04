/* Runtime dump - ABPersonTableTinyActionCell
 * Image: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

@interface ABPersonTableTinyActionCell : UITableViewCell
{
    ABPersonTableActionDataSource * _actionDataSource;
    UIView * _tinyActionContentView;
    <ABStyleProvider> * _styleProvider;
    <ABPersonTableTinyActionDelegate> * _delegate;
}

@property (retain, nonatomic) ABPersonTableActionDataSource * actionDataSource;
@property (readonly) unsigned int actionsCount;
@property (retain, nonatomic) <ABStyleProvider> * styleProvider;
@property (nonatomic) <ABPersonTableTinyActionDelegate> * delegate;

- (<ABStyleProvider> *)styleProvider;
- (void)setStyleProvider:(<ABStyleProvider> *)arg0;
- (ABPersonTableActionDataSource *)actionDataSource;
- (void)refreshActions;
- (UIView *)_tinyActionContentView;
- (void)_resizeInnerContentView;
- (void)setActionDataSource:(ABPersonTableActionDataSource *)arg0;
- (void)dealloc;
- (void)setDelegate:(<ABPersonTableTinyActionDelegate> *)arg0;
- (void)layoutSubviews;
- (ABPersonTableTinyActionCell *)initWithStyle:(int)arg0 reuseIdentifier:(NSString *)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (<ABPersonTableTinyActionDelegate> *)delegate;
- (void)setBackgroundView:(UIView *)arg0;
- (unsigned int)actionsCount;

@end
