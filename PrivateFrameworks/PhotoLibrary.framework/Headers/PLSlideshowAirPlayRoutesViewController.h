/* Runtime dump - PLSlideshowAirPlayRoutesViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLSlideshowAirPlayRoutesViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>
{
    UIView * _containerView;
    UITableView * _table;
    NSArray * _airplayRoutes;
    unsigned int _selectedRouteIndex;
}

@property (nonatomic) unsigned int selectedRouteIndex;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)loadView;
- (struct CGSize)contentSizeForViewInPopoverView;
- (unsigned int)selectedRouteIndex;
- (PLSlideshowAirPlayRoutesViewController *)initWithAirplayRoutes:(NSArray *)arg0 selectedRouteIndex:(unsigned int)arg1;
- (void)setSelectedRouteIndex:(unsigned int)arg0;

@end
