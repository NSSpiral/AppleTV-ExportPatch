/* Runtime dump - MPAudioRoutingPicker
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioRoutingPicker : UIAlertView <MPAVRoutingControllerDelegate, UITableViewDataSource, UITableViewDelegate>
{
    MPAVRoutingController * _routingController;
    char _ignoringInteractionEvents;
    NSArray * _routes;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)routingControllerAvailableRoutesDidChange:(NSDictionary *)arg0;
- (MPAudioRoutingPicker *)initWithAVPlayer:(AVPlayer *)arg0;
- (char)_pickRouteAtIndex:(unsigned int)arg0 withPassword:(NSString *)arg1;
- (void)setAVPlayer:(AVPlayer *)arg0;
- (void)dealloc;
- (NSObject *)tableView:(UITableView *)arg0 willSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (void)tableView:(UITableView *)arg0 didSelectRowAtIndexPath:(NSIndexPath *)arg1;
- (int)tableView:(UITableView *)arg0 numberOfRowsInSection:(int)arg1;
- (UITableViewCell *)tableView:(UITableView *)arg0 cellForRowAtIndexPath:(NSIndexPath *)arg1;
- (void)willMoveToSuperview:(UIView *)arg0;
- (char)requiresPortraitOrientation;
- (void).cxx_destruct;

@end
