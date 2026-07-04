/* Runtime dump - MTLRenderPipelineReflection
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLRenderPipelineReflection : NSObject
{
    struct ? _flags;
    NSArray * _vertexBuiltInArguments;
    NSArray * _vertexArguments;
    NSArray * _fragmentArguments;
}

@property (readonly) NSArray * vertexArguments;
@property (readonly) NSArray * fragmentArguments;

- (NSArray *)vertexArguments;
- (NSArray *)fragmentArguments;
- (NSArray *)vertexBuiltInArguments;
- (MTLRenderPipelineReflection *)initWithVertexData:(struct ? *)arg0 fragmentData:(NSData *)arg1 serializedVertexDescriptor:(NSObject *)arg2 options:(unsigned int)arg3 flags:(struct ?)arg4;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;

@end
