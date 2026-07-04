/* Runtime dump - MTLDebugComputePipelineState
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugComputePipelineState : MTLToolsComputePipelineState
{
    <MTLFunction> * _function;
    MTLComputePipelineDescriptor * _descriptor;
    MTLComputePipelineReflection * _reflection;
}

@property (readonly, nonatomic) <MTLFunction> * function;
@property (readonly, nonatomic) MTLComputePipelineDescriptor * descriptor;
@property (readonly, nonatomic) MTLComputePipelineReflection * reflection;

- (MTLDebugComputePipelineState *)initWithComputePipelineState:(<MTLComputePipelineState> *)arg0 reflection:(MTLComputePipelineReflection *)arg1 parent:(NSObject *)arg2 descriptor:(MTLComputePipelineDescriptor *)arg3;
- (NSString *)description;
- (void).cxx_destruct;
- (MTLComputePipelineDescriptor *)descriptor;
- (<MTLFunction> *)function;
- (id)getParameter:(ICSRoleParameter *)arg0;
- (MTLComputePipelineReflection *)reflection;

@end
