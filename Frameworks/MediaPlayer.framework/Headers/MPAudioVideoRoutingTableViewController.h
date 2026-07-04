/* Runtime dump - MPAudioVideoRoutingTableViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioVideoRoutingTableViewController : UITableViewController <MPAVRoutingControllerDelegate>
{
    int _airPlayPasswordAlertDidAppearToken;
    char _airPlayPasswordAlertDidAppearTokenIsValid;
    int _airPlayPasswordAlertDidCancelToken;
    MPAVRoutingController * _routingController;
    unsigned int _avItemType;
    char _displayMirroringRoutes;
    NSArray * _displayedRoutes;
    char _wirelessDisplayCapableRouteIsPicked;
    char _wirelessDisplayRouteIsPendingAsPicked;
}

@property (readonly, nonatomic) MPAVRoutingController * routingController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MPAudioVideoRoutingTableViewController *)routesPreferringMirroring;

- (MPAVRoutingController *)routingController;
- (void)_mirroringSwitchValueDidChange:(NSDictionary *)arg0;
- (MPAVRoute *)_pickedRoute;
- (void)routingControllerAvailableRoutesDidChange:(NSDictionary *)arg0;
- (NSArray *)_displayedRoutes;
- (NSArray *)_availableRoutes;
- (void)_debugButtonAction:(NSObject *)arg0;
- (char)_wirelessDisplayCapableRouteIsPicked;
- (NSObject *)_effectivePickedRouteReturningActualPickedRouteType:(int *)arg0;
- (MPAudioVideoRoutingTableViewController *)initWithType:(unsigned int)arg0 displayMirroringRoutes:(char)arg1;
- (void)dealloc;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)viewDidAppear:(char)arg0;
- (void).cxx_destruct;

@end
