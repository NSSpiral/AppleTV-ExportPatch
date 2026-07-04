/* Runtime dump - MTLStencilDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStencilDescriptor : NSObject <NSCopying>
{
    struct MTLStencilDescriptorPrivate _private;
}

@property (nonatomic) unsigned int stencilCompareFunction;
@property (nonatomic) unsigned int stencilFailureOperation;
@property (nonatomic) unsigned int depthFailureOperation;
@property (nonatomic) unsigned int depthStencilPassOperation;
@property (nonatomic) unsigned int readMask;
@property (nonatomic) unsigned int writeMask;

- (unsigned int)writeMask;
- (void)setWriteMask:(unsigned int)arg0;
- (struct MTLStencilDescriptorPrivate *)stencilPrivate;
- (unsigned int)stencilCompareFunction;
- (void)setStencilCompareFunction:(unsigned int)arg0;
- (unsigned int)stencilFailureOperation;
- (void)setStencilFailureOperation:(unsigned int)arg0;
- (unsigned int)depthFailureOperation;
- (void)setDepthFailureOperation:(unsigned int)arg0;
- (unsigned int)depthStencilPassOperation;
- (void)setDepthStencilPassOperation:(unsigned int)arg0;
- (unsigned int)readMask;
- (void)setReadMask:(unsigned int)arg0;
- (MTLStencilDescriptor *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MTLStencilDescriptor *)copyWithZone:(struct _NSZone *)arg0;

@end
