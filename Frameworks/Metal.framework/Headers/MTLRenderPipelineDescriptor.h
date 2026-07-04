/* Runtime dump - MTLRenderPipelineDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineDescriptor : NSObject <NSCopying>
{
    struct MTLRenderPipelineDescriptorPrivate _private;
}

@property (copy, nonatomic) NSString * label;
@property (retain, nonatomic) <MTLFunction> * vertexFunction;
@property (retain, nonatomic) <MTLFunction> * fragmentFunction;
@property (copy, nonatomic) MTLVertexDescriptor * vertexDescriptor;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) char alphaToCoverageEnabled;
@property (nonatomic) char alphaToOneEnabled;
@property (nonatomic) char rasterizationEnabled;
@property (readonly) MTLRenderPipelineColorAttachmentDescriptorArray * colorAttachments;
@property (nonatomic) unsigned int depthAttachmentPixelFormat;
@property (nonatomic) unsigned int stencilAttachmentPixelFormat;

- (struct MTLRenderPipelineDescriptorPrivate *)_descriptorPrivate;
- (MTLVertexDescriptor *)vertexDescriptor;
- (<MTLFunction> *)vertexFunction;
- (<MTLFunction> *)fragmentFunction;
- (unsigned int)sampleMask;
- (void)setSampleMask:(unsigned int)arg0;
- (float)sampleCoverage;
- (void)setSampleCoverage:(float)arg0;
- (char)isAlphaToCoverageEnabled;
- (void)setAlphaToCoverageEnabled:(char)arg0;
- (char)isAlphaToOneEnabled;
- (void)setAlphaToOneEnabled:(char)arg0;
- (char)isRasterizationEnabled;
- (void)setRasterizationEnabled:(char)arg0;
- (NSObject *)fastBlendDescriptorAtIndex:(unsigned int)arg0;
- (void)setVertexDescriptor:(MTLVertexDescriptor *)arg0;
- (unsigned int)depthAttachmentPixelFormat;
- (void)setDepthAttachmentPixelFormat:(unsigned int)arg0;
- (unsigned int)stencilAttachmentPixelFormat;
- (void)setStencilAttachmentPixelFormat:(unsigned int)arg0;
- (void)validateWithDevice:(NSObject *)arg0;
- (NSData *)serializeFragmentData;
- (NSData *)serializedVertexData;
- (void)setVertexFunction:(<MTLFunction> *)arg0;
- (void)setFragmentFunction:(<MTLFunction> *)arg0;
- (MTLRenderPipelineColorAttachmentDescriptorArray *)colorAttachments;
- (void)dealloc;
- (MTLRenderPipelineDescriptor *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)sampleCount;
- (void)setSampleCount:(unsigned int)arg0;
- (void)reset;
- (MTLRenderPipelineDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_construct;

@end
