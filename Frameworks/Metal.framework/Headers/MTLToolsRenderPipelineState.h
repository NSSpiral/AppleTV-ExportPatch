/* Runtime dump - MTLToolsRenderPipelineState
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsRenderPipelineState : MTLToolsObject <MTLRenderPipelineState>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSString * label;
@property (readonly) <MTLDevice> * device;

- (void)acceptVisitor:(NSObject *)arg0;
- (NSString *)label;
- (<MTLDevice> *)device;

@end
