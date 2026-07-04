/* Runtime dump - MTLToolsCommandEncoder
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsCommandEncoder : MTLToolsObject <MTLCommandEncoder>

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) <MTLDevice> * device;
@property (copy) NSString * label;

- (void)insertDebugSignpost:(id)arg0;
- (void)pushDebugGroup:(NSObject *)arg0;
- (void)popDebugGroup;
- (void)endEncoding;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (<MTLDevice> *)device;

@end
