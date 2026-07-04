/* Runtime dump - MPAudioVideoRoutingActionSheet
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAudioVideoRoutingActionSheet : UIActionSheet <UIActionSheetDelegate>
{
    int _airPlayPasswordAlertDidAppearToken;
    char _airPlayPasswordAlertDidAppearTokenIsValid;
    MPAVRoutingController * _routingController;
    unsigned int _avItemType;
    id _completionHandler;
    UIViewController * _viewControllerForActionSheet;
    UIWindow * _windowForActionSheet;
    char _shouldPauseAfterDismissing;
    NSArray * _displayedRoutes;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSArray *)_availableRoutes;
- (char)_isDeviceVideoRoute:(id)arg0;
- (MPAudioVideoRoutingActionSheet *)initWithType:(unsigned int)arg0 routingController:(MPAVRoutingController *)arg1;
- (void)_debugButtonAction:(NSObject *)arg0;
- (void)showWithValidInterfaceOrientationMaskBlock:(id /* block */)arg0 windowLevel:(/* block */ id)arg1 completionHandler:(float)arg2;
- (void)showFromRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 animated:(char)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)showWithValidInterfaceOrientationsBlock:(id /* block */)arg0 completionHandler:(/* block */ id)arg1;
- (void)showInPopoverFromRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 backgroundStyle:(int)arg2 animated:(char)arg3 completionHandler:(int)arg4;
- (void)dealloc;
- (void)layoutSubviews;
- (void)actionSheet:(UIActionSheet *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)actionSheet:(UIActionSheet *)arg0 didDismissWithButtonIndex:(int)arg1;
- (MPAudioVideoRoutingActionSheet *)initWithType:(unsigned int)arg0;
- (void).cxx_destruct;
- (void)showWithValidInterfaceOrientationMaskBlock:(id /* block */)arg0 completionHandler:(/* block */ id)arg1;

@end
