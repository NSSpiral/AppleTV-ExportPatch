/* Runtime dump - AVCaptureAutoExposureBracketedStillImageSettings
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAutoExposureBracketedStillImageSettings : AVCaptureBracketedStillImageSettings
{
    float _exposureTargetBias;
}

@property (readonly) float exposureTargetBias;

+ (AVCaptureAutoExposureBracketedStillImageSettings *)autoExposureSettingsWithExposureTargetBias:(float)arg0;

- (float)exposureTargetBias;
- (AVCaptureAutoExposureBracketedStillImageSettings *)_initAutoExposureSettingsWithExposureTargetBias:(float)arg0;
- (NSString *)description;

@end
