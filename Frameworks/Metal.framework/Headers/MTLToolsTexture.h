/* Runtime dump - MTLToolsTexture
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsTexture : MTLToolsResource <MTLTextureImplementation>
{
    MTLToolsPointerArray * _views;
}

@property (readonly, nonatomic) MTLToolsPointerArray * views;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy) NSString * label;
@property (readonly) <MTLDevice> * device;
@property (readonly) unsigned int cpuCacheMode;
@property (readonly) <MTLResource> * rootResource;
@property (readonly) unsigned int textureType;
@property (readonly) unsigned int pixelFormat;
@property (readonly) unsigned int width;
@property (readonly) unsigned int height;
@property (readonly) unsigned int depth;
@property (readonly) unsigned int mipmapLevelCount;
@property (readonly) unsigned int sampleCount;
@property (readonly) unsigned int arrayLength;
@property (readonly) char framebufferOnly;
@property int responsibleProcess;
@property (readonly) MTLResourceAllocationInfo * sharedAllocationInfo;
@property (readonly) MTLResourceAllocationInfo * cachedAllocationInfo;
@property (readonly) struct __IOSurface * iosurface;
@property (readonly) unsigned int iosurfacePlane;
@property (readonly) unsigned int rotation;
@property (readonly) unsigned int numFaces;
@property (readonly) char isDrawable;

- (void)acceptVisitor:(NSObject *)arg0;
- (MTLToolsTexture *)initWithBaseObject:(NSObject *)arg0 parent:(NSObject *)arg1;
- (void)getBytes:(void *)arg0 bytesPerRow:(unsigned int)arg1 bytesPerImage:(unsigned int)arg2 fromRegion:(struct ?)arg3 mipmapLevel:(struct ?)arg4 slice:(unsigned int)arg5;
- (void)replaceRegion:(struct ?)arg0 mipmapLevel:(struct ?)arg1 slice:(unsigned int)arg2 withBytes:(unsigned int)arg3 bytesPerRow:(unsigned int)arg4 bytesPerImage:(void *)arg5;
- (void)getBytes:(void *)arg0 bytesPerRow:(unsigned int)arg1 fromRegion:(struct ?)arg2 mipmapLevel:(struct ?)arg3;
- (void)replaceRegion:(struct ?)arg0 mipmapLevel:(struct ?)arg1 withBytes:(void *)arg2 bytesPerRow:(unsigned int)arg3;
- (NSString *)newTextureViewWithPixelFormat:(unsigned int)arg0;
- (<MTLResource> *)rootResource;
- (unsigned int)textureType;
- (unsigned int)mipmapLevelCount;
- (unsigned int)arrayLength;
- (char)isFramebufferOnly;
- (MTLToolsTexture *)initWithBaseObject:(NSObject *)arg0 strongParent:(MTLToolsObject *)arg1;
- (unsigned int)numFaces;
- (char)isDrawable;
- (void)copyFromSlice:(unsigned int)arg0 mipmapLevel:(unsigned int)arg1 origin:(struct ?)arg2 size:(struct ?)arg3 toPixels:(void *)arg4 rowBytes:(unsigned int)arg5 imageBytes:(unsigned int)arg6;
- (void)copyFromPixels:(void *)arg0 rowBytes:(void)arg1 imageBytes:(unsigned int)arg2 toSlice:(unsigned int)arg3 mipmapLevel:(unsigned int)arg4 origin:(unsigned int)arg5 size:(struct ?)arg6;
- (struct __IOSurface *)iosurface;
- (unsigned int)iosurfacePlane;
- (MTLToolsPointerArray *)views;
- (unsigned int)sampleCount;
- (unsigned int)width;
- (unsigned int)height;
- (unsigned int)rotation;
- (void).cxx_destruct;
- (unsigned int)pixelFormat;
- (unsigned int)depth;

@end
