/* Runtime dump - NSRTFWriter
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSRTFWriter : NSObject
{
    NSMutableData * _output;
    NSAttributedString * _attrString;
    unsigned int _attrStringLength;
    NSFileWrapper * _document;
    NSMutableDictionary * _fontNames;
    NSMutableDictionary * _colors;
    NSMutableArray * _listRanges;
    id _curFont;
    id _curForegroundColor;
    id _curBackgroundColor;
    id _curParagraphStyle;
    id _curKern;
    id _curBaselineOffset;
    id _curSuperscript;
    id _curUnderlineStyle;
    int _curTraits;
    unsigned long _curEncoding;
    struct ? _rwFlags;
    float _rightMargin;
    NSDictionary * _docAttrs;
    void * _layoutSections;
}

+ (void)initialize;
+ (NSString *)RTFDataForString:(NSString *)arg0 range:(struct _NSRange)arg1 encoding:(unsigned long)arg2;
+ (NSDate *)RTFDataForDate:(NSDate *)arg0;

- (void)dealloc;
- (NSRTFWriter *)initWithAttributedString:(NSAttributedString *)arg0;
- (void)setDocumentAttributes:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)documentAttributes;
- (void)writeHeader;
- (id)RTF;
- (id)RTFD;
- (NSObject *)RTFDFileWrapper;
- (void)_setRTFDFileWrapper:(NSObject *)arg0;
- (NSObject *)_RTFDFileWrapper;
- (NSObject *)documentAttribute:(NSObject *)arg0;
- (void)collectResources;
- (void)writeBody;
- (void)writeRTF;
- (UIFont *)_plainFontNameForFont:(UIFont *)arg0;
- (void)writeEscapedUTF8String:(NSString *)arg0;
- (int)_mostCompatibleCharset:(NSSet *)arg0;
- (void)_writeCharacters:(id)arg0 range:(struct _NSRange)arg1;
- (void)writeDate:(NSDate *)arg0;
- (void)writeStringDocumentAttribute:(NSObject *)arg0 withRTFKeyword:(char *)arg1;
- (void)writeDateDocumentAttribute:(NSObject *)arg0 withRTFKeyword:(char *)arg1;
- (void)writeKeywordsDocumentAttribute;
- (void)_writeVersionsAndEncodings;
- (void)writeFontTable;
- (void)writeColorTable;
- (void)writeStyleSheetTable;
- (void)writeListTable;
- (void)writeInfo;
- (void)writePaperSize;
- (void)writeHyphenation;
- (void)writeDefaultTabInterval;
- (void)writeBackgroundColor;
- (void)writeColor:(UIColor *)arg0 type:(unsigned int)arg1;
- (void)writeFont:(UIFont *)arg0 forceFontNumber:(char)arg1;
- (void)writeKern:(id)arg0;
- (void)writeBaselineOffset:(NSSet *)arg0;
- (void)writeSuperscript:(id)arg0;
- (void)writeUnderlineStyle:(NSObject *)arg0 allowStrikethrough:(char)arg1;
- (void)writeStrikethroughStyle:(NSObject *)arg0;
- (void)writeLigature:(id)arg0;
- (void)writeCharacterShape:(id)arg0;
- (void)writeStrokeWidth:(id)arg0;
- (void)writeObliqueness:(id)arg0;
- (void)writeExpansion:(id)arg0;
- (void)writeShadow:(id)arg0;
- (void)writeTableHeader:(NSString *)arg0 atIndex:(unsigned int)arg1 nestingLevel:(unsigned int)arg2;
- (void)writeParagraphStyle:(NSObject *)arg0;
- (char)writeLinkInfo:(NSDictionary *)arg0;
- (void)writeCharacterAttributes:(NSDictionary *)arg0 previousAttributes:(NSDictionary *)arg1;
- (unsigned int)textFlowWithAttributes:(NSDictionary *)arg0 range:(struct _NSRange *)arg1;
- (void)writeTextFlow:(unsigned int)arg0;
- (void)writeGlyphInfo:(NSDictionary *)arg0;
- (char)writeCellTerminator:(id)arg0 atIndex:(unsigned int)arg1 nestingLevel:(unsigned int)arg2;
- (void)restoreAttributes:(NSDictionary *)arg0;
- (void)writeAttachment:(NSObject *)arg0 editableData:(NSData *)arg1 editableTypeIdentifier:(NSString *)arg2;
- (void)_setPreserveNaturalAlignment:(char)arg0;

@end
