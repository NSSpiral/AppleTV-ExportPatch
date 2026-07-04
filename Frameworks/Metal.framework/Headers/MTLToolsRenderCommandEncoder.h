/* Runtime dump - MTLToolsRenderCommandEncoder
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsRenderCommandEncoder : MTLToolsCommandEncoder <MTLRenderCommandEncoderSPI>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) <MTLDevice> * device;
@property (copy) NSString * label;

- (void)setViewport:(struct ?)arg0;
- (void)setBlendColorRed:(float)arg0 green:(float)arg1 blue:(float)arg2 alpha:(float)arg3;
- (void)setVertexBytes:(void *)arg0 length:(void)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexBufferOffset:(unsigned int)arg0 atIndex:(unsigned int)arg1;
- (void)setVertexBuffers:(id *)arg0 offsets:(NSMutableData *)arg1 withRange:(unsigned int *)arg2;
- (void)setVertexTexture:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setVertexTextures:(id *)arg0 withRange:(unsigned int *)arg1;
- (void)setVertexSamplerState:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setVertexSamplerStates:(id *)arg0 withRange:(unsigned int *)arg1;
- (void)setVertexSamplerState:(NSObject *)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(unsigned int)arg3;
- (void)setVertexSamplerStates:(id *)arg0 lodMinClamps:(id)arg1 lodMaxClamps:(float *)arg2 withRange:(float)arg3;
- (void)setFrontFacingWinding:(unsigned int)arg0;
- (void)setDepthBias:(float)arg0 slopeScale:(float)arg1 clamp:(float)arg2;
- (void)setTriangleFillMode:(unsigned int)arg0;
- (void)setFragmentBytes:(void *)arg0 length:(void)arg1 atIndex:(unsigned int)arg2;
- (void)setFragmentBufferOffset:(unsigned int)arg0 atIndex:(unsigned int)arg1;
- (void)setFragmentBuffers:(id *)arg0 offsets:(NSMutableData *)arg1 withRange:(unsigned int *)arg2;
- (void)setFragmentTextures:(id *)arg0 withRange:(unsigned int *)arg1;
- (void)setFragmentSamplerStates:(id *)arg0 withRange:(unsigned int *)arg1;
- (void)setFragmentSamplerState:(NSObject *)arg0 lodMinClamp:(float)arg1 lodMaxClamp:(float)arg2 atIndex:(unsigned int)arg3;
- (void)setFragmentSamplerStates:(id *)arg0 lodMinClamps:(id)arg1 lodMaxClamps:(float *)arg2 withRange:(float)arg3;
- (void)setDepthStencilState:(<MTLDepthStencilState> *)arg0;
- (void)setStencilReferenceValue:(unsigned int)arg0;
- (void)setVisibilityResultMode:(unsigned int)arg0 offset:(unsigned int)arg1;
- (void)drawPrimitives:(unsigned int)arg0 vertexStart:(unsigned int)arg1 vertexCount:(unsigned int)arg2 instanceCount:(unsigned int)arg3;
- (void)drawIndexedPrimitives:(unsigned int)arg0 indexCount:(unsigned int)arg1 indexType:(unsigned int)arg2 indexBuffer:(NSObject *)arg3 indexBufferOffset:(unsigned int)arg4 instanceCount:(unsigned int)arg5;
- (void)drawPrimitives:(unsigned int)arg0 argumentBuffer:(NSObject *)arg1 offset:(unsigned int)arg2;
- (void)drawIndexedPrimitives:(unsigned int)arg0 argumentBuffer:(NSObject *)arg1 argumentBufferOffset:(unsigned int)arg2 indexType:(unsigned int)arg3 indexBuffer:(NSObject *)arg4 indexBufferOffset:(unsigned int)arg5;
- (void)addSplitHandler:(id /* block */)arg0;
- (void)acceptVisitor:(NSObject *)arg0;
- (void)setFragmentTexture:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setFragmentSamplerState:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)setScissorRect:(struct ?)arg0;
- (void)setRenderPipelineState:(<MTLRenderPipelineState> *)arg0;
- (void)drawPrimitives:(unsigned int)arg0 vertexStart:(unsigned int)arg1 vertexCount:(unsigned int)arg2;
- (void)drawIndexedPrimitives:(unsigned int)arg0 indexCount:(unsigned int)arg1 indexType:(unsigned int)arg2 indexBuffer:(NSObject *)arg3 indexBufferOffset:(unsigned int)arg4;
- (void)setFragmentBuffer:(NSObject *)arg0 offset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setVertexBuffer:(NSObject *)arg0 offset:(unsigned int)arg1 atIndex:(unsigned int)arg2;
- (void)setCullMode:(unsigned int)arg0;
- (void)setLineWidth:(float)arg0;

@end
