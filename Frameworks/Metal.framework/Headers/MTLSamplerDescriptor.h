/* Runtime dump - MTLSamplerDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLSamplerDescriptor : NSObject <NSCopying>
{
    struct MTLSamplerDescriptorPrivate * _private;
}

@property (nonatomic) unsigned int minFilter;
@property (nonatomic) unsigned int magFilter;
@property (nonatomic) unsigned int mipFilter;
@property (nonatomic) unsigned int maxAnisotropy;
@property (nonatomic) unsigned int sAddressMode;
@property (nonatomic) unsigned int tAddressMode;
@property (nonatomic) unsigned int rAddressMode;
@property (nonatomic) char normalizedCoordinates;
@property (nonatomic) float lodMinClamp;
@property (nonatomic) float lodMaxClamp;
@property (copy, nonatomic) NSString * label;

- (float)lodMinClamp;
- (float)lodMaxClamp;
- (struct MTLSamplerDescriptorPrivate *)descriptorPrivate;
- (unsigned int)sAddressMode;
- (void)setSAddressMode:(unsigned int)arg0;
- (unsigned int)tAddressMode;
- (void)setTAddressMode:(unsigned int)arg0;
- (unsigned int)rAddressMode;
- (void)setRAddressMode:(unsigned int)arg0;
- (char)normalizedCoordinates;
- (void)setNormalizedCoordinates:(char)arg0;
- (void)setLodMinClamp:(float)arg0;
- (void)setLodMaxClamp:(float)arg0;
- (unsigned int)mipFilter;
- (void)setMipFilter:(unsigned int)arg0;
- (unsigned int)maxAnisotropy;
- (void)setMaxAnisotropy:(unsigned int)arg0;
- (void)dealloc;
- (MTLSamplerDescriptor *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MTLSamplerDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (unsigned int)minFilter;
- (unsigned int)magFilter;
- (void)setMinFilter:(unsigned int)arg0;
- (void)setMagFilter:(unsigned int)arg0;
- (void)setLodBias:(float)arg0;
- (float)lodBias;

@end
