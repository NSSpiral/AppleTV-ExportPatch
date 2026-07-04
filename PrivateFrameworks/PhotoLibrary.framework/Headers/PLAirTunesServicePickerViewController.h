/* Runtime dump - PLAirTunesServicePickerViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAirTunesServicePickerViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>
{
    id _delegate;
    UITableView * _table;
    NSDictionary * _selectedRoute;
    NSArray * _availableRoutes;
}

@property (nonatomic) <PLAirTunesServicePickerViewControllerDelegate> * delegate;
@property (retain, nonatomic) NSArray * availableRoutes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSArray *)availableRoutes;
- (void)dealloc;
- (void)setDelegate:(<PLAirTunesServicePickerViewControllerDelegate> *)arg0;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (<PLAirTunesServicePickerViewControllerDelegate> *)delegate;
- (void)loadView;
- (struct CGSize)contentSizeForViewInPopoverView;
- (void)viewDidAppear:(char)arg0;
- (void)_setCell:(NSObject *)arg0 checked:(char)arg1;
- (int)_indexofRouteWithRouteID:(NSData *)arg0;
- (PLAirTunesServicePickerViewController *)initWithAvailableAirplayRoutes:(id)arg0 previouslySelectedRoute:(id)arg1;
- (void)setAvailableRoutes:(NSArray *)arg0;

@end
