/* Runtime dump - MPAVRoutingViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVRoutingViewController : UIViewController <MPAVRoutingControllerDelegate, MPAVRoutingTableViewCellDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView * _tableView;
    NSArray * _cachedRoutes;
    MPWeakTimer * _updateTimer;
    MPAVRoutingController * _routingController;
    UIColor * _tableCellsBackgroundColor;
    UIColor * _tableCellsContentColor;
    int _airPlayPasswordAlertDidAppearToken;
    int _airPlayPasswordAlertDidCancelToken;
    char _airPlayPasswordAlertDidAppearTokenIsValid;
    char _cachedShowAirPlayDebugButton;
    char _hasCachedAirPlayDebugButtonStatus;
    char _needsDisplayedRoutesUpdate;
    char _allowMirroring;
    unsigned int _style;
    <MPAVRoutingViewControllerDelegate> * _delegate;
    unsigned int _avItemType;
}

@property (readonly, nonatomic) unsigned int style;
@property (weak, nonatomic) <MPAVRoutingViewControllerDelegate> * delegate;
@property (nonatomic) unsigned int avItemType;
@property (nonatomic) char allowMirroring;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)routingCell:(NSObject *)arg0 mirroringSwitchValueDidChange:(char)arg1;
- (void)routingControllerAvailableRoutesDidChange:(NSDictionary *)arg0;
- (void)_serviceWillPresentAuthenticationPromptNotification:(NSNotification *)arg0;
- (id)_routesWhereMirroringIsPreferred;
- (void)_setNeedsDisplayedRoutesUpdate;
- (float)_tableViewHeightAccordingToDataSource;
- (unsigned int)_tableViewNumberOfRows;
- (unsigned int)_routeIndexForTableViewIndex:(unsigned int)arg0;
- (char)_shouldShowAirPlayDebugButton;
- (unsigned int)_debugButtonTableViewIndex;
- (id)_displayedRoutes;
- (char)_shouldShowMirroringCellForRoute:(id)arg0;
- (void)_showAirPlayDebug;
- (void)_pickRoute:(id)arg0;
- (unsigned int)_tableViewIndexForRouteIndex:(unsigned int)arg0;
- (float)_normalCellHeight;
- (float)_expandedCellHeight;
- (float)_tableViewHeaderViewHeight;
- (float)_tableViewFooterViewHeight;
- (void)_updateDisplayedRoutes;
- (void)_setupUpdateTimerIfNecessary;
- (void)setAVItemType:(unsigned int)arg0;
- (UIColor *)_tableCellsBackgroundColor;
- (UIColor *)_tableCellsContentColor;
- (void)_setTableCellsBackgroundColor:(UIColor *)arg0;
- (void)_setTableCellsContentColor:(UIColor *)arg0;
- (unsigned int)avItemType;
- (char)allowMirroring;
- (void)setAllowMirroring:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(<MPAVRoutingViewControllerDelegate> *)arg0;
- (float)tableView:(UITableView *)arg0 heightForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (NSObject *)tableView:(UITableView *)arg0 titleForFooterInSection:(int)arg1;
- (<MPAVRoutingViewControllerDelegate> *)delegate;
- (unsigned int)style;
- (void)viewWillLayoutSubviews;
- (UITableView *)_tableView;
- (struct CGSize)preferredContentSize;
- (MPAVRoutingViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (MPAVRoutingViewController *)initWithStyle:(unsigned int)arg0;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (void).cxx_destruct;

@end
