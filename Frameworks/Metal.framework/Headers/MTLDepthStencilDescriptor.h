/* Runtime dump - MTLDepthStencilDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDepthStencilDescriptor : NSObject <NSCopying>
{
    struct MTLDepthStencilDescriptorPrivate _private;
}

@property (nonatomic) unsigned int depthCompareFunction;
@property (nonatomic) char depthWriteEnabled;
@property (copy, nonatomic) MTLStencilDescriptor * frontFaceStencil;
@property (copy, nonatomic) MTLStencilDescriptor * backFaceStencil;
@property (copy, nonatomic) NSString * label;

- (MTLStencilDescriptor *)frontFaceStencil;
- (MTLStencilDescriptor *)backFaceStencil;
- (struct MTLDepthStencilDescriptorPrivate *)depthStencilPrivate;
- (unsigned int)depthCompareFunction;
- (void)setDepthCompareFunction:(unsigned int)arg0;
- (char)isDepthWriteEnabled;
- (void)setDepthWriteEnabled:(char)arg0;
- (void)setFrontFaceStencil:(MTLStencilDescriptor *)arg0;
- (void)setBackFaceStencil:(MTLStencilDescriptor *)arg0;
- (void)dealloc;
- (MTLDepthStencilDescriptor *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MTLDepthStencilDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;

@end
