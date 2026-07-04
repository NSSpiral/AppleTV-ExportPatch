/* Runtime dump - UIWebPlaybackTargetPicker
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebPlaybackTargetPicker : UIView <UIPopoverControllerDelegate>
{
    MPAVRoutingController * _routingController;
    MPAudioVideoRoutingPopoverController * _popoverController;
    MPAudioVideoRoutingActionSheet * _actionSheet;
    UIWebDocumentView * _delegate;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(UIWebDocumentView *)arg0;
- (void)show:(char)arg0 fromRect:(struct CGRect)arg1;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void)_windowWillRotate:(id)arg0;
- (void)_dismissAirPlayRoutePickerIPad;
- (void)_windowDidRotate:(id)arg0;
- (void)_presentAirPlayPopoverAnimated:(char)arg0 fromRect:(struct CGRect)arg1;
- (void)showAirPlayPickerIPad:(unsigned int)arg0 fromRect:(struct CGRect)arg1;
- (void)showAirPlayPickerIPhone:(unsigned int)arg0;

@end
