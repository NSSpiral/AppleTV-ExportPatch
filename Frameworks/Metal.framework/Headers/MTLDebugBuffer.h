/* Runtime dump - MTLDebugBuffer
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLDebugBuffer : MTLToolsBuffer
{
    char _purgeableStateHasBeenSet;
    unsigned int _options;
    void * _pointer;
    unsigned int _purgeableState;
}

@property (nonatomic) unsigned int options;
@property (readonly, nonatomic) void * pointer;
@property (readonly, nonatomic) unsigned int purgeableState;
@property (readonly, nonatomic) char purgeableStateHasBeenSet;

- (void *)pointer;
- (NSObject *)newTextureWithDescriptor:(NSObject *)arg0 offset:(unsigned int)arg1 bytesPerRow:(unsigned int)arg2;
- (unsigned int)setPurgeableState:(unsigned int)arg0;
- (MTLDebugBuffer *)initWithBuffer:(Buffer *)arg0 device:(NSObject *)arg1 options:(unsigned int)arg2;
- (MTLDebugBuffer *)initWithBuffer:(Buffer *)arg0 device:(NSObject *)arg1 bytes:(void *)arg2 options:(void)arg3;
- (unsigned int)purgeableState;
- (char)purgeableStateHasBeenSet;
- (NSString *)description;
- (void)setOptions:(unsigned int)arg0;
- (unsigned int)options;

@end
