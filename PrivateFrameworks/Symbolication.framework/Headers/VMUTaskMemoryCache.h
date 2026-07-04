/* Runtime dump - VMUTaskMemoryCache
 * Image: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUTaskMemoryCache : NSObject
{
    struct mapped_memory_t * _memoryRegions;
    unsigned int _task;
    char _taskIs64Bit;
    char _stopped;
    char _shouldTouchPages;
}

+ (char)taskIs64Bit:(unsigned int)arg0;
+ (NSURLSessionTask *)taskMemoryCacheForTask:(unsigned int)arg0;

- (VMUTaskMemoryCache *)initWithTask:(unsigned int)arg0;
- (void)dealloc;
- (int)peekAtAddress:(unsigned long long)arg0 size:(unsigned long long)arg1 returnsBuf:(void * *)arg2;
- (char)copyRange:(struct _VMURange)arg0 to:(void *)arg1;
- (int)startPeeking;
- (void)flushMemoryCache;
- (int)stopPeeking;
- (int)readPointerAt:(unsigned long long)arg0 value:(unsigned long long *)arg1;
- (void)finalize;

@end
