/* Runtime dump - MTLComputePipelineReflection
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLComputePipelineReflection : NSObject
{
    NSArray * _builtInArguments;
    struct ? _flags;
    NSArray * _arguments;
}

@property (readonly) NSArray * arguments;

- (NSArray *)builtInArguments;
- (MTLComputePipelineReflection *)initWithSerializedData:(NSData *)arg0 options:(unsigned int)arg1 flags:(struct ?)arg2;
- (void)dealloc;
- (NSString *)description;
- (void).cxx_construct;
- (NSArray *)arguments;

@end
