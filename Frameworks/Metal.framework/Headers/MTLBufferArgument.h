/* Runtime dump - MTLBufferArgument
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLBufferArgument : MTLArgument
{
    unsigned short _dataType;
    unsigned short _alignment;
    unsigned int _dataSize;
    MTLStructType * _structType;
}

- (unsigned int)bufferAlignment;
- (unsigned int)bufferDataSize;
- (id)describe;
- (MTLBufferArgument *)initWithName:(NSString *)arg0 type:(unsigned int)arg1 access:(unsigned int)arg2 isActive:(char)arg3 locationIndex:(unsigned int)arg4 arraySize:(unsigned int)arg5 dataType:(unsigned int)arg6 dataSize:(unsigned int)arg7 alignment:(unsigned int)arg8;
- (void)setStructType:(MTLStructType *)arg0;
- (unsigned int)bufferDataType;
- (MTLStructType *)bufferStructType;
- (void)dealloc;
- (NSString *)description;

@end
