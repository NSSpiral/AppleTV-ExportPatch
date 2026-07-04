/* Runtime dump - MTLToolsComputePipelineState
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsComputePipelineState : MTLToolsObject <MTLComputePipelineStateSPI>
{
    <MTLFunction> * _function;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) <MTLDevice> * device;
@property (readonly) unsigned int maxTotalThreadsPerThreadgroup;
@property (readonly) unsigned int threadExecutionWidth;
@property (readonly) unsigned int staticLocalMemorySize;

- (void)acceptVisitor:(NSObject *)arg0;
- (unsigned int)maxTotalThreadsPerThreadgroup;
- (unsigned int)threadExecutionWidth;
- (unsigned int)staticLocalMemorySize;
- (void).cxx_destruct;
- (<MTLDevice> *)device;

@end
