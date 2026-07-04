/* Runtime dump - MTLIOAccelCommandBuffer
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelCommandBuffer : _MTLCommandBuffer
{
    MTLIOAccelDevice<MTLDevice> * _device;
    struct MTLIOAccelCommandBufferStorage * _storage;
    unsigned long long * _submitToHardwareTimeStampPointer;
    void * _scheduledCallbackBlockPtr;
    void * _completedCallbackBlockPtr;
    NSObject<OS_dispatch_semaphore> * _commitAndResetSem;
}

@property (readonly) struct MTLIOAccelCommandBufferResourceInfo * commandBufferResourceInfo;
@property (readonly) struct IOAccelResourceList * ioAccelResourceList;
@property (readonly) <MTLDevice> * device;
@property (readonly) struct MTLIOAccelCommandBufferStorage * commandBufferStorage;

- (MTLIOAccelCommandBuffer *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 retainedReferences:(char)arg1 synchronousDebugMode:(char)arg2;
- (void)didComplete:(unsigned long long)arg0 error:(unsigned int)arg1;
- (void)kernelCommandCollectTimeStamp;
- (void)commitAndReset;
- (MTLIOAccelCommandBuffer *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 retainedReferences:(char)arg1;
- (void)getCurrentKernelCommandBufferStart:(void * *)arg0 current:(void)arg1 end:(void * *)arg2;
- (void)getCurrentKernelCommandBufferPointer:(void * *)arg0 end:(void)arg1;
- (void)setCurrentKernelCommandBufferPointer:(void *)arg0;
- (void)growKernelCommandBuffer:(unsigned long)arg0;
- (void)allocCommandBufferResourceAtIndex:(unsigned int)arg0;
- (struct IOAccelResourceList *)ioAccelResourceList;
- (struct IOAccelSegmentListHeader *)getSegmentListHeader;
- (void)getSegmentListPointerStart:(void * *)arg0 current:(void)arg1 end:(void * *)arg2;
- (struct MTLIOAccelCommandBufferResourceInfo *)commandBufferResourceInfo;
- (void)setCurrentSegmentListPointer:(void *)arg0;
- (void)growSegmentList;
- (void)beginSegment:(void *)arg0;
- (void)endCurrentSegment;
- (NSArray *)akResourceList;
- (NSArray *)akPrivateResourceList;
- (struct MTLIOAccelCommandBufferStorage *)commandBufferStorage;
- (void)dealloc;
- (void)commit;
- (<MTLDevice> *)device;

@end
