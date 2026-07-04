/* Runtime dump - MTLThreadgroupMemoryArgument
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLThreadgroupMemoryArgument : MTLArgument
{
    unsigned short _alignment;
    unsigned int _dataSize;
}

- (id)describe;
- (MTLThreadgroupMemoryArgument *)initWithName:(NSString *)arg0 type:(unsigned int)arg1 access:(unsigned int)arg2 isActive:(char)arg3 locationIndex:(unsigned int)arg4 arraySize:(unsigned int)arg5 dataSize:(unsigned int)arg6 alignment:(unsigned int)arg7;
- (unsigned int)threadgroupMemoryAlignment;
- (unsigned int)threadgroupMemoryDataSize;
- (NSString *)description;

@end
