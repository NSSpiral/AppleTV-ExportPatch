/* Runtime dump - UITableViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    int _tableViewStyle;
    id _keyboardSupport;
    id _staticDataSource;
    struct ? _tableViewControllerFlags;
    _UIFilteredDataSource * _filteredDataSource;
    int _filteredDataType;
}

@property (retain, nonatomic) UITableViewDataSource * staticDataSource;
@property (retain, nonatomic) UITableView * tableView;
@property (nonatomic) char clearsSelectionOnViewWillAppear;
@property (retain, nonatomic) UIRefreshControl * refreshControl;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (UITableViewController *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (UITableViewController *)init;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (float)tableView:(UITableView *)arg0 heightForHeaderInSection:(int)arg1;
- (float)tableView:(UITableView *)arg0 heightForFooterInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 viewForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 viewForFooterInSection:(int)arg1;
- (void)tableView:(UITableView *)arg0 willBeginEditingRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didEndEditingRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 indentationLevelForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSString *)tableView:(UITableView *)arg0 titleForHeaderInSection:(int)arg1;
- (NSObject *)tableView:(UITableView *)arg0 titleForFooterInSection:(int)arg1;
- (void)_willChangeToIdiom:(int)arg0 onScreen:(NSObject *)arg1;
- (void)setTableView:(UITableView *)arg0;
- (void)setEditing:(char)arg0 animated:(char)arg1;
- (UITableViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (UITableViewController *)initWithStyle:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (char)_viewControllerWasSelected;
- (UITableView *)tableView;
- (void)_adjustTableForKeyboardInfo:(NSDictionary *)arg0;
- (void)setClearsSelectionOnViewWillAppear:(char)arg0;
- (NSObject *)_existingTableView;
- (void)_applyDefaultDataSourceToTable:(id)arg0;
- (void)_refreshFilteredDataSourceFilterTypeForScreen:(NSObject *)arg0;
- (int)_resolvedDataSourceFilterTypeForScreen:(NSObject *)arg0;
- (char)clearsSelectionOnViewWillAppear;
- (void)setRefreshControl:(UIRefreshControl *)arg0;
- (UIRefreshControl *)refreshControl;
- (int)_filteredDataType;
- (void)_setFilteredDataType:(int)arg0;
- (UITableViewDataSource *)_staticDataSource;
- (void)_setStaticDataSource:(NSObject *)arg0;

@end
