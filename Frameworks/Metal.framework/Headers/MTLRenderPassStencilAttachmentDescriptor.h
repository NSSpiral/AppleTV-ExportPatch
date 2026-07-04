/* Runtime dump - MTLRenderPassStencilAttachmentDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassStencilAttachmentDescriptor : MTLRenderPassAttachmentDescriptor

@property (nonatomic) unsigned int clearStencil;

- (void)setClearStencil:(unsigned int)arg0;
- (unsigned int)clearStencil;
- (MTLRenderPassStencilAttachmentDescriptor *)init;
- (NSString *)description;

@end
