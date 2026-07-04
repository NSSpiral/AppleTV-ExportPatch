/* Runtime dump - MTLToolsComputeCommandEncoder
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsComputeCommandEncoder : MTLToolsCommandEncoder <MTLComputeCommandEncoder>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) <MTLDevice> * device;
@property (copy) NSString * label;

- (void)acceptVisitor:(NSObject *)arg0;
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

@end
