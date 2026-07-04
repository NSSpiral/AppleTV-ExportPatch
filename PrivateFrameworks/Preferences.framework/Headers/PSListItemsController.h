/* Runtime dump - PSListItemsController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSListItemsController : PSListController
{
    int _rowToSelect;
    char _deferItemSelection;
    char _restrictionList;
    PSSpecifier * _lastSelectedSpecifier;
}

- (void)dealloc;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)suspend;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (NSArray *)specifiers;
- (void)prepareSpecifiersMetadata;
- (void)didLock;
- (void)scrollToSelectedCell;
- (void)setValueForSpecifier:(id)arg0 defaultValue:(NSString *)arg1;
- (void)setRowToSelect;
- (void)listItemSelected:(id)arg0;
- (void)_addStaticText:(NSString *)arg0;
- (NSObject *)itemsFromParent;
- (NSObject *)itemsFromDataSource;
- (char)isRestrictionList;
- (void)setIsRestrictionList:(char)arg0;

@end
