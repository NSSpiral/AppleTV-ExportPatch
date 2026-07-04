/* Runtime dump - TSCH3DGLRenderBufferAllocator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGLRenderBufferAllocator : NSObject <TSCH3DRenderBufferAllocator>
{
    TSCH3DRenderBufferStorage * mStorage;
}

@property (readonly, nonatomic) char isTexturable;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (TSCH3DGLRenderBufferAllocator *)allocator;
+ (TSCH3DGLRenderBufferAllocator *)allocatorWithStorage:(id)arg0;

- (NSDictionary *)colorbufferWithAllocatorInfo:(struct RenderbufferAllocatorInfo *)arg0;
- (NSDictionary *)depthbufferWithAllocatorInfo:(struct RenderbufferAllocatorInfo *)arg0;
- (char)isTexturable;
- (TSCH3DGLRenderBufferAllocator *)initWithStorage:(TSWPStorage *)arg0;
- (NSDictionary *)bufferWithAllocatorInfo:(struct RenderbufferAllocatorInfo *)arg0 internalFormat:(struct RenderbufferAllocatorInfo)arg1 attachment:(struct tvec2<int> *)arg2;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;

@end
