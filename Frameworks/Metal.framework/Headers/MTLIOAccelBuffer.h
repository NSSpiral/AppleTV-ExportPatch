/* Runtime dump - MTLIOAccelBuffer
 * Image: /System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLIOAccelBuffer : MTLIOAccelResource
{
    unsigned int _length;
    void * _pointer;
    id _deallocator;
    MTLIOAccelBuffer * _masterBuffer;
    short _masterHeapIndex;
    short _masterBufferIndex;
    int _masterBufferOffset;
}

@property (readonly) unsigned int length;
@property (readonly, nonatomic) void * contents;

- (struct __CFArray *)copyAnnotations;
- (void)flushModifiedRange:(struct _NSRange)arg0;
- (MTLIOAccelBuffer *)initWithDevice:(NSObject *)arg0 pointer:(void *)arg1 length:(unsigned int)arg2 options:(unsigned int)arg3 sysMemSize:(unsigned int)arg4 vidMemSize:(unsigned int)arg5 args:(struct IOAccelNewResourceArgs *)arg6 argsSize:(struct ?)arg7 deallocator:(struct ?)arg8;
- (MTLIOAccelBuffer *)initWithMasterBuffer:(MTLIOAccelBuffer *)arg0 heapIndex:(short)arg1 bufferIndex:(short)arg2 bufferOffset:(int)arg3 length:(unsigned int)arg4;
- (void)dealloc;
- (unsigned int)length;
- (void *)contents;

@end
