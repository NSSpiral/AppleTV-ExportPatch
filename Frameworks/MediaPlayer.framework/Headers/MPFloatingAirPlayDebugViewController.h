/* Runtime dump - MPFloatingAirPlayDebugViewController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPFloatingAirPlayDebugViewController : UINavigationController <AirPlayDiagnosticsFullscreenControllerDelegate>
{
    UIWindow * _floatingWindow;
    char _presentedAnimated;
    AirPlayDiagnosticsFullscreenController * _airPlayDiagsController;
}

@property (readonly, nonatomic) AirPlayDiagnosticsFullscreenController * airPlayDiagsController;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)presentFromFloatingWindowAnimated:(char)arg0 completion:(id /* block */)arg1;
- (void)_destroyFloatingWindow;
- (void)airPlayDiagnosticsContentViewController:(BRController *)arg0 didComplete:(char)arg1;
- (AirPlayDiagnosticsFullscreenController *)airPlayDiagsController;
- (char)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void).cxx_destruct;

@end
