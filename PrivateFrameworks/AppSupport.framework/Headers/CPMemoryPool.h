/* Runtime dump - CPMemoryPool
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPMemoryPool : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray * _files;
    char * _label;
    unsigned long _slotLength;
}

@property (readonly, nonatomic) unsigned long slotLength;

- (void)dealloc;
- (NSData *)nextSlotWithBytes:(void *)arg0 length:(void)arg1;
- (CPMemoryPool *)initWithLabel:(char *)arg0 slotLength:(unsigned long)arg1;
- (unsigned long)slotLength;

@end
