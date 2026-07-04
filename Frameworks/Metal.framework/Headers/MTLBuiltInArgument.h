/* Runtime dump - MTLBuiltInArgument
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLBuiltInArgument : MTLArgument
{
    unsigned short _builtInType;
    unsigned short _builtInDataType;
}

- (unsigned int)builtInDataType;
- (unsigned int)builtInType;
- (MTLBuiltInArgument *)initWithName:(NSString *)arg0 type:(unsigned int)arg1 access:(unsigned int)arg2 active:(char)arg3 index:(unsigned int)arg4 dataType:(unsigned int)arg5 builtInType:(unsigned int)arg6;

@end
