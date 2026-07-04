/* Runtime dump - MTLToolsSamplerState
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsSamplerState : MTLToolsObject <MTLSamplerState>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) NSString * label;
@property (readonly) <MTLDevice> * device;

- (void)acceptVisitor:(NSObject *)arg0;
- (void)dealloc;
- (NSString *)label;
- (<MTLDevice> *)device;

@end
