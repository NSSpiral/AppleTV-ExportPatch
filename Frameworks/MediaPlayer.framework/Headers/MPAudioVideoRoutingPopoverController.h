/* Runtime dump - MPAudioVideoRoutingPopoverController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioVideoRoutingPopoverController : UIPopoverController <MPAVRoutingViewControllerDelegate>
{
    int _airPlayPasswordAlertDidAppearToken;
    char _airPlayPasswordAlertDidAppearTokenIsValid;
    char _mirroringIncluded;
    MPAVRoutingViewController * _routingViewController;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (MPAVRoutingController *)routingController;
- (void)routingViewController:(MPAVRoutingViewController *)arg0 didPickRoute:(id)arg1;
- (void)routingViewControllerDidUpdateContents:(id)arg0;
- (MPAudioVideoRoutingPopoverController *)initWithType:(unsigned int)arg0 includeMirroring:(char)arg1;
- (void)dealloc;
- (MPAudioVideoRoutingPopoverController *)initWithType:(unsigned int)arg0;
- (MPAudioVideoRoutingPopoverController *)initWithContentViewController:(BRController *)arg0;
- (UIWebSelectTableViewController *)_tableViewController;
- (void).cxx_destruct;

@end
