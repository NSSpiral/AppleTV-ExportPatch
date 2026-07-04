/* Runtime dump - WKAirPlayRoutePicker
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKAirPlayRoutePicker : UIView <UIPopoverControllerDelegate>
{
    struct RetainPtr<MPAVRoutingController> _routingController;
    struct RetainPtr<MPAudioVideoRoutingPopoverController> _popoverController;
    struct RetainPtr<MPAudioVideoRoutingActionSheet> _actionSheet;
    WKContentView * _view;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (WKAirPlayRoutePicker *)initWithView:(WKContentView *)arg0;
- (void)show:(char)arg0 fromRect:(struct CGRect)arg1;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void).cxx_construct;
- (void)_windowWillRotate:(id)arg0;
- (void).cxx_destruct;
- (void)_dismissAirPlayRoutePickerIPad;
- (void)_windowDidRotate:(id)arg0;
- (void)_presentAirPlayPopoverAnimated:(char)arg0 fromRect:(struct CGRect)arg1;
- (void)showAirPlayPickerIPad:(unsigned int)arg0 fromRect:(struct CGRect)arg1;
- (void)showAirPlayPickerIPhone:(unsigned int)arg0;

@end
