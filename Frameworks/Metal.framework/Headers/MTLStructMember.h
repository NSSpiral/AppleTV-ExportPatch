/* Runtime dump - MTLStructMember
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLStructMember : NSObject
{
    id _offset;
    id _dataType;
    id _details;
    NSString * _name;
}

@property (readonly) NSString * name;
@property (readonly) unsigned int offset;
@property (readonly) unsigned int dataType;

- (unsigned int)dataType;
- (id)describe;
- (MTLStructMember *)initWithName:(NSString *)arg0 offset:(unsigned int)arg1 dataType:(unsigned int)arg2 details:(id *)arg3;
- (NSObject *)arrayType;
- (MTLStructType *)structType;
- (void)dealloc;
- (NSString *)name;
- (unsigned int)offset;

@end
