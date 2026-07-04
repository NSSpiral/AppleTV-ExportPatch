/* Runtime dump - MKPlaceNearbyAppsViewController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceNearbyAppsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse, MKPlaceViewNearbyAppsCellDelegate>
{
    <MKPlaceNearbyAppsViewControllerDelegate> * _nearbyAppsDelegate;
    NSArray * _storeItems;
}

@property (weak, nonatomic) <MKPlaceNearbyAppsViewControllerDelegate> * nearbyAppsDelegate;
@property (retain, nonatomic) NSArray * storeItems;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char requiresPreferredContentSizeInStackingView;

- (void)contentSizeDidChange;
- (void)setNearbyAppsDelegate:(<MKPlaceNearbyAppsViewControllerDelegate> *)arg0;
- (void)setStoreItems:(NSArray *)arg0;
- (char)requiresPreferredContentSizeInStackingView;
- (NSArray *)storeItems;
- (void)nearbyAppsCell:(MKPlaceViewNearbyAppsCell *)arg0 openAppWithBundleID:(NSString *)arg1 storeID:(NSNumber *)arg2;
- (void)nearbyAppsCell:(MKPlaceViewNearbyAppsCell *)arg0 showStorePageWithURL:(NSString *)arg1 storeID:(NSNumber *)arg2;
- (<MKPlaceNearbyAppsViewControllerDelegate> *)nearbyAppsDelegate;
- (void)dealloc;
- (MKPlaceNearbyAppsViewController *)init;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void).cxx_destruct;

@end
