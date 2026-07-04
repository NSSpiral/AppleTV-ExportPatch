/* Runtime dump - MTLDebugComputeCommandEncoder
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugComputeCommandEncoder : MTLToolsComputeCommandEncoder
{
    id _buffers;
    id _textures;
    id _samplers;
    id _threadgroupMemoryLengths;
    struct ? * _limits;
    char canDealloc;
    char canEndEncoding;
    char canSetComputePipelineState;
    char hasEndEncoding;
    char hasSetComputePipelineState;
    <MTLDevice> * _cachedDevice;
    <MTLComputePipelineState> * _computePipelineState;
}

@property (readonly, nonatomic) <MTLDevice> * cachedDevice;
@property (readonly, weak, nonatomic) <MTLComputePipelineState> * computePipelineState;

- (void)_setDefaults;
- (void)_validateAllFunctionArguments;
- (<MTLDevice> *)cachedDevice;
- (MTLDebugComputeCommandEncoder *)initWithComputeCommandEncoder:(NSObject *)arg0 commandBuffer:(struct CommandBuffer *)arg1;
- (void)setComputePipelineState:(<MTLComputePipelineState> *)arg0;
- (void)setBytes:(void *)arg0 length:(void)arg1 atIndex:(unsigned int)arg2;
- (void)setBuffer:(TSCH3DDataBuffer *)arg0 offset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setBufferOffset:(unsigned int)arg0 atIndex:(unsigned int)arg1;
- (void)setBuffers:(id *)arg0 offsets:(NSMutableData *)arg1 withRange:(unsigned int *)arg2;
- (void)setTexture:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setTextures:(id *)arg0 withRange:(unsigned int *)arg1;
- (void)setSamplerState:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setSamplerStates:(id *)arg0 withRange:(unsigned int *)arg1;
- (void)setSamplerState:(NSObject *)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(unsigned int)arg3;
- (void)setSamplerStates:(id *)arg0 lodMinClamps:(id)arg1 lodMaxClamps:(float *)arg2 withRange:(float)arg3;
- (void)setThreadgroupMemoryLength:(unsigned int)arg0 atIndex:(unsigned int)arg1;
- (void)dispatchThreadgroups:(struct ?)arg0 threadsPerThreadgroup:(struct ?)arg1;
- (void)executeBarrier;
- (<MTLComputePipelineState> *)computePipelineState;
- (void)endEncoding;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_destruct;

@end
