/* Runtime dump - TSCH3DFBOLoader
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DFBOLoader : TSCH3DResourceLoader
{
    struct tvec2<int> mSize;
    struct FramebufferAttributes mFramebufferAttributes;
    <TSCH3DRenderBufferAllocator> * mColorAllocator;
    <TSCH3DRenderBufferAllocator> * mDepthAllocator;
}

@property (readonly, nonatomic) struct tvec2<int> size;
@property (readonly, nonatomic) struct FramebufferAttributes framebufferAttributes;
@property (readonly, nonatomic) <TSCH3DRenderBufferAllocator> * colorAllocator;
@property (readonly, nonatomic) <TSCH3DRenderBufferAllocator> * depthAllocator;

+ (unsigned int)estimatedMemoryInBytesForSize:(struct tvec2<int>)arg0 samples:(unsigned int)arg1 hasColorbuffer:(char)arg2 hasDepthbuffer:(char)arg3;
+ (NSDictionary *)loaderWithFramebufferAttributes:(struct FramebufferAttributes *)arg0 size:(struct FramebufferAttributes)arg1 colorAllocator:(struct tvec2<int> *)arg2 depthAllocator:(struct tvec2<int>)arg3;

- (struct SessionLoadResourceResult)loadResource:(NSObject *)arg0 insideSession:(NSObject *)arg1;
- (struct FramebufferAttributes)framebufferAttributes;
- (void)deactivateHandle:(id)arg0 insideContext:(NSObject *)arg1;
- (unsigned int)uploadDataBuffer:(NSObject *)arg0 handle:(_NSStdIOFileHandle *)arg1 insideSession:(NSObject *)arg2 config:(void *)arg3;
- (TSCH3DFBOLoader *)initWithFramebufferAttributes:(struct FramebufferAttributes *)arg0 size:(struct FramebufferAttributes)arg1 colorAllocator:(struct tvec2<int> *)arg2 depthAllocator:(struct tvec2<int>)arg3;
- (NSObject *)generateHandleWithConfig:(void *)arg0;
- (void)bindHandle:(id)arg0 config:(void *)arg1;
- (<TSCH3DRenderBufferAllocator> *)colorAllocator;
- (<TSCH3DRenderBufferAllocator> *)depthAllocator;
- (void)dealloc;
- (struct tvec2<int>)size;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void).cxx_construct;

@end
