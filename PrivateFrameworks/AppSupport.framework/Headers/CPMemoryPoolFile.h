/* Runtime dump - CPMemoryPoolFile
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPMemoryPoolFile : NSObject
{
    struct _opaque_pthread_mutex_t _mutex;
    int _fd;
    char * _slots;
    unsigned long _slotCount;
    unsigned long _slotLength;
    struct __CFBitVector * _usedSlots;
    struct __CFAllocator * _deallocator;
}

- (void)dealloc;
- (CPMemoryPoolFile *)initWithLabel:(char *)arg0 slotCount:(unsigned long)arg1 slotLength:(unsigned long)arg2;
- (NSData *)nextSlotWithBytes:(void *)arg0 length:(void)arg1;
- (void)returnSlot:(void *)arg0;

@end
