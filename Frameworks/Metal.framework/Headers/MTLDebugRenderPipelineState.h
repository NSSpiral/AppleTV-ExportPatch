/* Runtime dump - MTLDebugRenderPipelineState
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugRenderPipelineState : MTLToolsRenderPipelineState
{
    MTLRenderPipelineDescriptor * _descriptor;
    MTLRenderPipelineReflection * _reflection;
}

@property (readonly, nonatomic) MTLRenderPipelineDescriptor * descriptor;
@property (readonly, nonatomic) MTLRenderPipelineReflection * reflection;

- (MTLDebugRenderPipelineState *)initWithPipelineState:(TSCH3DSceneRenderPipeline *)arg0 reflection:(MTLRenderPipelineReflection *)arg1 parent:(NSObject *)arg2 descriptor:(MTLRenderPipelineDescriptor *)arg3;
- (NSString *)description;
- (void).cxx_destruct;
- (MTLRenderPipelineDescriptor *)descriptor;
- (id)getParameter:(ICSRoleParameter *)arg0;
- (MTLRenderPipelineReflection *)reflection;

@end
