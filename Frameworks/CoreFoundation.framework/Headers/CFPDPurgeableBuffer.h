/* Runtime dump - CFPDPurgeableBuffer
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDPurgeableBuffer : CFPDDataBuffer
{
    struct __CFData * handle;
    unsigned int allocSize;
    char safe;
    char usedMalloc;
}

- (char)beginAccessing;
- (void)endAccessing;
- (CFPDPurgeableBuffer *)initWithPropertyList:(void *)arg0;
- (void)dealloc;
- (unsigned long)length;
- (void *)bytes;

@end
