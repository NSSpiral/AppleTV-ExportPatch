/* Runtime dump - MKPlaceActionsViewController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlaceActionsViewController : UITableViewController <MKStackingViewControllerPreferredSizeUse>
{
    char _showContactActions;
    char _showRemovePin;
    char _showReportAProblem;
    char _showSharing;
    char _showCreateReminder;
    char _showSimulateLocation;
    char _showOpenInSkyline;
    NSArray * _actions;
    <MKPlaceActionsViewControllerDelegate> * _actionDelegate;
    MKMapItem * _mapItem;
}

@property (retain, nonatomic) MKMapItem * mapItem;
@property (weak, nonatomic) <MKPlaceActionsViewControllerDelegate> * actionDelegate;
@property (nonatomic) char showContactActions;
@property (nonatomic) char showRemovePin;
@property (nonatomic) char showReportAProblem;
@property (nonatomic) char showSharing;
@property (nonatomic) char showCreateReminder;
@property (nonatomic) char showSimulateLocation;
@property (nonatomic) char showOpenInSkyline;
@property (retain, nonatomic) NSArray * actions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char requiresPreferredContentSizeInStackingView;

- (void)setShowContactActions:(char)arg0;
- (char)showContactActions;
- (void)setShowRemovePin:(char)arg0;
- (void)setShowSharing:(char)arg0;
- (void)setShowReportAProblem:(char)arg0;
- (void)setShowCreateReminder:(char)arg0;
- (void)setShowSimulateLocation:(char)arg0;
- (void)setShowOpenInSkyline:(char)arg0;
- (void)setActionDelegate:(<MKPlaceActionsViewControllerDelegate> *)arg0;
- (void)updateActions;
- (char)showRemovePin;
- (char)showReportAProblem;
- (char)showCreateReminder;
- (char)showSimulateLocation;
- (char)showOpenInSkyline;
- (char)requiresPreferredContentSizeInStackingView;
- (char)showSharing;
- (<MKPlaceActionsViewControllerDelegate> *)actionDelegate;
- (MKPlaceActionsViewController *)init;
- (void)tableView:(UITableView *)arg0 willDisplayCell:(UITableViewCell *)arg1 forRowAtIndexPath:(NSIndexPath *)arg2;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (int)numberOfSectionsInTableView:(UITableView *)arg0;
- (NSArray *)actions;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (MKMapItem *)mapItem;
- (void)setMapItem:(MKMapItem *)arg0;
- (void)setActions:(NSArray *)arg0;

@end
