/* Runtime dump - MTLToolsFunction
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLToolsFunction : MTLToolsObject <MTLFunctionSPI>
{
    MTLToolsPointerArray * _functions;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly) <MTLDevice> * device;
@property (readonly) unsigned int functionType;
@property (readonly) NSArray * vertexAttributes;
@property (readonly) NSString * name;
@property (readonly, copy) NSString * filePath;
@property (readonly) int lineNumber;

- (int)lineNumber;
- (void)acceptVisitor:(NSObject *)arg0;
- (MTLToolsFunction *)initWithBaseObject:(NSObject *)arg0 parent:(NSObject *)arg1;
- (MTLToolsFunction *)initWithBaseObject:(NSObject *)arg0 parent:(NSObject *)arg1 functions:(MTLToolsPointerArray *)arg2;
- (unsigned int)functionType;
- (void)dealloc;
- (NSString *)name;
- (void).cxx_destruct;
- (NSString *)filePath;
- (NSArray *)vertexAttributes;
- (<MTLDevice> *)device;

@end
