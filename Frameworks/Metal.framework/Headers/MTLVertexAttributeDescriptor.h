/* Runtime dump - MTLVertexAttributeDescriptor
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexAttributeDescriptor : NSObject <NSCopying>
{
    unsigned int _vertexFormat;
    unsigned int _offset;
    unsigned int _bufferIndex;
}

@property (nonatomic) unsigned int format;
@property (nonatomic) unsigned int offset;
@property (nonatomic) unsigned int bufferIndex;

- (unsigned int)bufferIndex;
- (void)setBufferIndex:(unsigned int)arg0;
- (MTLVertexAttributeDescriptor *)copyWithZone:(struct _NSZone *)arg0;
- (void)setOffset:(unsigned int)arg0;
- (unsigned int)offset;
- (unsigned int)format;
- (void)setFormat:(unsigned int)arg0;

@end
