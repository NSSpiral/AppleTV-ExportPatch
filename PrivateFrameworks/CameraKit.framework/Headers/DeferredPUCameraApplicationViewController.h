/* Runtime dump - DeferredPUCameraApplicationViewController
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface DeferredPUCameraApplicationViewController : CAMApplicationViewController
{
    CAMCameraRollSpec * _spec;
    DeferredFrameworkLoader * _deferredLoader;
}

@property (retain, nonatomic) CAMCameraRollSpec * spec;
@property (retain, nonatomic) DeferredFrameworkLoader * deferredLoader;

- (char)definesPresentationContext;
- (void)presentViewController:(BRController *)arg0 animated:(char)arg1 completion:(id /* block */)arg2;
- (NSObject *)navigationController:(UINavigationController *)arg0 animatorForOperation:(int)arg1 fromViewController:(BRController *)arg2 toViewController:(BRController *)arg3;
- (NSObject *)navigationController:(UINavigationController *)arg0 interactionControllerUsingAnimator:(id)arg1;
- (char)_navigationControllerShouldCrossFadeBottomBars:(id)arg0;
- (void).cxx_destruct;
- (CAMCameraRollSpec *)spec;
- (id)newAlbumNavigationControllerForCameraRoll:(id)arg0;
- (void)prepareAlbumNavigationControllerForReuse:(id)arg0 withCameraRoll:(CAMCameraRoll *)arg1;
- (void)reloadAlbumNavigationController:(BRController *)arg0 withCameraRoll:(CAMCameraRoll *)arg1;
- (NSObject *)_initWithSessionID:(NSObject *)arg0 usesCameraLocationBundleID:(char)arg1 startPreviewImmediately:(char)arg2;
- (DeferredPUCameraApplicationViewController *)initForCurrentPlatformWithSessionID:(NSObject *)arg0 startPreviewImmediately:(char)arg1;
- (DeferredPUCameraApplicationViewController *)initForCurrentPlatformWithSessionID:(NSObject *)arg0 usesCameraLocationBundleID:(char)arg1 startPreviewImmediately:(char)arg2;
- (void)setSpec:(CAMCameraRollSpec *)arg0;
- (DeferredFrameworkLoader *)deferredLoader;
- (void)setDeferredLoader:(DeferredFrameworkLoader *)arg0;

@end
