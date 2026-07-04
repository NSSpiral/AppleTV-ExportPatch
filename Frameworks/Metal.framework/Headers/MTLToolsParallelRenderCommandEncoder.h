/* Runtime dump - MTLToolsParallelRenderCommandEncoder
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsParallelRenderCommandEncoder : MTLToolsCommandEncoder <MTLParallelRenderCommandEncoder>
{
    MTLToolsPointerArray * _renderCommandEncoders;
}

@property (readonly, nonatomic) MTLToolsPointerArray * renderCommandEncoders;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) <MTLDevice> * device;
@property (copy) NSString * label;

- (void)acceptVisitor:(NSObject *)arg0;
- (MTLToolsParallelRenderCommandEncoder *)initWithBaseObject:(NSObject *)arg0 parent:(NSObject *)arg1;
- (NSObject *)renderCommandEncoder;
- (MTLToolsPointerArray *)renderCommandEncoders;
- (void).cxx_destruct;

@end
