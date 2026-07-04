/* Runtime dump - MTLRenderPassAttachmentDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPassAttachmentDescriptor : NSObject <NSCopying>
{
    struct MTLRenderPassAttachmentDescriptorPrivate _private;
}

@property (retain, nonatomic) <MTLTexture> * texture;
@property (nonatomic) unsigned int level;
@property (nonatomic) unsigned int slice;
@property (nonatomic) unsigned int depthPlane;
@property (retain, nonatomic) <MTLTexture> * resolveTexture;
@property (nonatomic) unsigned int resolveLevel;
@property (nonatomic) unsigned int resolveSlice;
@property (nonatomic) unsigned int resolveDepthPlane;
@property (nonatomic) unsigned int loadAction;
@property (nonatomic) unsigned int storeAction;

+ (NSObject *)attachmentDescriptor;

- (unsigned int)loadAction;
- (unsigned int)storeAction;
- (struct MTLRenderPassAttachmentDescriptorPrivate *)_descriptorPrivate;
- (void)setResolveTexture:(<MTLTexture> *)arg0;
- (<MTLTexture> *)resolveTexture;
- (void)setSlice:(unsigned int)arg0;
- (unsigned int)slice;
- (void)setDepthPlane:(unsigned int)arg0;
- (unsigned int)depthPlane;
- (void)setResolveLevel:(unsigned int)arg0;
- (unsigned int)resolveLevel;
- (void)setResolveSlice:(unsigned int)arg0;
- (unsigned int)resolveSlice;
- (void)setResolveDepthPlane:(unsigned int)arg0;
- (unsigned int)resolveDepthPlane;
- (void)setLoadAction:(unsigned int)arg0;
- (void)setStoreAction:(unsigned int)arg0;
- (void)dealloc;
- (MTLRenderPassAttachmentDescriptor *)init;
- (NSString *)description;
- (MTLRenderPassAttachmentDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (void)setLevel:(unsigned int)arg0;
- (unsigned int)level;
- (<MTLTexture> *)texture;
- (void)setTexture:(<MTLTexture> *)arg0;

@end
