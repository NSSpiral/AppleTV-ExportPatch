/* Runtime dump - MTLToolsLibrary
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsLibrary : MTLToolsObject <MTLLibrarySPI>
{
    MTLToolsPointerArray * _functions;
}

@property (readonly, nonatomic) MTLToolsPointerArray * functions;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy) NSString * label;
@property (readonly) <MTLDevice> * device;
@property (readonly) NSArray * functionNames;

- (void)acceptVisitor:(NSObject *)arg0;
- (MTLToolsLibrary *)initWithBaseObject:(NSObject *)arg0 parent:(NSObject *)arg1;
- (MTLToolsPointerArray *)functions;
- (NSArray *)functionNames;
- (NSString *)newFunctionWithName:(NSString *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;
- (void).cxx_destruct;
- (<MTLDevice> *)device;

@end
