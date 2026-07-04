/* Runtime dump - UIInputSwitcherTableCellBackgroundView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcherTableCellBackgroundView : UIView
{
    UITableView * _tableView;
    UITableViewCell * _cell;
    UIKeyboardMenuView * _menu;
}

@property (nonatomic) UITableView * tableView;
@property (nonatomic) UITableViewCell * cell;
@property (nonatomic) UIKeyboardMenuView * menu;

- (void)drawRect:(struct CGRect)arg0;
- (void)setTableView:(UITableView *)arg0;
- (UITableView *)tableView;
- (UITableViewCell *)cell;
- (void)setCell:(UITableViewCell *)arg0;
- (UIKeyboardMenuView *)menu;
- (UIInputSwitcherTableCellBackgroundView *)initWithTableView:(UITableView *)arg0 cell:(UITableViewCell *)arg1;
- (void)setMenu:(UIKeyboardMenuView *)arg0;

@end
