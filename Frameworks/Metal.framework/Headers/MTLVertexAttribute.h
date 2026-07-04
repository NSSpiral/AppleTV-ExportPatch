/* Runtime dump - MTLVertexAttribute
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLVertexAttribute : NSObject
{
    char _active;
    NSString * _name;
    unsigned int _attributeIndex;
    unsigned int _attributeType;
}

@property (readonly) NSString * name;
@property (readonly) unsigned int attributeIndex;
@property (readonly) unsigned int attributeType;
@property (readonly) char active;

- (unsigned int)attributeType;
- (void)setAttributeType:(unsigned int)arg0;
- (MTLVertexAttribute *)initWithName:(NSString *)arg0 attributeIndex:(unsigned int)arg1 attributeType:(unsigned int)arg2 isActive:(char)arg3;
- (unsigned int)attributeIndex;
- (void)dealloc;
- (NSString *)description;
- (char)isActive;
- (NSString *)name;

@end
