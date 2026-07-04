/* Runtime dump - UIInputSwitcherTableView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIInputSwitcherTableView : UITableView
{
    UIKeyboardMenuView * _menu;
}

@property (nonatomic) UIKeyboardMenuView * menu;

- (void)selectRowAtIndexPath:(NSIndexPath *)arg0 animated:(char)arg1 scrollPosition:(int)arg2;
- (void)deselectRowAtIndexPath:(NSIndexPath *)arg0 animated:(char)arg1;
- (UIKeyboardMenuView *)menu;
- (void)setMenu:(UIKeyboardMenuView *)arg0;

@end
