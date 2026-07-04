/* Runtime dump - MTLTextureDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLTextureDescriptor : NSObject <NSCopying>
{
    struct MTLTextureDescriptorPrivate * _private;
}

@property (nonatomic) unsigned int textureType;
@property (nonatomic) unsigned int pixelFormat;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (nonatomic) unsigned int depth;
@property (nonatomic) unsigned int mipmapLevelCount;
@property (nonatomic) unsigned int sampleCount;
@property (nonatomic) unsigned int arrayLength;
@property (nonatomic) unsigned int resourceOptions;

+ (NSString *)textureCubeDescriptorWithPixelFormat:(unsigned int)arg0 size:(unsigned int)arg1 mipmapped:(char)arg2;
+ (NSString *)texture2DDescriptorWithPixelFormat:(unsigned int)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 mipmapped:(char)arg3;

- (unsigned int)textureType;
- (unsigned int)mipmapLevelCount;
- (unsigned int)arrayLength;
- (void)setTextureType:(unsigned int)arg0;
- (void)setMipmapLevelCount:(unsigned int)arg0;
- (void)setArrayLength:(unsigned int)arg0;
- (unsigned int)resourceOptions;
- (void)setResourceOptions:(unsigned int)arg0;
- (char)isDrawable;
- (struct MTLTextureDescriptorPrivate *)descriptorPrivate;
- (void)setFramebufferOnly:(char)arg0;
- (char)framebufferOnly;
- (void)setIsDrawable:(char)arg0;
- (void)dealloc;
- (MTLTextureDescriptor *)init;
- (NSString *)description;
- (unsigned int)sampleCount;
- (void)setSampleCount:(unsigned int)arg0;
- (char)validate;
- (MTLTextureDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)width;
- (unsigned int)height;
- (void)setRotation:(unsigned int)arg0;
- (unsigned int)rotation;
- (void)setWidth:(unsigned int)arg0;
- (void)setHeight:(unsigned int)arg0;
- (unsigned int)pixelFormat;
- (void)setPixelFormat:(unsigned int)arg0;
- (unsigned int)depth;
- (void)setDepth:(unsigned int)arg0;

@end
