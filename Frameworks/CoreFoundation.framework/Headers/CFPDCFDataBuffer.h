/* Runtime dump - CFPDCFDataBuffer
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDCFDataBuffer : CFPDDataBuffer
{
    struct __CFData * data;
}

- (struct __CFData *)copyCFData;
- (CFPDCFDataBuffer *)initWithCFData:(struct __CFData *)arg0;
- (void)dealloc;
- (unsigned long)length;
- (void *)bytes;
- (void)finalize;

@end
