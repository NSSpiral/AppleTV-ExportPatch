/* Runtime dump - AVVideoCompositionRenderContext
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoCompositionRenderContext : NSObject
{
    AVVideoCompositionRenderContextInternal * _internal;
}

@property (readonly, nonatomic) struct CGSize size;
@property (readonly, nonatomic) struct CGAffineTransform renderTransform;
@property (readonly, nonatomic) float renderScale;
@property (readonly, nonatomic) struct ? pixelAspectRatio;
@property (readonly, nonatomic) struct ? edgeWidths;
@property (readonly, nonatomic) char highQualityRendering;
@property (readonly, nonatomic) AVVideoComposition * videoComposition;

+ (AVVideoCompositionRenderContext *)renderContextPropertiesFromFigCompositor:(struct OpaqueFigVideoCompositor *)arg0;

- (AVVideoComposition *)videoComposition;
- (float)renderScale;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (void)_willDeallocOrFinalize;
- (AVVideoCompositionRenderContext *)initWithFigVideoCompositor:(struct OpaqueFigVideoCompositor *)arg0 clientRequiredPixelBufferAttributes:(NSDictionary *)arg1 videoComposition:(AVVideoComposition *)arg2 pixelBufferPool:(struct __CVPixelBufferPool *)arg3;
- (char)hasEqualPropertiesToFigVideoCompositor:(struct OpaqueFigVideoCompositor *)arg0;
- (char)isBufferYCbCr:(struct __CVBuffer *)arg0;
- (struct CGAffineTransform)renderTransform;
- (struct ?)edgeWidths;
- (char)highQualityRendering;
- (struct __CVBuffer *)newPixelBuffer;
- (void)dealloc;
- (struct CGSize)size;
- (struct ?)pixelAspectRatio;
- (void)finalize;

@end
