/* Runtime dump - MTLRenderPipelineColorAttachmentDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineColorAttachmentDescriptor : NSObject <NSCopying>
{
    struct MTLRenderPipelineAttachmentDescriptorPrivate _private;
}

@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) char blendingEnabled;
@property (nonatomic) unsigned int sourceRGBBlendFactor;
@property (nonatomic) unsigned int destinationRGBBlendFactor;
@property (nonatomic) unsigned int rgbBlendOperation;
@property (nonatomic) unsigned int sourceAlphaBlendFactor;
@property (nonatomic) unsigned int destinationAlphaBlendFactor;
@property (nonatomic) unsigned int alphaBlendOperation;
@property (nonatomic) unsigned int writeMask;

- (struct MTLRenderPipelineAttachmentDescriptorPrivate *)_descriptorPrivate;
- (char)isBlendingEnabled;
- (unsigned int)sourceRGBBlendFactor;
- (unsigned int)destinationRGBBlendFactor;
- (unsigned int)rgbBlendOperation;
- (unsigned int)sourceAlphaBlendFactor;
- (unsigned int)destinationAlphaBlendFactor;
- (unsigned int)alphaBlendOperation;
- (unsigned int)writeMask;
- (void)setWriteMask:(unsigned int)arg0;
- (void)setBlendingEnabled:(char)arg0;
- (void)setRgbBlendOperation:(unsigned int)arg0;
- (void)setAlphaBlendOperation:(unsigned int)arg0;
- (void)setSourceRGBBlendFactor:(unsigned int)arg0;
- (void)setSourceAlphaBlendFactor:(unsigned int)arg0;
- (void)setDestinationRGBBlendFactor:(unsigned int)arg0;
- (void)setDestinationAlphaBlendFactor:(unsigned int)arg0;
- (void)dealloc;
- (MTLRenderPipelineColorAttachmentDescriptor *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MTLRenderPipelineColorAttachmentDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_construct;
- (unsigned int)pixelFormat;
- (void)setPixelFormat:(unsigned int)arg0;

@end
