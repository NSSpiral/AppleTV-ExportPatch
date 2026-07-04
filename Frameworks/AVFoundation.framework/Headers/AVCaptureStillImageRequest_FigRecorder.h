/* Runtime dump - AVCaptureStillImageRequest_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureStillImageRequest_FigRecorder : NSObject <NSCopying>
{
    id _sbufCompletionBlock;
    id _iosurfaceCompletionBlock;
    int _stillImageOrientation;
    char _stillImageMirrored;
    struct CGSize _previewImageSize;
    unsigned long _imageDataFormatType;
    int _HDRMode;
    char _noiseReductionEnabled;
    char _suspendsVideoProcessing;
    unsigned long _shutterSoundID;
    char _jpegQualitySpecified;
    float _jpegQuality;
}

@property (copy) id sbufCompletionBlock;
@property (copy) id iosurfaceCompletionBlock;
@property int stillImageOrientation;
@property char stillImageMirrored;
@property struct CGSize previewImageSize;
@property unsigned long imageDataFormatType;
@property float jpegQuality;
@property char jpegQualitySpecified;
@property int HDRMode;
@property char noiseReductionEnabled;
@property char suspendsVideoProcessing;
@property unsigned long shutterSoundID;

+ (NSURLRequest *)request;

- (id /* block */)sbufCompletionBlock;
- (void)setSbufCompletionBlock:(id /* block */)arg0;
- (id /* block */)iosurfaceCompletionBlock;
- (void)setIosurfaceCompletionBlock:(id /* block */)arg0;
- (unsigned long)shutterSoundID;
- (void)setShutterSoundID:(unsigned long)arg0;
- (struct CGSize)previewImageSize;
- (unsigned long)imageDataFormatType;
- (float)jpegQuality;
- (char)jpegQualitySpecified;
- (char)noiseReductionEnabled;
- (void)setNoiseReductionEnabled:(char)arg0;
- (void)setHDRMode:(int)arg0;
- (void)setPreviewImageSize:(struct CGSize)arg0;
- (int)HDRMode;
- (void)setImageDataFormatType:(unsigned long)arg0;
- (void)setJpegQuality:(float)arg0;
- (void)setJpegQualitySpecified:(char)arg0;
- (char)isStillImageMirrored;
- (void)setStillImageMirrored:(char)arg0;
- (int)stillImageOrientation;
- (void)setStillImageOrientation:(int)arg0;
- (char)suspendsVideoProcessing;
- (void)setSuspendsVideoProcessing:(char)arg0;
- (void)dealloc;
- (AVCaptureStillImageRequest_FigRecorder *)copyWithZone:(struct _NSZone *)arg0;

@end
