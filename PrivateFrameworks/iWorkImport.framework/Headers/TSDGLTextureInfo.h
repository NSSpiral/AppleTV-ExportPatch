/* Runtime dump - TSDGLTextureInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGLTextureInfo : NSObject
{
    char _containsMipmaps;
    unsigned int _name;
    unsigned int _target;
    unsigned int _height;
    unsigned int _width;
}

@property (readonly, nonatomic) char containsMipmaps;
@property (readonly, nonatomic) unsigned int name;
@property (readonly, nonatomic) unsigned int target;
@property (readonly, nonatomic) unsigned int height;
@property (readonly, nonatomic) unsigned int width;
@property (readonly, nonatomic) struct CGSize size;

+ (NSString *)textureInfoWithName:(unsigned int)arg0 target:(unsigned int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 containsMipmaps:(char)arg4;

- (TSDGLTextureInfo *)initWithName:(unsigned int)arg0 target:(unsigned int)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 containsMipmaps:(char)arg4;
- (char)containsMipmaps;
- (struct CGSize)size;
- (NSString *)description;
- (unsigned int)name;
- (unsigned int)target;
- (unsigned int)width;
- (unsigned int)height;
- (void)teardown;

@end
