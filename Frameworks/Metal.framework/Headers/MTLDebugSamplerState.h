/* Runtime dump - MTLDebugSamplerState
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugSamplerState : MTLToolsSamplerState
{
    MTLSamplerDescriptor * _descriptor;
}

@property (readonly, copy, nonatomic) MTLSamplerDescriptor * descriptor;

- (MTLDebugSamplerState *)initWithBaseSamplerState:(NSObject *)arg0 device:(NSObject *)arg1 descriptor:(MTLSamplerDescriptor *)arg2;
- (NSString *)description;
- (void).cxx_destruct;
- (MTLSamplerDescriptor *)descriptor;

@end
