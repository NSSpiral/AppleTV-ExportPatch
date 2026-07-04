/* Runtime dump - MTLDebugParallelRenderCommandEncoder
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugParallelRenderCommandEncoder : MTLToolsParallelRenderCommandEncoder
{
    MTLRenderPassDescriptor * _descriptor;
}

@property (readonly, copy, nonatomic) MTLRenderPassDescriptor * descriptor;

- (NSObject *)renderCommandEncoder;
- (NSObject *)sampledRenderCommandEncoderWithProgramInfoBuffer:(struct ? *)arg0 capacity:(unsigned int)arg1;
- (MTLDebugParallelRenderCommandEncoder *)initWithBaseRenderPass:(id)arg0 commandBuffer:(struct CommandBuffer *)arg1 descriptor:(MTLRenderPassDescriptor *)arg2;
- (NSString *)description;
- (void).cxx_destruct;
- (MTLRenderPassDescriptor *)descriptor;

@end
