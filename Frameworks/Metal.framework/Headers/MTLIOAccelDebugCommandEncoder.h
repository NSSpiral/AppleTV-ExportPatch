/* Runtime dump - MTLIOAccelDebugCommandEncoder
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelDebugCommandEncoder : _MTLDebugCommandEncoder
{
    void * _kernelCommandBufferCurrent;
    void * _kernelCommandBufferEnd;
    struct IOAccelResourceList * _resourceList;
    MTLResourceList * _api_resourceList;
}

- (MTLIOAccelDebugCommandEncoder *)initWithCommandBuffer:(NSObject *)arg0;
- (void)kprintfBytes:(char *)arg0 length:(unsigned long)arg1;
- (void)IOLogBytes:(char *)arg0 length:(unsigned long)arg1;
- (void)restartDebugPass;
- (void *)reserveKernelCommandBufferSpace:(unsigned long)arg0;
- (unsigned int)addDebugResourceListInfo:(struct IOAccelResourceInfo *)arg0 flag:(unsigned int)arg1;
- (void)debugBytes:(char *)arg0 length:(unsigned long)arg1 output_type:(unsigned int)arg2;
- (void)debugResourceBytes:(unsigned int)arg0 length:(unsigned long)arg1 output_type:(unsigned int)arg2;
- (void)addAPIResource:(NSObject *)arg0;
- (void)kprintfResource:(unsigned int)arg0 length:(unsigned int)arg1;
- (void)IOLogResource:(unsigned int)arg0 length:(unsigned int)arg1;
- (void)endEncoding;
- (void)dealloc;

@end
