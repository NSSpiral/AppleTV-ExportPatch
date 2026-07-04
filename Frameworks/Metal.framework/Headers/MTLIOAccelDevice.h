/* Runtime dump - MTLIOAccelDevice
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelDevice : _MTLDevice
{
    struct __IOAccelDevice * _deviceRef;
    struct __IOAccelShared * _sharedRef;
    MTLIOAccelDeviceShmemPool * _kernelCommandShmemPool;
    MTLIOAccelDeviceShmemPool * _segmentListShmemPool;
    id * _hwResourcePools;
    unsigned int _hwResourcePoolCount;
    MTLResourceListPool * _akResourceListPool;
    MTLResourceListPool * _akPrivateResourceListPool;
    struct MTLIOAccelCommandBufferStoragePool * _commandBufferStoragePool;
    unsigned int _configBits;
    unsigned int _deviceBits;
    unsigned long long _textureRam;
    unsigned long long _videoRam;
    unsigned int _accelID;
    unsigned long long _segmentByteThreshold;
    int _numCommandBuffers;
    id _bufferHeaps;
    NSObject<OS_dispatch_queue> * _device_dispatch_queue;
    unsigned int * _defaultBufferOptions;
}

@property (readonly) id * hwResourcePools;
@property (readonly) unsigned int hwResourcePoolCount;
@property (readonly) unsigned int * defaultBufferOptions;
@property (readonly) int numCommandBuffers;

+ (void)registerDevices;

- (struct __IOAccelShared *)sharedRef;
- (void)deallocBufferSubData:(NSData *)arg0 heapIndex:(short)arg1 bufferIndex:(short)arg2 bufferOffset:(int)arg3 length:(int)arg4;
- (MTLIOAccelDevice *)initWithAcceleratorPort:(unsigned int)arg0;
- (short)heapIndexWithOptions:(unsigned int)arg0;
- (void)setSegmentListShmemSize:(unsigned int)arg0;
- (void)setComputePipelineStateCommandShmemSize:(unsigned int)arg0;
- (void)setHwResourcePool:(id *)arg0 count:(int)arg1;
- (MTLResourceListPool *)akResourceListPool;
- (MTLResourceListPool *)akPrivateResourceListPool;
- (struct __IOAccelDevice *)deviceRef;
- (id)allocBufferSubDataWithLength:(unsigned int)arg0 options:(unsigned int)arg1 alignment:(int)arg2 heapIndex:(short *)arg3 bufferIndex:(short *)arg4 bufferOffset:(int *)arg5;
- (id *)hwResourcePools;
- (unsigned int)hwResourcePoolCount;
- (unsigned int *)defaultBufferOptions;
- (int)numCommandBuffers;
- (void)dealloc;

@end
