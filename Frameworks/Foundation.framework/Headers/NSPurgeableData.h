/* Runtime dump - NSPurgeableData
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPurgeableData : NSMutableData <NSDiscardableContent>
{
    unsigned int _length;
    int _accessCount;
    id _private;
    void * _reserved;
}

- (NSPurgeableData *)initWithBytes:(void *)arg0 length:(unsigned int)arg1 copy:(char)arg2 deallocator:(struct __CFAllocator *)arg3;
- (void)_destroyMemory;
- (void)dealloc;
- (NSPurgeableData *)init;
- (NSString *)description;
- (unsigned int)length;
- (NSPurgeableData *)initWithCapacity:(unsigned int)arg0;
- (void *)bytes;
- (void)setLength:(unsigned int)arg0;
- (char)beginContentAccess;
- (void)endContentAccess;
- (void)discardContentIfPossible;
- (char)isContentDiscarded;
- (void *)mutableBytes;
- (void)finalize;

@end
