/* Runtime dump - MTLArgument
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLArgument : NSObject
{
    char _active;
    NSString * _name;
    unsigned int _type;
    unsigned int _access;
    unsigned int _index;
}

@property (readonly) NSString * name;
@property (readonly) unsigned int type;
@property (readonly) unsigned int access;
@property (readonly) unsigned int index;
@property (readonly) char active;
@property (readonly) unsigned int bufferAlignment;
@property (readonly) unsigned int bufferDataSize;
@property (readonly) unsigned int bufferDataType;
@property (readonly) MTLStructType * bufferStructType;
@property (readonly) unsigned int threadgroupMemoryAlignment;
@property (readonly) unsigned int threadgroupMemoryDataSize;
@property (readonly) unsigned int textureType;
@property (readonly) unsigned int textureDataType;

- (unsigned int)textureType;
- (unsigned int)access;
- (unsigned int)bufferAlignment;
- (unsigned int)bufferDataSize;
- (unsigned int)textureDataType;
- (MTLArgument *)initWithName:(NSString *)arg0 type:(unsigned int)arg1 access:(unsigned int)arg2 index:(unsigned int)arg3 active:(char)arg4;
- (id)describe;
- (unsigned int)bufferDataType;
- (MTLStructType *)bufferStructType;
- (unsigned int)threadgroupMemoryAlignment;
- (unsigned int)threadgroupMemoryDataSize;
- (void)dealloc;
- (NSString *)description;
- (char)isActive;
- (NSString *)name;
- (unsigned int)type;
- (unsigned int)index;

@end
