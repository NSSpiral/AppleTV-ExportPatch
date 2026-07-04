/* Runtime dump - FigCaptureSourceFormat
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureSourceFormat : NSObject <FigXPCCoding>
{
    NSDictionary * _formatDictionary;
    char _isMultiStreamFormat;
    struct opaqueCMFormatDescription * _formatDescription;
}

@property (readonly) unsigned long mediaType;
@property (readonly) struct opaqueCMFormatDescription * formatDescription;
@property (readonly) char experimental;
@property (readonly) char defaultActiveFormat;
@property (readonly) int videoFormatIndex;
@property (readonly) unsigned long videoFormat;
@property (readonly) struct ? videoDimensions;
@property (readonly) struct ? sensorDimensions;
@property (readonly) float videoMinSupportedFrameRate;
@property (readonly) float videoMaxSupportedFrameRate;
@property (readonly) float videoDefaultMinFrameRate;
@property (readonly) float videoDefaultMaxFrameRate;
@property (readonly) float videoFieldOfView;
@property (readonly) char videoBinned;
@property (readonly) int videoStabilizationTypeOverrideForStandard;
@property (readonly) char videoZoomSupported;
@property (readonly) float videoMaxZoomFactor;
@property (readonly) float videoZoomFactorUpscaleThreshold;
@property (readonly) char videoZoomDynamicSensorCropSupported;
@property (readonly) char videoLowLightBinningSwitchSupported;
@property (readonly) int videoRawBitDepth;
@property (readonly) int temporalNoiseReductionMode;
@property (readonly) char ispChromaNoiseReduction;
@property (readonly) float minISO;
@property (readonly) float maxISO;
@property (readonly) struct ? minExposureDuration;
@property (readonly) struct ? maxExposureDuration;
@property (readonly) float aeMaxGain;
@property (readonly) int maxIntegrationTimeOverride;
@property (readonly) int autoFocusSystem;
@property (readonly) char multiStreamFormat;
@property (readonly) char hasFrontEndScalerCompanionIndex;
@property (readonly) int frontEndScalerCompanionIndex;
@property (readonly) struct ? sensorCropDimensions;
@property (readonly) struct ? sourceCropAspectRatio;
@property (readonly) char hasSensorHDRCompanionIndex;
@property (readonly) int sensorHDRCompanionIndex;
@property (readonly) char prefersSensorHDREnabled;
@property (readonly) char capturesStillsFromVideoStream;
@property (readonly) char photoFormat;
@property (readonly) char highResPhotoFormat;
@property (readonly) char needsPreviewDPCC;
@property (readonly) char stillImageStabilizationSupported;
@property (readonly) char hdrSupported;
@property (readonly) char highResStillImageSupported;
@property (readonly) struct ? highResStillImageDimensions;
@property (readonly) char highProfileH264Supported;
@property (readonly) NSArray * AVCaptureSessionPresets;
@property (readonly) float videoScaleFactor;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)initialize;

- (struct opaqueCMFormatDescription *)formatDescription;
- (char)isVideoStabilizationModeSupported:(int)arg0;
- (char)isPhotoFormat;
- (char)isHDRSupported;
- (char)isDefaultActiveFormat;
- (NSArray *)AVCaptureSessionPresets;
- (struct ?)minExposureDuration;
- (struct ?)maxExposureDuration;
- (float)minISO;
- (float)maxISO;
- (float)videoMaxZoomFactor;
- (struct ?)sensorDimensions;
- (char)isStillImageStabilizationSupported;
- (float)videoFieldOfView;
- (char)isVideoBinned;
- (float)videoZoomFactorUpscaleThreshold;
- (char)isExperimental;
- (char)isHighResPhotoFormat;
- (int)autoFocusSystem;
- (float)videoMinSupportedFrameRate;
- (float)videoMaxSupportedFrameRate;
- (char)hasSensorHDRCompanionIndex;
- (struct ?)highResStillImageDimensions;
- (char)isHighResStillImageSupported;
- (char)prefersSensorHDREnabled;
- (char)isVideoLowLightBinningSwitchSupported;
- (char)isVideoZoomDynamicSensorCropSupported;
- (int)videoRawBitDepth;
- (char)isHighProfileH264Supported;
- (char)needsPreviewDPCC;
- (int)videoFormatIndex;
- (float)videoDefaultMaxFrameRate;
- (float)videoDefaultMinFrameRate;
- (struct ?)videoDimensions;
- (NSDictionary *)copyXPCEncoding;
- (FigCaptureSourceFormat *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (unsigned long)videoFormat;
- (char)isMultiStreamFormat;
- (char)isVideoZoomSupported;
- (int)temporalNoiseReductionMode;
- (char)ispChromaNoiseReduction;
- (float)aeMaxGain;
- (int)maxIntegrationTimeOverride;
- (char)hasFrontEndScalerCompanionIndex;
- (int)frontEndScalerCompanionIndex;
- (char)capturesStillsFromVideoStream;
- (int)sensorHDRCompanionIndex;
- (struct ?)sensorCropDimensions;
- (struct ?)sourceCropAspectRatio;
- (int)videoStabilizationTypeOverrideForStandard;
- (struct ?)_outputDimensions;
- (NSString *)copyWithNewVideoPixelFormat:(unsigned long)arg0;
- (FigCaptureSourceFormat *)initWithFigCaptureStreamFormatDictionary:(NSDictionary *)arg0;
- (struct ?)_maxUseableSensorDimensions;
- (struct ?)_visibleSensorDimensionsIncludingCinematic:(char)arg0;
- (float)videoScaleFactor;
- (unsigned long)mediaType;

@end
