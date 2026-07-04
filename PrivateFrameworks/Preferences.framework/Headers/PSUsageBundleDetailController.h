/* Runtime dump - PSUsageBundleDetailController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSUsageBundleDetailController : PSEditableListController

+ (void)setupSpecifier:(id)arg0 forMediaGroups:(id)arg1;
+ (PSUsageBundleDetailController *)mediaGroups;

- (void)dealloc;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)loadView;
- (NSArray *)specifiers;
- (char)canBeShownFromSuspendedState;
- (char)needsToShowToolbarInPrefsAppRoot;
- (void)updateSizesAfterDeletingSize:(float)arg0 shouldPop:(char)arg1;
- (id)sizeForSpecifier:(id)arg0;
- (NSObject *)size:(struct CGSize)arg0;

@end
