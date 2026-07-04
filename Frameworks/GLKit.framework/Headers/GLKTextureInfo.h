/* Runtime dump - GLKTextureInfo
 * Image: /System/Library/Frameworks/GLKit.framework/GLKit
 */

@interface GLKTextureInfo : NSObject <NSCopying>
{
    unsigned int name;
    unsigned int target;
    unsigned int width;
    unsigned int height;
    int alphaState;
    int textureOrigin;
    char containsMipmaps;
}

@property (readonly) unsigned int name;
@property (readonly) unsigned int target;
@property (readonly) unsigned int width;
@property (readonly) unsigned int height;
@property (readonly) int alphaState;
@property (readonly) int textureOrigin;
@property (readonly) char containsMipmaps;

- (int)alphaState;
- (int)textureOrigin;
- (char)containsMipmaps;
- (GLKTextureInfo *)initWithTexture:(NSObject *)arg0 textureName:(unsigned int)arg1;
- (void)dealloc;
- (NSString *)description;
- (unsigned int)name;
- (GLKTextureInfo *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)target;
- (unsigned int)width;
- (unsigned int)height;

@end
