/* Runtime dump - MTLVertexDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexDescriptor : NSObject <NSCopying>
{
    MTLVertexBufferLayoutDescriptorArray * _vertexBufferArray;
    MTLVertexAttributeDescriptorArray * _attributeArray;
}

@property (readonly) MTLVertexBufferLayoutDescriptorArray * layouts;
@property (readonly) MTLVertexAttributeDescriptorArray * attributes;

+ (MTLVertexDescriptor *)vertexDescriptor;

- (NSObject *)serializeDescriptor;
- (void)dealloc;
- (MTLVertexDescriptor *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)reset;
- (MTLVertexDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (MTLVertexAttributeDescriptorArray *)attributes;
- (MTLVertexBufferLayoutDescriptorArray *)layouts;

@end
