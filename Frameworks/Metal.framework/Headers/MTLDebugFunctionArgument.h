/* Runtime dump - MTLDebugFunctionArgument
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugFunctionArgument : NSObject
{
    char isValid;
    char hasBeenUsed;
    unsigned int type;
    id object;
    unsigned int bufferLength;
    unsigned int bufferOffset;
    unsigned int threadgroupMemoryLength;
    char hasLodClamp;
    float lodMinClamp;
    float lodMaxClamp;
}

- (MTLDebugFunctionArgument *)init;
- (NSString *)description;
- (void).cxx_destruct;

@end
