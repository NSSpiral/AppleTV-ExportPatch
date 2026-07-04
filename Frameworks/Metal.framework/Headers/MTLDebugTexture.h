/* Runtime dump - MTLDebugTexture
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugTexture : MTLToolsTexture
{
    char _purgeableStateHasBeenSet;
    MTLTextureDescriptor * _descriptor;
    unsigned int _offset;
    unsigned int _bytesPerRow;
    unsigned int _plane;
    unsigned int _purgeableState;
}

@property (readonly, copy, nonatomic) MTLTextureDescriptor * descriptor;
@property (readonly, nonatomic) unsigned int offset;
@property (readonly, nonatomic) unsigned int bytesPerRow;
@property (readonly, nonatomic) unsigned int plane;
@property (readonly, nonatomic) unsigned int purgeableState;
@property (readonly, nonatomic) char purgeableStateHasBeenSet;

- (unsigned int)bytesPerRow;
- (unsigned int)setPurgeableState:(unsigned int)arg0;
- (NSString *)newTextureViewWithPixelFormat:(unsigned int)arg0;
- (MTLDebugTexture *)initWithBaseTexture:(NSObject *)arg0 strongBuffer:(NSObject *)arg1 descriptor:(MTLTextureDescriptor *)arg2 offset:(unsigned int)arg3 bytesPerRow:(unsigned int)arg4;
- (unsigned int)purgeableState;
- (char)purgeableStateHasBeenSet;
- (MTLDebugTexture *)initWithBaseTexture:(NSObject *)arg0 device:(NSObject *)arg1 descriptor:(MTLTextureDescriptor *)arg2;
- (MTLDebugTexture *)initWithBaseTexture:(NSObject *)arg0 device:(NSObject *)arg1 descriptor:(MTLTextureDescriptor *)arg2 plane:(unsigned int)arg3;
- (MTLDebugTexture *)initWithBaseTexture:(NSObject *)arg0 texture:(NSObject *)arg1 descriptor:(MTLTextureDescriptor *)arg2;
- (MTLDebugTexture *)initWithBaseTexture:(NSObject *)arg0 texture:(NSObject *)arg1 pixelFormat:(unsigned int)arg2;
- (MTLDebugTexture *)initWithBaseTexture:(NSObject *)arg0 buffer:(char *)arg1 descriptor:(MTLTextureDescriptor *)arg2 offset:(unsigned int)arg3 bytesPerRow:(unsigned int)arg4;
- (unsigned int)plane;
- (NSString *)description;
- (unsigned int)offset;
- (void).cxx_destruct;
- (MTLTextureDescriptor *)descriptor;

@end
