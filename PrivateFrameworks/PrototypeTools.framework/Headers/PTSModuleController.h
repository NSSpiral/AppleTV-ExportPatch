/* Runtime dump - PTSModuleController
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSModuleController : UITableViewController <PTSModuleObserver, PTSRowTableViewCellDelegate>
{
    PTSModule * _module;
}

@property (readonly, nonatomic) _UISettings * settings;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 shouldIndentWhileEditingRowAtIndexPath:(NSIndexPath *)arg1;
- (NSObject *)tableView:(UITableView *)arg0 targetIndexPathForMoveFromRowAtIndexPath:(NSIndexPath *)arg1 toProposedIndexPath:(NSIndexPath *)arg2;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (char)tableView:(UITableView *)arg0 canEditRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 canMoveRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 moveRowAtIndexPath:(NSIndexPath *)arg1 toIndexPath:(NSIndexPath *)arg2;
- (_UISettings *)settings;
- (void)viewDidDisappear:(char)arg0;
- (PTSModuleController *)initWithSettings:(_UISettings *)arg0;
- (void).cxx_destruct;
- (void)module:(PTSModule *)arg0 didInsertRows:(NSArray *)arg1 deleteRows:(NSArray *)arg2;
- (void)moduleDidReload:(id)arg0;
- (void)module:(PTSModule *)arg0 didInsertSections:(NSArray *)arg1 deleteSections:(NSArray *)arg2;
- (PTSModuleController *)initWithSettings:(_UISettings *)arg0 presentingRow:(id)arg1;
- (void)updateToolbarItems:(char)arg0;
- (NSArray *)additionalToolbarItems;
- (void)showActionsForRowTableViewCell:(NSObject *)arg0;

@end
