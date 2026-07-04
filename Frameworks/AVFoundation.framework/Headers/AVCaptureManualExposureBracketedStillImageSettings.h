/* Runtime dump - AVCaptureManualExposureBracketedStillImageSettings
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureManualExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings
{
    struct ? _exposureDuration;
    float _ISO;
}

@property (readonly) struct ? exposureDuration;
@property (readonly) float ISO;

+ (NSNumber *)manualExposureSettingsWithExposureDuration:(struct ?)arg0 ISO:(float)arg1;

- (struct ?)exposureDuration;
- (float)ISO;
- (NSNumber *)_initManualExposureSettingsWithExposureDuration:(struct ?)arg0 ISO:(float)arg1;
- (NSString *)description;

@end
