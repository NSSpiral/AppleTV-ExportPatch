/* Runtime dump - UIMoreListController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMoreListController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UITableView * _table;
    char _allowsCustomizing;
    char _disableCustomizing;
    char _hideNavigationBar;
    NSArray * _moreViewControllers;
    UIMoreListCellLayoutManager * _layoutManager;
    UIBarButtonItem * _moreEditButtonItem;
    char _moreViewControllersChanged;
}

@property (retain, nonatomic) NSArray * moreViewControllers;
@property (nonatomic) char allowsCustomizing;
@property (nonatomic) char moreViewControllersChanged;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (UIMoreListController *)init;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (void)encodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)decodeRestorableStateWithCoder:(NSCoder *)arg0;
- (void)_willChangeToIdiom:(int)arg0 onScreen:(NSObject *)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (char)_isSupportedInterfaceOrientation:(int)arg0;
- (UITabBarItem *)tabBarItem;
- (char)_viewControllerWasSelected;
- (void)setMoreViewControllers:(NSArray *)arg0;
- (NSArray *)moreViewControllers;
- (void)setAllowsCustomizing:(char)arg0;
- (void)setMoreViewControllersChanged:(char)arg0;
- (UITableView *)table;
- (char)allowsCustomizing;
- (char)moreViewControllersChanged;
- (void)_updateEditButton;
- (void)_layoutCells;
- (NSObject *)_targetNavigationController;

@end
