/* Runtime dump - AVVideoCompositionRenderContextInternal
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoCompositionRenderContextInternal : NSObject
{
    NSDictionary * _basisProperties;
    struct CGSize _size;
    struct CGAffineTransform _renderTransform;
    float _renderScale;
    struct ? _pixelAspectRatio;
    struct ? _edgeWidths;
    char _highQualityRendering;
    NSDictionary * _clientRequiredPixelBufferAttributes;
    NSDictionary * _destinationDesiredPixelBufferAttributes;
    NSString * _destinationDesiredPixelBufferYCbCrMatrix;
    NSString * _destinationDesiredPixelBufferColorPrimaries;
    NSString * _destinationDesiredPixelBufferTransferFunction;
    int pixelFormatFamily;
    struct __CFDictionary * _pixelAspectRatioDict;
    struct __CFDictionary * _cleanApertureDict;
    struct ? _destinationPixelBufferDimensions;
    NSObject<OS_dispatch_queue> * _pixelBufferPoolQ;
    struct __CVPixelBufferPool * _pixelBufferPool;
    AVVideoComposition * _videoComposition;
}

- (void)_willDeallocOrFinalize;
- (void)dealloc;
- (void)finalize;

@end
