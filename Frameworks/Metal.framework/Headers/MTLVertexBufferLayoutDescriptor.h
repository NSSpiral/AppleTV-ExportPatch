/* Runtime dump - MTLVertexBufferLayoutDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexBufferLayoutDescriptor : NSObject <NSCopying>
{
    unsigned int _stride;
    unsigned int _stepFunction;
    unsigned int _instanceStepRate;
}

@property (nonatomic) unsigned int stride;
@property (nonatomic) unsigned int stepFunction;
@property (nonatomic) unsigned int stepRate;

- (unsigned int)stride;
- (unsigned int)stepFunction;
- (unsigned int)stepRate;
- (void)setStride:(unsigned int)arg0;
- (void)setStepFunction:(unsigned int)arg0;
- (void)setStepRate:(unsigned int)arg0;
- (MTLVertexBufferLayoutDescriptor *)init;
- (MTLVertexBufferLayoutDescriptor *)copyWithZone:(struct _NSZone *)arg0;

@end
