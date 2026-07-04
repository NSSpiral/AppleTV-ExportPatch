/* Runtime dump - CAMCameraSpec
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMCameraSpec : NSObject

@property (readonly, nonatomic) char shouldCreateFlashButton;
@property (readonly, nonatomic) char shouldCreateElapsedTimeView;
@property (readonly, nonatomic) char shouldCreateFlipButton;
@property (readonly, nonatomic) char shouldCreateStillDuringVideo;
@property (readonly, nonatomic) char shouldCreateImageWell;
@property (readonly, nonatomic) char shouldCreateShutterButton;
@property (readonly, nonatomic) char shouldCreateFiltersButton;
@property (readonly, nonatomic) char shouldCreateModeDial;
@property (readonly, nonatomic) char shouldCreateHDRButton;
@property (readonly, nonatomic) char shouldCreatePanoramaView;
@property (readonly, nonatomic) char shouldCreateZoomSlider;
@property (readonly, nonatomic) char shouldCreateAvalancheIndicator;
@property (readonly, nonatomic) char shouldCreateSlalomIndicator;
@property (readonly, nonatomic) char shouldCreateTimerButton;

+ (NSString *)specForCurrentPlatform;
+ (CAMCameraSpec *)specForPhone;
+ (CAMCameraSpec *)specForPad;

- (int)rotationStyle;
- (char)shouldCreateFlashButton;
- (char)shouldCreateElapsedTimeView;
- (char)shouldCreateFlipButton;
- (char)shouldCreateStillDuringVideo;
- (char)shouldCreateImageWell;
- (char)shouldCreateShutterButton;
- (char)shouldCreateFiltersButton;
- (char)shouldCreateModeDial;
- (char)shouldCreateHDRButton;
- (char)shouldCreatePanoramaView;
- (char)shouldCreateZoomSlider;
- (char)isCameraApp;
- (char)shouldCreateAvalancheIndicator;
- (char)shouldCreateSlalomIndicator;
- (char)shouldCreateTimerButton;
- (struct CGRect)initialFrameForOrientation:(id)arg0;

@end
