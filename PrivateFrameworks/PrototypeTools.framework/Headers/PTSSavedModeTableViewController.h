/* Runtime dump - PTSSavedModeTableViewController
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSSavedModeTableViewController : NSObject <UITextFieldDelegate, UITableViewDataSource, UITableViewDelegate, _UISettingsGroupObserver>
{
    UITableView * _tableView;
    _UISettingsGroup * _settingsGroup;
    unsigned int _modalEditingIndex;
}

@property (retain, nonatomic) UITableView * tableView;
@property (weak, nonatomic) _UISettingsGroup * settingsGroup;
@property (nonatomic) unsigned int modalEditingIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (PTSSavedModeTableViewController *)sharedInstance;
+ (PTSSavedModeTableViewController *)sharedInstanceIfExists;

- (PTSSavedModeTableViewController *)init;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 accessoryButtonTappedForRowWithIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 editingStyleForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (char)tableView:(UITableView *)arg0 canEditRowAtIndexPath:(NSIndexPath *)arg1;
- (char)tableView:(UITableView *)arg0 canMoveRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 commitEditingStyle:(int)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 moveRowAtIndexPath:(NSIndexPath *)arg1 toIndexPath:(NSIndexPath *)arg2;
- (void)setTableView:(UITableView *)arg0;
- (void)textFieldDidEndEditing:(UITextField *)arg0;
- (char)textFieldShouldReturn:(UITextField *)arg0;
- (void)settingsGroup:(_UISettingsGroup *)arg0 didInsertSettings:(NSDictionary *)arg1 atIndex:(unsigned int)arg2;
- (void)settingsGroup:(_UISettingsGroup *)arg0 didRemoveSettings:(NSDictionary *)arg1 atIndex:(unsigned int)arg2;
- (void)settingsGroup:(_UISettingsGroup *)arg0 didMoveSettings:(NSDictionary *)arg1 fromIndex:(unsigned int)arg2 toIndex:(unsigned int)arg3;
- (UITableView *)tableView;
- (void).cxx_destruct;
- (_UISettingsGroup *)settingsGroup;
- (void)setSettingsGroup:(_UISettingsGroup *)arg0;
- (void)ensureSelectionWithPreferredIndex:(unsigned int)arg0;
- (void)setModalEditingIndex:(unsigned int)arg0;
- (unsigned int)modalEditingIndex;

@end
