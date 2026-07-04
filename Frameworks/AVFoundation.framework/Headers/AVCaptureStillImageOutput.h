/* Runtime dump - AVCaptureStillImageOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageOutput : AVCaptureOutput
{
    AVCaptureStillImageOutputInternal * _internal;
}

@property (copy, nonatomic) NSDictionary * outputSettings;
@property (readonly, nonatomic) NSArray * availableImageDataCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray * availableImageDataCodecTypes;
@property (readonly, nonatomic) char stillImageStabilizationSupported;
@property (nonatomic) char automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (readonly, nonatomic) char stillImageStabilizationActive;
@property (nonatomic) char highResolutionStillImageOutputEnabled;
@property (readonly) char capturingStillImage;

+ (unsigned long)maxStillImageJPEGDataSize;
+ (NSDictionary *)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg0;
+ (NSObject *)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface *)arg0 size:(unsigned long)arg1 metadata:(NSDictionary *)arg2;
+ (struct CGImage *)cgImageForBGRASurface:(struct __IOSurface *)arg0 size:(unsigned long)arg1;
+ (AVCaptureStillImageOutput *)alloc;
+ (void)initialize;

- (NSArray *)connectionMediaTypes;
- (NSURLConnection *)addConnection:(NSURLConnection *)arg0 error:(id *)arg1;
- (void)removeConnection:(NSURLConnection *)arg0;
- (void)handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)_setStillImageStabilizationAutomaticallyEnabled:(char)arg0;
- (char)isHDRSupported;
- (char)squareCropEnabled;
- (struct CGSize)previewImageSize;
- (unsigned long)imageDataFormatType;
- (void)updateSISSupportedForSourceDevice:(NSObject *)arg0;
- (char)automaticallyEnablesStillImageStabilizationWhenAvailable;
- (void)_updateMaxBracketedStillImageCaptureCountForSourceFormat:(NSString *)arg0;
- (NSArray *)availableImageDataCVPixelFormatTypes;
- (NSArray *)availableImageDataCodecTypes;
- (void)clearPreparedBracketIfNeeded;
- (char)isRawCaptureEnabled;
- (char)isStillImageStabilizationSupported;
- (char)isRawCaptureSupported;
- (void)setNoiseReductionEnabled:(char)arg0;
- (void)setShutterSound:(unsigned long)arg0;
- (void)setHDRMode:(int)arg0;
- (NSURLConnection *)_figCaptureStillImageSettingsForConnection:(NSURLConnection *)arg0;
- (unsigned int)maxBracketedCaptureStillImageCount;
- (char)_bracketedSettingsAreValid:(id)arg0 fromConnection:(NSURLConnection *)arg1 exceptionReason:(id *)arg2;
- (NSArray *)_figCaptureStillImageSettingsForBracketedCaptureSettingsArray:(NSArray *)arg0 fromConnection:(NSURLConnection *)arg1;
- (char)_preparedForBracketedCaptureWithSettings:(NSDictionary *)arg0;
- (void)handleNotificationForRequest:(NSURLRequest *)arg0 withPayload:(NSData *)arg1 imageIsEV0:(char *)arg2;
- (void)playShutterSound:(unsigned long)arg0;
- (void)handleNotificationForPrepareRequest:(NSURLRequest *)arg0 withPayload:(NSData *)arg1;
- (void)setSquareCropEnabled:(char)arg0;
- (void)setPreviewImageSize:(struct CGSize)arg0;
- (int)HDRMode;
- (char)isHDRCaptureEnabled;
- (void)setHDRCaptureEnabled:(char)arg0;
- (char)isEV0CaptureEnabled;
- (void)setEV0CaptureEnabled:(char)arg0;
- (char)isStillImageStabilizationActive;
- (void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(char)arg0;
- (char)isHighResolutionStillImageOutputEnabled;
- (void)setHighResolutionStillImageOutputEnabled:(char)arg0;
- (char)isNoiseReductionEnabled;
- (void)setRawCaptureEnabled:(char)arg0;
- (unsigned long)shutterSound;
- (char)suspendsVideoProcessingDuringStillImageCapture;
- (void)setSuspendsVideoProcessingDuringStillImageCapture:(char)arg0;
- (char)resumeVideoProcessing;
- (char)isCapturingStillImage;
- (NSURLConnection *)firstActiveConnection;
- (void)captureStillImageAsynchronouslyFromConnection:(NSURLConnection *)arg0 completionHandler:(id /* block */)arg1;
- (void)captureStillImageSurfaceAsynchronouslyFromConnection:(NSURLConnection *)arg0 completionHandler:(id /* block */)arg1;
- (void)prepareToCaptureStillImageBracketFromConnection:(NSURLConnection *)arg0 withSettingsArray:(NSArray *)arg1 completionHandler:(id /* block */)arg2;
- (void)captureStillImageBracketAsynchronouslyFromConnection:(NSURLConnection *)arg0 withSettingsArray:(NSArray *)arg1 completionHandler:(id /* block */)arg2;
- (void)dealloc;
- (AVCaptureStillImageOutput *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSDictionary *)outputSettings;
- (void)setOutputSettings:(NSDictionary *)arg0;

@end
