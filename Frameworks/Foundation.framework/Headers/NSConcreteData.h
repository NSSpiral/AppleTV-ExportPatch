/* Runtime dump - NSConcreteData
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteData : NSData
{
    id _isInline;
    id _retainCount;
    unsigned int _length;
    unsigned int _capacity;
    void * _bytes;
    id _u;
}

- (NSConcreteData *)initWithBytes:(void *)arg0 length:(unsigned int)arg1 copy:(char)arg2 deallocator:(struct __CFAllocator *)arg3;
- (NSConcreteData *)initWithBytes:(void *)arg0 length:(unsigned int)arg1 copy:(char)arg2 freeWhenDone:(char)arg3 bytesAreVM:(char)arg4;
- (char)_isCompact;
- (char)_copyWillRetain;
- (void)getBytes:(void *)arg0;
- (void)dealloc;
- (NSConcreteData *)init;
- (unsigned int)length;
- (void *)bytes;
- (NSConcreteData *)copyWithZone:(struct _NSZone *)arg0;
- (void)getBytes:(void *)arg0 length:(unsigned int)arg1;
- (void)getBytes:(void *)arg0 range:(struct _NSRange)arg1;
- (void)finalize;

@end
