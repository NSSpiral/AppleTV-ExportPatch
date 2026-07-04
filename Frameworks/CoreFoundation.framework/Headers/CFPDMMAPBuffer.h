/* Runtime dump - CFPDMMAPBuffer
 * Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */

@interface CFPDMMAPBuffer : CFPDDataBuffer
{
    void * bytes;
    unsigned long length;
}

- (CFPDMMAPBuffer *)initWithFileDescriptor:(int)arg0 size:(unsigned long)arg1 allowMappingIfSafe:(char)arg2;
- (CFPDMMAPBuffer *)initWithSize:(unsigned long)arg0 bufferPtr:(void * *)arg1;
- (void)dealloc;
- (unsigned long)length;
- (void *)bytes;
- (void)finalize;

@end
