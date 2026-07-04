/* Runtime dump - CPFontInfo
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPFontInfo : NSObject <CPDisposable>
{
    struct __CFData * fontData;
    char * dataPtr;
    unsigned int offset;
    unsigned int fontDataLength;
    char valid;
}

- (void)dealloc;
- (void)dispose;
- (int)kernUnitsPerEm;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (float)readFloat;
- (struct CGRect)readRect;
- (int)readLong;
- (CPFontInfo *)initWithFontData:(struct __CFData *)arg0;
- (char)getDescriptor:(struct ? *)arg0;
- (struct __CFData *)newKernData;
- (void)finalize;

@end
