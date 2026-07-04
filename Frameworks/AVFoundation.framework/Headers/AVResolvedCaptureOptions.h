/* Runtime dump - AVResolvedCaptureOptions
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVResolvedCaptureOptions : NSObject
{
    NSString * sessionPreset;
    char captureSessionPresetChanging;
    NSMutableDictionary * baseCaptureOptions;
    NSMutableDictionary * optionsOverrides;
    struct __CFDictionary * outputSettingsOverrides;
    char usePreviewSizedCaptureBuffers;
    char useStabilizationIfAvailable;
    char hasStillImageOutput;
    NSString * faceDetectionMode;
    char faceDetectionNotificationsEnabled;
    struct ? videoConnectionMinFrameDuration;
    struct ? videoConnectionMaxFrameDuration;
    AVCaptureDeviceFormat_FigRecorder * resolvedVideoDeviceFormat;
    struct ? resolvedVideoMinFrameDuration;
    struct ? resolvedVideoMaxFrameDuration;
    NSMutableDictionary * resolvedVideoCompressionProperties;
    NSMutableDictionary * resolvedCaptureOptions;
    char resolvesFrameRatesUsingDefaultValues;
    char resetsVideoZoomFactorToDefaultValue;
}

@property (nonatomic) char hasStillImageOutput;
@property char resolvesFrameRatesUsingDefaultValues;
@property char resetsVideoZoomFactorToDefaultValue;
@property (readonly) NSString * sessionPreset;

+ (AVResolvedCaptureOptions *)resolvedCaptureOptionsWithSessionPreset:(NSString *)arg0 captureOptionsDictionary:(NSDictionary *)arg1;
+ (void)initialize;

- (void)addMinFrameDuration:(struct ?)arg0 forConnection:(NSURLConnection *)arg1;
- (void)addMaxFrameDuration:(struct ?)arg0 forConnection:(NSURLConnection *)arg1;
- (NSString *)sessionPreset;
- (NSObject *)resolvedVideoSettingsForAssetWriter;
- (void)addOutputSettings:(NSDictionary *)arg0 forConnection:(NSURLConnection *)arg1;
- (NSMutableDictionary *)baseCaptureOptions;
- (void)usePreviewSizedCaptureBuffersForConnection:(NSURLConnection *)arg0;
- (void)useStabilizationIfAvailableForConnection:(NSURLConnection *)arg0;
- (void)setHasStillImageOutput:(char)arg0;
- (void)addFaceDetectionMode:(id)arg0 forConnection:(NSURLConnection *)arg1;
- (void)enableFaceDetectionNotificationsForConnection:(NSURLConnection *)arg0;
- (AVCaptureDeviceFormat_FigRecorder *)resolvedVideoDeviceFormat;
- (char)resetsVideoZoomFactorToDefaultValue;
- (struct ?)resolvedVideoMinFrameDuration;
- (struct ?)resolvedVideoMaxFrameDuration;
- (char)resolvesFrameRatesUsingDefaultValues;
- (AVResolvedCaptureOptions *)initWithSessionPreset:(NSString *)arg0 captureOptionsDictionary:(NSDictionary *)arg1;
- (int)rankForFaceDetectionMode:(id)arg0;
- (NSDictionary *)cameraForCaptureOptions:(NSDictionary *)arg0;
- (id)deviceFormatForCamera:(id)arg0 captureOptions:(NSMutableDictionary *)arg1;
- (void)applyInputPriorityOverridesToCaptureOptions:(NSDictionary *)arg0 forCamera:(VKCamera *)arg1;
- (void)resolveFrameRatesToCaptureOptions:(NSDictionary *)arg0 withCamera:(VKCamera *)arg1 activeFormat:(NSString *)arg2;
- (void)resolveOutputSettingsToCaptureOptions:(NSDictionary *)arg0 resolvedScalingMode:(id *)arg1;
- (char)hasOverridesAffectingCaptureFormatInResolvedOptions:(NSDictionary *)arg0 withScalingMode:(int)arg1;
- (void)setBestCaptureResolutionForAVScalingMode:(id)arg0 captureOptions:(NSMutableDictionary *)arg1;
- (char)hasOverridesAffectingPreviewFormatInResolvedOptions:(NSDictionary *)arg0 withScalingMode:(int)arg1;
- (void)setBestPreviewResolutionForCaptureOptions:(NSDictionary *)arg0;
- (NSDictionary *)resolvedCaptureOptionsDictionary;
- (id)resolvedVideoSettingsWithScalingAllowed:(char)arg0;
- (NSObject *)resolvedVideoSettingsForMovieFileOutput;
- (char)hasWidthOverrideInResolvedOptions:(NSDictionary *)arg0;
- (char)hasHeightOverrideInResolvedOptions:(NSDictionary *)arg0;
- (char)hasStillImageOutput;
- (NSMutableDictionary *)resolvedVideoCompressionProperties;
- (void)setResolvesFrameRatesUsingDefaultValues:(char)arg0;
- (void)setResetsVideoZoomFactorToDefaultValue:(char)arg0;
- (void)dealloc;
- (void)setValue:(NSObject *)arg0 forKeyPath:(NSString *)arg1;

@end
