/* Runtime dump - CAMStillImageCaptureResponse
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMStillImageCaptureResponse : CAMCaptureResponse
{
    char _transient;
    char _finalResponse;
    UIImage * _stillImageOriginalImage;
    NSData * _stillImageJPEGData;
    struct opaqueCMSampleBuffer * _stillImageOriginalSampleBuffer;
    struct __IOSurface * _stillImageOriginalSurface;
    unsigned long _stillImageOriginalSurfaceSize;
    struct __IOSurface * _stillImageUnfilteredPreviewSurface;
    struct __IOSurface * _stillImageFilteredPreviewSurface;
    UIImage * _stillImageUnfilteredPreviewImage;
    UIImage * _stillImageFilteredPreviewImage;
    NSMutableDictionary * _stillImageJob;
    id _stillImageRequestEnqueuedBlock;
    id _stillImageCompletionBlock;
    CIFilter * _effectFilter;
    NSString * _avalancheUUID;
    NSString * _timelapseDestinationPath;
}

@property (nonatomic) char transient;
@property (nonatomic) char finalResponse;
@property (readonly, nonatomic) UIImage * thumbnailImage;
@property (retain, nonatomic) UIImage * stillImageOriginalImage;
@property (retain, nonatomic) NSData * stillImageJPEGData;
@property (readonly, copy, nonatomic) NSDictionary * stillImageMetadata;
@property (nonatomic) struct opaqueCMSampleBuffer * stillImageOriginalSampleBuffer;
@property (nonatomic) struct __IOSurface * stillImageOriginalSurface;
@property (nonatomic) unsigned long stillImageOriginalSurfaceSize;
@property (nonatomic) struct __IOSurface * stillImageUnfilteredPreviewSurface;
@property (nonatomic) struct __IOSurface * stillImageFilteredPreviewSurface;
@property (retain, nonatomic) UIImage * stillImageUnfilteredPreviewImage;
@property (retain, nonatomic) UIImage * stillImageFilteredPreviewImage;
@property (retain, nonatomic) NSMutableDictionary * stillImageJob;
@property (copy, nonatomic) id stillImageRequestEnqueuedBlock;
@property (copy, nonatomic) id stillImageCompletionBlock;
@property (copy, nonatomic) CIFilter * effectFilter;
@property (copy, nonatomic) NSString * avalancheUUID;
@property (copy, nonatomic) NSString * timelapseDestinationPath;

- (void)setTransient:(char)arg0;
- (void)dealloc;
- (CAMStillImageCaptureResponse *)init;
- (void).cxx_destruct;
- (char)isTransient;
- (UIImage *)thumbnailImage;
- (struct __IOSurface *)stillImageUnfilteredPreviewSurface;
- (char)isFinalResponse;
- (void)setTimelapseDestinationPath:(NSString *)arg0;
- (void)releaseCachedImages;
- (UIImage *)stillImageUnfilteredPreviewImage;
- (UIImage *)stillImageFilteredPreviewImage;
- (NSDictionary *)stillImageMetadata;
- (void)setStillImageOriginalSurface:(struct __IOSurface *)arg0;
- (void)setStillImageFilteredPreviewSurface:(struct __IOSurface *)arg0;
- (void)setStillImageUnfilteredPreviewSurface:(struct __IOSurface *)arg0;
- (void)setFinalResponse:(char)arg0;
- (UIImage *)stillImageOriginalImage;
- (void)setStillImageOriginalImage:(UIImage *)arg0;
- (NSData *)stillImageJPEGData;
- (void)setStillImageJPEGData:(NSData *)arg0;
- (struct opaqueCMSampleBuffer *)stillImageOriginalSampleBuffer;
- (void)setStillImageOriginalSampleBuffer:(struct opaqueCMSampleBuffer *)arg0;
- (struct __IOSurface *)stillImageOriginalSurface;
- (unsigned long)stillImageOriginalSurfaceSize;
- (void)setStillImageOriginalSurfaceSize:(unsigned long)arg0;
- (struct __IOSurface *)stillImageFilteredPreviewSurface;
- (void)setStillImageUnfilteredPreviewImage:(UIImage *)arg0;
- (void)setStillImageFilteredPreviewImage:(UIImage *)arg0;
- (NSMutableDictionary *)stillImageJob;
- (void)setStillImageJob:(NSMutableDictionary *)arg0;
- (id /* block */)stillImageRequestEnqueuedBlock;
- (void)setStillImageRequestEnqueuedBlock:(id /* block */)arg0;
- (id /* block */)stillImageCompletionBlock;
- (void)setStillImageCompletionBlock:(id /* block */)arg0;
- (CIFilter *)effectFilter;
- (void)setEffectFilter:(CIFilter *)arg0;
- (NSString *)timelapseDestinationPath;
- (NSString *)avalancheUUID;
- (void)setAvalancheUUID:(NSString *)arg0;

@end
