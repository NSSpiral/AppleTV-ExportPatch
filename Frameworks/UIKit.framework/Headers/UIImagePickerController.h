/* Runtime dump - UIImagePickerController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIImagePickerController : UINavigationController <NSCoding>
{
    int _sourceType;
    id _image;
    struct CGRect _cropRect;
    NSArray * _mediaTypes;
    NSMutableDictionary * _properties;
    int _previousStatusBarStyle;
    char _previousStatusBarHidden;
    struct ? _imagePickerFlags;
}

@property (nonatomic) <UINavigationControllerDelegate><UIImagePickerControllerDelegate> * delegate;
@property (nonatomic) int sourceType;
@property (copy, nonatomic) NSArray * mediaTypes;
@property (nonatomic) char allowsEditing;
@property (nonatomic) char allowsImageEditing;
@property (nonatomic) double videoMaximumDuration;
@property (nonatomic) int videoQuality;
@property (nonatomic) char showsCameraControls;
@property (retain, nonatomic) UIView * cameraOverlayView;
@property (nonatomic) struct CGAffineTransform cameraViewTransform;
@property (nonatomic) int cameraCaptureMode;
@property (nonatomic) int cameraDevice;
@property (nonatomic) int cameraFlashMode;

+ (NSObject *)aaui_fixedCropRect:(NSObject *)arg0 forOriginalImage:(UIImage *)arg1;
+ (char)isSourceTypeAvailable:(int)arg0;
+ (char)_isMediaTypeAvailable:(id)arg0 forSource:(int)arg1;
+ (char)isCameraDeviceAvailable:(int)arg0;
+ (char)_reviewCapturedItems;
+ (NSObject *)availableMediaTypesForSourceType:(int)arg0;
+ (NSObject *)availableCaptureModesForCameraDevice:(int)arg0;
+ (char)isFlashAvailableForCameraDevice:(int)arg0;

- (void)dealloc;
- (UIImagePickerController *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIImagePickerController *)init;
- (unsigned int)supportedInterfaceOrientations;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)_populateArchivedChildViewControllers:(id)arg0;
- (void)viewWillUnload;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (char)_isSupportedInterfaceOrientation:(int)arg0;
- (struct CGSize)_adjustedContentSizeForPopover:(struct CGSize)arg0;
- (NSObject *)_valueForProperty:(NSString *)arg0;
- (int)sourceType;
- (void)_setAllowsImageEditing:(char)arg0;
- (char)_allowsImageEditing;
- (void)setCameraCaptureMode:(int)arg0;
- (void)_setupControllersForCurrentSourceType;
- (void)_updateCameraCaptureMode;
- (void)_setupControllersForCurrentMediaTypes;
- (void)_setValue:(NSValue *)arg0 forProperty:(NSString *)arg1;
- (void)_initializeProperties;
- (char)_sourceTypeIsCamera;
- (NSObject *)_cameraViewController;
- (char)_isCameraCaptureModeValid:(int)arg0;
- (void)_removeAllChildren;
- (void)setSourceType:(int)arg0;
- (NSObject *)_createInitialController;
- (void)_autoDismiss;
- (void)_imagePickerDidCancel;
- (void)_imagePickerDidCompleteWithInfo:(NSDictionary *)arg0;
- (NSData *)_initWithSourceImageData:(NSData *)arg0 cropRect:(struct CGRect)arg1;
- (void)setMediaTypes:(NSArray *)arg0;
- (NSArray *)mediaTypes;
- (char)_allowsMultipleSelection;
- (void)_setAllowsMultipleSelection:(char)arg0;
- (char)allowsImageEditing;
- (void)setAllowsImageEditing:(char)arg0;
- (char)allowsEditing;
- (void)setAllowsEditing:(char)arg0;
- (double)videoMaximumDuration;
- (void)setVideoMaximumDuration:(double)arg0;
- (int)videoQuality;
- (void)setVideoQuality:(int)arg0;
- (void)_setProperties:(NSDictionary *)arg0;
- (NSDictionary *)_properties;
- (void)_setImagePickerSavingOptions:(unsigned int)arg0;
- (unsigned int)_imagePickerSavingOptions;
- (char)showsCameraControls;
- (void)setShowsCameraControls:(char)arg0;
- (UIView *)cameraOverlayView;
- (void)setCameraOverlayView:(UIView *)arg0;
- (struct CGAffineTransform)cameraViewTransform;
- (void)setCameraViewTransform:(struct CGAffineTransform)arg0;
- (void)takePicture;
- (char)startVideoCapture;
- (void)stopVideoCapture;
- (int)cameraDevice;
- (void)setCameraDevice:(int)arg0;
- (int)cameraCaptureMode;
- (int)cameraFlashMode;
- (void)setCameraFlashMode:(int)arg0;
- (char)_didRevertStatusBar;
- (void)_imagePickerDidCompleteWithInfoArray:(NSArray *)arg0;

@end
