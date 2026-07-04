/* Runtime dump - MTLComputePipelineDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLComputePipelineDescriptor : NSObject <NSCopying>
{
    struct MTLComputePipelineDescriptorPrivate * _private;
}

@property (copy, nonatomic) NSString * label;
@property (retain, nonatomic) <MTLFunction> * computeFunction;

- (struct MTLComputePipelineDescriptorPrivate *)_descriptorPrivate;
- (void)setComputeFunction:(<MTLFunction> *)arg0;
- (<MTLFunction> *)computeFunction;
- (void)dealloc;
- (MTLComputePipelineDescriptor *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)validate;
- (void)reset;
- (MTLComputePipelineDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)label;
- (void)setLabel:(NSString *)arg0;

@end
