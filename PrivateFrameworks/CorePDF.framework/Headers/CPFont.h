/* Runtime dump - CPFont
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface CPFont : NSObject <CPDisposable>
{
    struct CGPDFFont * cgPDFFont;
    struct CGFont * cgFont;
    NSString * fontName;
    char exactMatch;
    struct ? descriptor;
    struct __CFDictionary * kernDictionary;
    double kernUnitsPerEm;
    char isHorizontal;
    float defaultWidth;
    char disposed;
}

- (void)dealloc;
- (float)capHeight;
- (NSString *)fontName;
- (float)leading;
- (float)xHeight;
- (char)isHorizontal;
- (void)dispose;
- (void)uniCharsFor:(unsigned long)arg0 count:(unsigned int *)arg1 toArray:(unsigned short *)arg2 maxChars:(unsigned int)arg3;
- (struct CGPDFFont *)cgPDFFont;
- (NSString *)matchingFontName;
- (void)loadExternalFontInfoFor:(id)arg0;
- (void)getFontName;
- (void)loadEmbeddedFontInfo;
- (struct CGFont *)cgFont;
- (char)isSameFontAs:(id)arg0;
- (struct CGRect)fontBBox;
- (float)italicAngle;
- (float)ascent;
- (float)descent;
- (float)stemV;
- (float)stemH;
- (float)avgWidth;
- (float)missingWidth;
- (float)spaceWidth;
- (float)underlinePosition;
- (double)kernBetweenUnicode:(unsigned short)arg0 andUnicode:(unsigned short)arg1;
- (char)getGlyphs:(unsigned short *)arg0 forCodes:(unsigned short *)arg1 count:(unsigned short)arg2;
- (unsigned int)flags;
- (CPFont *)initWith:(struct CGPDFDictionary *)arg0;
- (float)underlineThickness;
- (void)finalize;
- (float)fontStretch;
- (float)fontWeight;
- (float)maxWidth;

@end
