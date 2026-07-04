/* Runtime dump - MFBitmap
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFBitmap : NSObject
{
    int m_width;
    int m_height;
    unsigned int m_bitsPerPixel;
    int m_compression;
    char m_isOS2;
    unsigned int m_infoHeaderSize;
    unsigned int m_paletteSize;
    NSMutableData * m_bmpData;
}

- (void)dealloc;
- (MFBitmap *)init;
- (char)isEmpty;
- (void)writePaletteEntry:(id)arg0 :(int)arg1;
- (void)setNull;
- (char)parseHeader:(char *)arg0 :(unsigned int)arg1;
- (void)appendDIBPalette:(id)arg0 :(char *)arg1 :(unsigned int)arg2 :(int)arg3;
- (char)processDIBHeader:(NSString *)arg0 :(char *)arg1 :(unsigned int)arg2 :(int)arg3;
- (void)writeFileHeader;
- (void)writeInfoHeader;
- (MFBitmap *)initWithDIBitmap:(id)arg0 :(char *)arg1 :(unsigned int)arg2 :(int)arg3;
- (MFBitmap *)initWithDIBitmap:(id)arg0 :(char *)arg1 :(unsigned int)arg2 :(char *)arg3 :(unsigned int)arg4 :(int)arg5;
- (MFBitmap *)initWithBitmap:(MFPhoneBitmap *)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(char *)arg5 :(unsigned int)arg6;
- (void)setMonoPalette:(id)arg0;

@end
