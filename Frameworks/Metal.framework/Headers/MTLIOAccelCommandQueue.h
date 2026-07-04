/* Runtime dump - MTLIOAccelCommandQueue
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelCommandQueue : _MTLCommandQueue
{
    struct __IOAccelCommandQueue * _commandQueue;
    MTLIOAccelDevice<MTLDevice> * _device;
}

@property (readonly) <MTLDevice> * device;

- (MTLIOAccelCommandQueue *)initWithDevice:(<MTLDevice> *)arg0 maxCommandBufferCount:(unsigned long)arg1;
- (void)submitCommandBuffers:(id *)arg0 count:(unsigned int)arg1;
- (void)dealloc;
- (<MTLDevice> *)device;

@end
