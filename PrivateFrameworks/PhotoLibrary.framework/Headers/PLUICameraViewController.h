/* Runtime dump - PLUICameraViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLUICameraViewController : CAMCameraViewController <UIImagePickerCameraViewController>
{
    int _previousStatusBarStyle;
    int _newStatusBarStyle;
    struct CGAffineTransform _previewViewTransform;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (PLUICameraViewController *)init;
- (int)preferredStatusBarStyle;
- (char)prefersStatusBarHidden;
- (int)preferredStatusBarUpdateAnimation;
- (char)shouldAutorotate;
- (unsigned int)supportedInterfaceOrientations;
- (void)viewWillTransitionToSize:(struct CGSize)arg0 withTransitionCoordinator:(NSObject *)arg1;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (char)_showsCameraControls;
- (void)_setShowsCameraControls:(char)arg0;
- (UIView *)_cameraOverlayView;
- (void)_setCameraOverlayView:(UIView *)arg0;
- (struct CGAffineTransform)_cameraViewTransform;
- (void)_setCameraViewTransform:(struct CGAffineTransform)arg0;
- (void)_takePicture;
- (char)_startVideoCapture;
- (void)_stopVideoCapture;
- (int)_cameraDevice;
- (void)_setCameraDevice:(int)arg0;
- (int)_cameraCaptureMode;
- (void)_setCameraCaptureMode:(int)arg0;
- (int)_cameraFlashMode;
- (void)_setCameraFlashMode:(int)arg0;
- (int)_imagePickerStatusBarStyle;
- (void)_setImagePickerMediaTypes:(NSArray *)arg0;
- (char)_displaysFullScreen;
- (void)setAllowsEditing:(char)arg0;
- (void)_applicationWillEnterForeground:(NSNotification *)arg0;
- (char)cameraViewShouldShowPreviewAfterSelection:(id)arg0;
- (void)_editabilityChanged:(NSNotification *)arg0;
- (CAMCameraView *)_cameraView;
- (void)setWantsImageData:(char)arg0;
- (void)_setCameraCaptureMode:(int)arg0 device:(int)arg1;
- (void)_setAllowsStillFromVideoMode:(char)arg0;
- (void)_windowOrientationWillChange:(NSDictionary *)arg0;
- (void)_adjustContentSizeForOrientation:(int)arg0;
- (void)_updateCameraViewForPopover;
- (void)cameraViewCancelled:(id)arg0;
- (void)cameraViewWillRetakePhoto:(UIImage *)arg0;
- (void)cameraViewWillPreviewPhoto:(UIImage *)arg0;
- (void)cameraView:(CAMCameraView *)arg0 photoSaved:(id)arg1;
- (void)cameraView:(CAMCameraView *)arg0 videoSavedToPath:(NSString *)arg1 editingInfo:(NSDictionary *)arg2;

@end
