/* Runtime dump - MTLDebugDevice
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugDevice : MTLToolsDevice

- (MTLDebugDevice *)initWithBaseObject:(NSObject *)arg0 parent:(NSObject *)arg1;
- (NSNumber *)newCommandQueueWithMaxCommandBufferCount:(unsigned int)arg0;
- (NSData *)newBufferWithBytes:(void *)arg0 length:(void)arg1 options:(unsigned int)arg2;
- (id)newBufferWithBytesNoCopy:(void *)arg0 length:(unsigned int)arg1 options:(unsigned int)arg2 deallocator:(struct __CFAllocator *)arg3;
- (NSObject *)newDepthStencilStateWithDescriptor:(NSObject *)arg0;
- (NSObject *)newDefaultLibrary;
- (NSString *)newLibraryWithFile:(NSString *)arg0 error:(id *)arg1;
- (NSData *)newLibraryWithData:(NSData *)arg0 error:(id *)arg1;
- (void)newLibraryWithSource:(NSObject *)arg0 options:(NSDictionary *)arg1 completionHandler:(id /* block */)arg2;
- (NSObject *)newRenderPipelineStateWithDescriptor:(NSObject *)arg0 options:(unsigned int)arg1 reflection:(id *)arg2 error:(id *)arg3;
- (void)newRenderPipelineStateWithDescriptor:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)newRenderPipelineStateWithDescriptor:(NSObject *)arg0 options:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (id)newComputePipelineStateWithFunction:(id)arg0 error:(id *)arg1;
- (id)newComputePipelineStateWithFunction:(id)arg0 options:(unsigned int)arg1 reflection:(id *)arg2 error:(id *)arg3;
- (void)newComputePipelineStateWithFunction:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)newComputePipelineStateWithFunction:(id)arg0 options:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (NSObject *)newComputePipelineStateWithDescriptor:(NSObject *)arg0 error:(id *)arg1;
- (NSObject *)newComputePipelineStateWithDescriptor:(NSObject *)arg0 options:(unsigned int)arg1 reflection:(id *)arg2 error:(id *)arg3;
- (void)newComputePipelineStateWithDescriptor:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (void)newComputePipelineStateWithDescriptor:(NSObject *)arg0 options:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (void)validateNewBufferArgs:(unsigned int)arg0 options:(unsigned int)arg1;
- (NSObject *)_newRenderPipelineStateWithDescriptor:(NSObject *)arg0 options:(unsigned int)arg1 reflection:(id *)arg2 error:(id *)arg3;
- (void)_newRenderPipelineStateWithDescriptor:(NSObject *)arg0 options:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (NSObject *)_newComputePipelineStateWithDescriptor:(NSObject *)arg0 options:(unsigned int)arg1 reflection:(id *)arg2 error:(id *)arg3;
- (void)_newComputePipelineStateWithDescriptor:(NSObject *)arg0 options:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (id)_newComputePipelineStateWithFunction:(id)arg0 options:(unsigned int)arg1 reflection:(id *)arg2 error:(id *)arg3;
- (void)_newComputePipelineStateWithFunction:(id)arg0 options:(unsigned int)arg1 completionHandler:(id /* block */)arg2;
- (NSObject *)newTextureWithDescriptor:(NSObject *)arg0 iosurface:(struct __IOSurface *)arg1 plane:(unsigned int)arg2;
- (NSOperationQueue *)newCommandQueue;
- (NSObject *)newLibraryWithSource:(NSObject *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
- (NSObject *)newRenderPipelineStateWithDescriptor:(NSObject *)arg0 error:(id *)arg1;
- (NSObject *)newSamplerStateWithDescriptor:(NSObject *)arg0;
- (NSObject *)newTextureWithDescriptor:(NSObject *)arg0;
- (id)newBufferWithLength:(unsigned int)arg0 options:(unsigned int)arg1;

@end
