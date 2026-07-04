/* Runtime dump - MTLRenderPassDepthAttachmentDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassDepthAttachmentDescriptor : MTLRenderPassAttachmentDescriptor

@property (nonatomic) double clearDepth;

- (void)setClearDepth:(double)arg0;
- (double)clearDepth;
- (MTLRenderPassDepthAttachmentDescriptor *)init;
- (NSString *)description;

@end
