/* Runtime dump - AVCaptureDeviceFormat
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceFormat : NSObject
{
    AVCaptureDeviceFormatInternal * _internal;
}

@property (readonly, nonatomic) NSString * mediaType;
@property (readonly, nonatomic) struct opaqueCMFormatDescription * formatDescription;
@property (readonly, nonatomic) NSArray * videoSupportedFrameRateRanges;
@property (readonly, nonatomic) float videoFieldOfView;
@property (readonly, nonatomic) char videoBinned;
@property (readonly, nonatomic) char videoStabilizationSupported;
@property (readonly, nonatomic) float videoMaxZoomFactor;
@property (readonly, nonatomic) float videoZoomFactorUpscaleThreshold;
@property (readonly, nonatomic) struct ? minExposureDuration;
@property (readonly, nonatomic) struct ? maxExposureDuration;
@property (readonly, nonatomic) float minISO;
@property (readonly, nonatomic) float maxISO;
@property (readonly, nonatomic) char videoHDRSupported;
@property (readonly, nonatomic) struct ? highResolutionStillImageDimensions;
@property (readonly, nonatomic) int autoFocusSystem;

+ (void)initialize;

- (struct opaqueCMFormatDescription *)formatDescription;
- (char)isVideoStabilizationSupported;
- (char)isVideoStabilizationModeSupported:(int)arg0;
- (struct ?)lowestSupportedVideoFrameDuration;
- (struct ?)highestSupportedVideoFrameDuration;
- (struct ?)defaultActiveMinFrameDuration;
- (struct ?)defaultActiveMaxFrameDuration;
- (char)isPhotoFormat;
- (NSArray *)videoSupportedFrameRateRanges;
- (char)isDefaultActiveFormat;
- (NSArray *)AVCaptureSessionPresets;
- (struct ?)minExposureDuration;
- (struct ?)maxExposureDuration;
- (float)minISO;
- (float)maxISO;
- (float)videoMaxZoomFactor;
- (char)isVideoHDRSupported;
- (AVCaptureDeviceFormat *)initWithFigCaptureSourceFormat:(NSString *)arg0;
- (char)isSISSupported;
- (NSString *)figCaptureSourceFormat;
- (struct ?)sensorDimensions;
- (id)vtScalingMode;
- (char)supportsHighProfileH264;
- (char)prefersVideoHDREnabledForSessionPreset:(NSSet *)arg0;
- (char)supportsHighResolutionStillImageOutput;
- (struct ?)highResolutionStillImageDimensions;
- (struct ?)previewDimensions;
- (float)videoFieldOfView;
- (char)isVideoBinned;
- (int)supportedStabilizationMethod;
- (float)videoZoomFactorUpscaleThreshold;
- (char)isExperimental;
- (NSString *)_stringForFormatDescription:(struct opaqueCMFormatDescription *)arg0 frameRateRanges:(NSArray *)arg1;
- (char)supportsLowLightBoost;
- (char)supportsDynamicCrop;
- (int)rawBitDepth;
- (id)videoZoomSupportedDownscaleStages;
- (id)videoZoomSupportedUpscaleStages;
- (char)isHighResPhotoFormat;
- (char)needsPhotoPreviewDPCC;
- (int)supportedFormatsArrayIndex;
- (int)autoFocusSystem;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)mediaType;

@end
