/* Runtime dump - CAMCaptureSessionConfigurationOptions
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMCaptureSessionConfigurationOptions : NSObject
{
    char _HDRDetectionEnabled;
    char _use60FPSVideo;
    char _useAlternateSlomoFront;
    char _useAlternateSlomoRear;
}

@property (readonly, nonatomic) char HDRDetectionEnabled;
@property (readonly, nonatomic) char use60FPSVideo;
@property (readonly, nonatomic) char useAlternateSlomoFront;
@property (readonly, nonatomic) char useAlternateSlomoRear;

- (CAMCaptureSessionConfigurationOptions *)init;
- (char)useAlternateSlomoFront;
- (char)useAlternateSlomoRear;
- (char)use60FPSVideo;
- (CAMCaptureSessionConfigurationOptions *)initWithHDRDetectionEnabled:(char)arg0 use60FPSVideo:(char)arg1 useAlternateSlomoFront:(char)arg2 useAlternateSlomoRear:(char)arg3;
- (char)HDRDetectionEnabled;

@end
