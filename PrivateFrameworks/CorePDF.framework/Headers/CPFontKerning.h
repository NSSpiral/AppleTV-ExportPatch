/* Runtime dump - CPFontKerning
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPFontKerning : NSObject <CPDisposable>
{
    struct __CFData * kernTable;
    char * dataPtr;
    unsigned int offset;
    unsigned int kernTableLength;
    struct __CFDictionary * kernDictionary;
    char override;
    char valid;
}

- (void)dealloc;
- (void)dispose;
- (unsigned char)readByte;
- (unsigned int)readUnsignedLong;
- (CPFontKerning *)initWithKernData:(struct __CFData *)arg0;
- (unsigned short)readUnsignedShort;
- (void)doKerningPair;
- (void)doSubtableFormat0;
- (void)doSubtableFormat1;
- (void)doSubtableFormat2;
- (void)doSubtableFormat3;
- (void)doOTSubtable;
- (void)doTTSubtable;
- (void)doTable;
- (CPFontKerning *)initWithCGFont:(struct CGFont *)arg0;
- (short)readShort;
- (struct __CFDictionary *)createKernTable;
- (void)finalize;

@end
