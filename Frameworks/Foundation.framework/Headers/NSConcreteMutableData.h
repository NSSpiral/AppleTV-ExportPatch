/* Runtime dump - NSConcreteMutableData
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteMutableData : NSMutableData
{
    id _reserved;
    id _needToZero;
    id _hasVM;
    id _retainCount;
    unsigned int _length;
    unsigned int _capacity;
    void * _bytes;
}

- (NSConcreteMutableData *)initWithBytes:(void *)arg0 length:(unsigned int)arg1 copy:(char)arg2 deallocator:(struct __CFAllocator *)arg3;
- (void)resetBytesInRange:(struct _NSRange)arg0;
- (void)_freeBytes;
- (void)replaceBytesInRange:(struct _NSRange)arg0 withBytes:(void *)arg1;
- (void)dealloc;
- (NSConcreteMutableData *)init;
- (unsigned int)length;
- (NSConcreteMutableData *)initWithCapacity:(unsigned int)arg0;
- (void *)bytes;
- (void)appendBytes:(void *)arg0 length:(void)arg1;
- (void)setLength:(unsigned int)arg0;
- (void)appendData:(NSData *)arg0;
- (void *)mutableBytes;
- (NSConcreteMutableData *)initWithLength:(unsigned int)arg0;
- (void)increaseLengthBy:(unsigned int)arg0;
- (void)finalize;

@end
