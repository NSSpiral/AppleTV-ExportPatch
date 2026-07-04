/* Runtime dump - AVCaptureDeviceFormat_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceFormat_FigRecorder : NSObject
{
    AVCaptureDeviceFormatInternal_FigRecorder * _internal;
}

@property (readonly, nonatomic) NSString * mediaType;
@property (readonly, nonatomic) struct opaqueCMFormatDescription * formatDescription;
@property (readonly, nonatomic) NSArray * videoSupportedFrameRateRanges;
@property (readonly, nonatomic) float videoFieldOfView;
@property (readonly, nonatomic) char videoBinned;
@property (readonly, nonatomic) char videoStabilizationSupported;
@property (readonly, nonatomic) float videoMaxZoomFactor;
@property (readonly, nonatomic) float videoZoomFactorUpscaleThreshold;

+ (NSDictionary *)deviceFormatWithDictionary:(NSDictionary *)arg0;
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
- (float)videoMaxZoomFactor;
- (char)isSISSupported;
- (struct ?)sensorDimensions;
- (id)vtScalingMode;
- (char)supportsHighProfileH264;
- (NSDictionary *)formatDictionary;
- (float)videoFieldOfView;
- (char)isVideoBinned;
- (int)supportedStabilizationMethod;
- (float)videoZoomFactorUpscaleThreshold;
- (char)isExperimental;
- (NSString *)_stringForFormatDescription:(struct opaqueCMFormatDescription *)arg0 frameRateRanges:(NSArray *)arg1;
- (char)supportsLowLightBoost;
- (struct ?)outputDimensions;
- (char)supportsVideoZoom;
- (struct CGSize)_maxVideoDimensions;
- (char)supportsDynamicCrop;
- (int)rawBitDepth;
- (id)videoZoomSupportedDownscaleStages;
- (id)videoZoomSupportedUpscaleStages;
- (char)isHighResPhotoFormat;
- (char)needsPhotoTNR;
- (char)needsPhotoPreviewDPCC;
- (char)usesPreviewSizedThumbnail;
- (int)supportedFormatsArrayIndex;
- (int)visCompanionSupportedFormatsArrayIndex;
- (void)dealloc;
- (char)isKindOfClass:(Class)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (AVCaptureDeviceFormat_FigRecorder *)initWithDictionary:(NSDictionary *)arg0;
- (NSString *)mediaType;

@end
