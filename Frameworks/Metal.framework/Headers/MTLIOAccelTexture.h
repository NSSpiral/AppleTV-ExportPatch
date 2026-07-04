/* Runtime dump - MTLIOAccelTexture
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelTexture : MTLIOAccelResource
{
    MTLIOAccelResource * _rootResource;
    struct __IOSurface * _iosurface;
    unsigned int _iosurfacePlane;
    unsigned int _textureType;
    unsigned int _pixelFormat;
    unsigned int _rotation;
    unsigned int _width;
    unsigned int _height;
    unsigned int _depth;
    unsigned int _mipmapLevelCount;
    unsigned int _sampleCount;
    unsigned int _arrayLength;
    unsigned int _numFaces;
    char _framebufferOnly;
    char _isDrawable;
}

@property (readonly) MTLIOAccelResource * rootResource;
@property (readonly) struct __IOSurface * iosurface;
@property (readonly) unsigned int iosurfacePlane;
@property (readonly) unsigned int rotation;
@property (readonly) unsigned int textureType;
@property (readonly) unsigned int pixelFormat;
@property (readonly) unsigned int width;
@property (readonly) unsigned int height;
@property (readonly) unsigned int depth;
@property (readonly) unsigned int mipmapLevelCount;
@property (readonly) unsigned int sampleCount;
@property (readonly) unsigned int arrayLength;
@property (readonly) unsigned int numFaces;
@property (readonly) char framebufferOnly;
@property (readonly) char isDrawable;

- (void)getBytes:(void *)arg0 bytesPerRow:(unsigned int)arg1 fromRegion:(struct ?)arg2 mipmapLevel:(struct ?)arg3;
- (void)replaceRegion:(struct ?)arg0 mipmapLevel:(struct ?)arg1 withBytes:(void *)arg2 bytesPerRow:(unsigned int)arg3;
- (MTLIOAccelResource *)rootResource;
- (unsigned int)textureType;
- (unsigned int)mipmapLevelCount;
- (unsigned int)arrayLength;
- (char)isFramebufferOnly;
- (unsigned int)numFaces;
- (char)isDrawable;
- (MTLIOAccelTexture *)initWithDevice:(NSObject *)arg0 descriptor:(NSObject *)arg1 sysMemSize:(unsigned int)arg2 sysMemRowBytes:(unsigned int)arg3 vidMemSize:(unsigned int)arg4 vidMemRowBytes:(unsigned int)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(struct ?)arg7;
- (MTLIOAccelTexture *)initWithDevice:(NSObject *)arg0 descriptor:(NSObject *)arg1 iosurface:(struct __IOSurface *)arg2 plane:(unsigned int)arg3 field:(unsigned int)arg4 args:(struct IOAccelNewResourceArgs *)arg5 argsSize:(struct ?)arg6;
- (MTLIOAccelTexture *)initWithTexture:(NSObject *)arg0 pixelFormat:(unsigned int)arg1;
- (MTLIOAccelTexture *)initWithBuffer:(Buffer *)arg0 descriptor:(NSObject *)arg1 sysMemOffset:(unsigned int)arg2 sysMemRowBytes:(unsigned int)arg3 vidMemSize:(unsigned int)arg4 vidMemRowBytes:(unsigned int)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(struct ?)arg7;
- (void)copyFromSlice:(unsigned int)arg0 mipmapLevel:(unsigned int)arg1 origin:(struct ?)arg2 size:(struct ?)arg3 toPixels:(void *)arg4 rowBytes:(unsigned int)arg5 imageBytes:(unsigned int)arg6;
- (void)copyFromPixels:(void *)arg0 rowBytes:(void)arg1 imageBytes:(unsigned int)arg2 toSlice:(unsigned int)arg3 mipmapLevel:(unsigned int)arg4 origin:(unsigned int)arg5 size:(struct ?)arg6;
- (struct __CFArray *)copyAnnotations;
- (struct __IOSurface *)iosurface;
- (unsigned int)iosurfacePlane;
- (void)dealloc;
- (unsigned int)sampleCount;
- (unsigned int)width;
- (unsigned int)height;
- (unsigned int)rotation;
- (unsigned int)pixelFormat;
- (unsigned int)depth;

@end
