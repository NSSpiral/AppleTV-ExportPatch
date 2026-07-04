/* Runtime dump - AVAssetWriterInputPixelBufferAdaptor
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetWriterInputPixelBufferAdaptor : NSObject
{
    AVAssetWriterInputPixelBufferAdaptorInternal * _internal;
}

@property (readonly, nonatomic) AVAssetWriterInput * assetWriterInput;
@property (readonly, nonatomic) NSDictionary * sourcePixelBufferAttributes;
@property (readonly, nonatomic) struct __CVPixelBufferPool * pixelBufferPool;

+ (AVAssetWriterInputPixelBufferAdaptor *)assetWriterInputPixelBufferAdaptorWithAssetWriterInput:(AVAssetWriterInput *)arg0 sourcePixelBufferAttributes:(NSDictionary *)arg1;
+ (NSObject *)keyPathsForValuesAffectingPixelBufferPool;

- (NSDictionary *)sourcePixelBufferAttributes;
- (struct __CVPixelBufferPool *)pixelBufferPool;
- (char)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ?)arg1;
- (AVAssetWriterInputPixelBufferAdaptor *)initWithAssetWriterInput:(AVAssetWriterInput *)arg0 sourcePixelBufferAttributes:(NSDictionary *)arg1;
- (AVAssetWriterInput *)assetWriterInput;
- (void)dealloc;
- (AVAssetWriterInputPixelBufferAdaptor *)init;
- (NSString *)description;
- (void)finalize;

@end
