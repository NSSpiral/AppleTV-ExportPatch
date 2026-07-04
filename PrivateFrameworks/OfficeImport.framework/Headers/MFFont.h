/* Runtime dump - MFFont
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface MFFont : NSObject <MFObject>
{
    int m_lfHeight;
    int m_lfWidth;
    int m_lfEscapement;
    int m_lfOrientation;
    int m_lfWeight;
    BOOL m_lfItalic;
    BOOL m_lfUnderline;
    BOOL m_lfStrikeOut;
    int m_lfCharSet;
    int m_lfOutPrecision;
    unsigned char m_lfClipPrecision;
    int m_lfQuality;
    int m_pitch;
    int m_family;
    NSString * m_lfFaceName;
    NSString * m_elfFullName;
    NSString * m_elfStyle;
    unsigned int m_elfVersion;
    unsigned int m_elfStyleSize;
    unsigned int m_elfMatch;
    unsigned int m_elfVendorId;
    unsigned int m_elfCulture;
}

+ (MFFont *)fontWithFeatures:(int)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(BOOL)arg5 :(BOOL)arg6 :(BOOL)arg7 :(int)arg8 :(int)arg9 :(unsigned char)arg10 :(int)arg11 :(int)arg12 :(int)arg13 :(id)arg14;
+ (MFFont *)fontWithExtendedFeatures:(int)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(BOOL)arg5 :(BOOL)arg6 :(BOOL)arg7 :(int)arg8 :(int)arg9 :(unsigned char)arg10 :(int)arg11 :(int)arg12 :(int)arg13 :(id)arg14 :(id)arg15 :(id)arg16 :(unsigned int)arg17 :(unsigned int)arg18 :(unsigned int)arg19 :(unsigned int)arg20 :(unsigned int)arg21;
+ (UIFont *)fontWithStockFont:(int)arg0;

- (void)dealloc;
- (char)underline;
- (MFFont *)initWithAllFeatures:(int)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(BOOL)arg5 :(BOOL)arg6 :(BOOL)arg7 :(int)arg8 :(int)arg9 :(unsigned char)arg10 :(int)arg11 :(int)arg12 :(int)arg13 :(id)arg14 :(id)arg15 :(id)arg16 :(unsigned int)arg17 :(unsigned int)arg18 :(unsigned int)arg19 :(unsigned int)arg20 :(unsigned int)arg21;
- (MFFont *)initWithFeatures:(int)arg0 :(int)arg1 :(int)arg2 :(int)arg3 :(int)arg4 :(BOOL)arg5 :(BOOL)arg6 :(BOOL)arg7 :(int)arg8 :(int)arg9 :(unsigned char)arg10 :(int)arg11 :(int)arg12 :(int)arg13 :(id)arg14;
- (MFFont *)initWithStockFont:(int)arg0;
- (double)escapement;
- (double)fontHeight;
- (char)strikeout;
- (NSString *)faceName;
- (struct CGRect)textExtent:(id)arg0 :(SEL)arg1 :(id)arg2 :(int)arg3;
- (NSData *)stringWithBytes:(void *)arg0 length:(void)arg1;
- (int)getCharset;
- (int)selectInto:(MFDeviceContext *)arg0;

@end
