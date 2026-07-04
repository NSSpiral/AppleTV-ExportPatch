/* Runtime dump - BWJPEGEncoderNode
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface BWJPEGEncoderNode : BWNode
{
    NSObject<OS_dispatch_queue> * _thumbnailGenerationQueue;
    NSObject<OS_dispatch_group> * _thumbnailGenerationGroup;
    struct OpaqueVTPixelTransferSession * _pixelTransferSession;
    char _croppingEnabled;
}

+ (void)initialize;
+ (void)_updateMetadataForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 stillImageSettings:(FigCaptureStillImageSettings *)arg1 whenCroppingEnabled:(char)arg2;
+ (char)_croppingRequiredForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 stillImageSettings:(FigCaptureStillImageSettings *)arg1 whenEnabled:(char)arg2;
+ (struct CGRect)_cropRectForSampleBuffer:(NSObject *)arg0 stillImageSettings:(SEL)arg1 whenEnabled:(struct opaqueCMSampleBuffer *)arg2;

- (void)dealloc;
- (BWJPEGEncoderNode *)init;
- (NSString *)nodeType;
- (NSString *)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 forInput:(NSObject *)arg1;
- (void)didSelectFormat:(NSString *)arg0 forInput:(NSObject *)arg1;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)setCroppingEnabled:(char)arg0;
- (void)_generateThumbnailForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 stillImageSettings:(FigCaptureStillImageSettings *)arg1 outputSurface:(struct __IOSurface * *)arg2;
- (void)_encodeJPEGForSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 stillImageSettings:(FigCaptureStillImageSettings *)arg1 outputSurface:(struct __IOSurface * *)arg2 outputSurfaceSize:(struct __IOSurface)arg3 outputSurfaceImageSize:(int *)arg4;
- (char)croppingEnabled;

@end
