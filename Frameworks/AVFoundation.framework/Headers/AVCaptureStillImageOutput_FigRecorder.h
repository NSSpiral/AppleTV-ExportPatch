/* Runtime dump - AVCaptureStillImageOutput_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageOutput_FigRecorder : AVCaptureOutput_FigRecorder
{
    AVCaptureStillImageOutputInternal_FigRecorder * _internal;
}

@property (copy, nonatomic) NSDictionary * outputSettings;
@property (readonly, nonatomic) NSArray * availableImageDataCVPixelFormatTypes;
@property (readonly, nonatomic) NSArray * availableImageDataCodecTypes;
@property (readonly, nonatomic) char stillImageStabilizationSupported;
@property (nonatomic) char automaticallyEnablesStillImageStabilizationWhenAvailable;
@property (readonly, nonatomic) char stillImageStabilizationActive;
@property (readonly) char capturingStillImage;

+ (unsigned long)maxStillImageJPEGDataSize;
+ (NSDictionary *)jpegStillImageNSDataRepresentation:(struct opaqueCMSampleBuffer *)arg0;
+ (NSObject *)jpegStillImageNSDataRepresentationForSurface:(struct __IOSurface *)arg0 size:(unsigned long)arg1 metadata:(NSDictionary *)arg2;
+ (struct CGImage *)cgImageForBGRASurface:(struct __IOSurface *)arg0 size:(unsigned long)arg1;
+ (NSObject *)jpegStillImageNSDataRepresentationForBGRASurface:(struct __IOSurface *)arg0 size:(unsigned long)arg1;
+ (void)initialize;

- (void)_applyOverridesToCaptureOptions:(NSDictionary *)arg0;
- (NSArray *)connectionMediaTypes;
- (void)didStartForSession:(NSObject *)arg0;
- (NSURLConnection *)addConnection:(NSURLConnection *)arg0 error:(id *)arg1;
- (void)removeConnection:(NSURLConnection *)arg0;
- (void)handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (char)isHDRSupported;
- (char)squareCropEnabled;
- (struct CGSize)previewImageSize;
- (unsigned long)imageDataFormatType;
- (void)updateSISSupportedForSourceDevice:(NSObject *)arg0;
- (char)automaticallyEnablesStillImageStabilizationWhenAvailable;
- (NSArray *)availableImageDataCVPixelFormatTypes;
- (NSArray *)availableImageDataCodecTypes;
- (char)isRawCaptureEnabled;
- (char)isStillImageStabilizationSupported;
- (char)isRawCaptureSupported;
- (void)setNoiseReductionEnabled:(char)arg0;
- (void)setShutterSound:(unsigned long)arg0;
- (void)setHDRMode:(int)arg0;
- (void)setSquareCropEnabled:(char)arg0;
- (void)setPreviewImageSize:(struct CGSize)arg0;
- (int)HDRMode;
- (char)isHDRCaptureEnabled;
- (void)setHDRCaptureEnabled:(char)arg0;
- (char)isEV0CaptureEnabled;
- (void)setEV0CaptureEnabled:(char)arg0;
- (char)isStillImageStabilizationActive;
- (void)setAutomaticallyEnablesStillImageStabilizationWhenAvailable:(char)arg0;
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
- (void)configureAndInitiateCopyStillImageForRequest:(NSURLRequest *)arg0;
- (void)handlePhotoTakenForRequest:(NSURLRequest *)arg0 info:(NSDictionary *)arg1 imageIsEV0:(char *)arg2;
- (void)dealloc;
- (AVCaptureStillImageOutput_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (NSDictionary *)outputSettings;
- (void)setOutputSettings:(NSDictionary *)arg0;

@end
