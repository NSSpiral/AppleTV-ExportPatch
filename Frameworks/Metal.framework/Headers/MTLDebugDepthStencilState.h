/* Runtime dump - MTLDebugDepthStencilState
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugDepthStencilState : MTLToolsDepthStencilState
{
    MTLDepthStencilDescriptor * _descriptor;
}

@property (readonly, nonatomic) MTLDepthStencilDescriptor * descriptor;

- (MTLDebugDepthStencilState *)initWithBaseDepthStencilState:(NSObject *)arg0 device:(NSObject *)arg1 descriptor:(MTLDepthStencilDescriptor *)arg2;
- (NSString *)description;
- (void).cxx_destruct;
- (MTLDepthStencilDescriptor *)descriptor;

@end
