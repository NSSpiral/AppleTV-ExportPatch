/* Runtime dump - AVPixelBufferAttributeMediator
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPixelBufferAttributeMediator : NSObject
{
    struct OpaqueVTPixelBufferAttributesMediator * _mediator;
}

- (void)removeRequestedPixelBufferAttributesAttributesForKey:(NSString *)arg0;
- (void)setRequestedPixelBufferAttributes:(NSDictionary *)arg0 forKey:(NSString *)arg1;
- (void)setLayersAreSuppressed:(char)arg0;
- (NSDictionary *)mediatedPixelBufferAttributes;
- (void)dealloc;
- (AVPixelBufferAttributeMediator *)init;
- (void)finalize;

@end
