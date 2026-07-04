/* Runtime dump - MTLRenderPassDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassDescriptor : NSObject <NSCopying>
{
    struct MTLRenderPassDescriptorPrivate _private;
}

@property (readonly) MTLRenderPassColorAttachmentDescriptorArray * colorAttachments;
@property (copy, nonatomic) MTLRenderPassDepthAttachmentDescriptor * depthAttachment;
@property (copy, nonatomic) MTLRenderPassStencilAttachmentDescriptor * stencilAttachment;
@property (retain, nonatomic) <MTLBuffer> * visibilityResultBuffer;

+ (NSObject *)renderPassDescriptor;

- (char)validate:(NSDate *)arg0 width:(unsigned int *)arg1 height:(unsigned int *)arg2;
- (struct MTLRenderPassDescriptorPrivate *)_descriptorPrivate;
- (void)setDepthAttachment:(MTLRenderPassDepthAttachmentDescriptor *)arg0;
- (MTLRenderPassDepthAttachmentDescriptor *)depthAttachment;
- (void)setStencilAttachment:(MTLRenderPassStencilAttachmentDescriptor *)arg0;
- (MTLRenderPassStencilAttachmentDescriptor *)stencilAttachment;
- (void)setVisibilityResultBuffer:(<MTLBuffer> *)arg0;
- (<MTLBuffer> *)visibilityResultBuffer;
- (MTLRenderPassColorAttachmentDescriptorArray *)colorAttachments;
- (void)dealloc;
- (MTLRenderPassDescriptor *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MTLRenderPassDescriptor *)copyWithZone:(struct _NSZone *)arg0;

@end
