/* Runtime dump - PSEditableListController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSEditableListController : PSListController
{
    char _editable;
    char _editingDisabled;
}

- (PSEditableListController *)init;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)suspend;
- (void)viewWillAppear:(char)arg0;
- (void)setEditable:(char)arg0;
- (char)editable;
- (void)showController:(BRController *)arg0 animate:(char)arg1;
- (void)didLock;
- (void)editDoneTapped;
- (NSObject *)_editButtonBarItem;
- (void)_updateNavigationBar;
- (void)_setEditable:(char)arg0 animated:(char)arg1;
- (char)performDeletionActionForSpecifier:(id)arg0;
- (void)setEditingButtonHidden:(char)arg0 animated:(char)arg1;
- (void)setEditButtonEnabled:(char)arg0;

@end
