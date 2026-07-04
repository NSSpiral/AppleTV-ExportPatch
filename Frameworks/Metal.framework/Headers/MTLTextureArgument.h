/* Runtime dump - MTLTextureArgument
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLTextureArgument : MTLArgument
{
    unsigned short _textureType;
    unsigned short _textureDataType;
}

- (unsigned int)textureType;
- (unsigned int)textureDataType;
- (MTLTextureArgument *)initWithName:(NSString *)arg0 access:(unsigned int)arg1 isActive:(char)arg2 locationIndex:(unsigned int)arg3 arraySize:(unsigned int)arg4 dataType:(unsigned int)arg5 textureType:(unsigned int)arg6;
- (NSString *)description;

@end
