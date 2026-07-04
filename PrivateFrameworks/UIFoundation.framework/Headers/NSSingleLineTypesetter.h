/* Runtime dump - NSSingleLineTypesetter
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSSingleLineTypesetter : NSATSTypesetter
{
    float _lineWidth;
    struct _NSRange _currentBufferRange;
    unsigned short * _glyphs;
    int * _props;
    unsigned int * _charIndexes;
    struct ? _slFlags;
}

+ (void)initialize;
+ (NSSingleLineTypesetter *)singleLineTypesetter;
+ (BOOL)_validateAttributes:(NSDictionary *)arg0 measuringOnly:(BOOL)arg1;

- (NSSingleLineTypesetter *)init;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg0 actualCharacterRange:(struct _NSRange *)arg1;
- (void)setGlyphs:(unsigned short *)arg0 properties:(unsigned short)arg1 characterIndexes:(int *)arg2 font:(int)arg3 forGlyphRange:(unsigned int *)arg4;
- (unsigned int)getGlyphsInRange:(struct _NSRange)arg0 glyphs:(unsigned short *)arg1 properties:(int *)arg2 characterIndexes:(unsigned int *)arg3 bidiLevels:(char *)arg4;
- (NSAttributedString *)attributedString;
- (void)done;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg0 actualGlyphRange:(struct _NSRange *)arg1;
- (UIFont *)substituteFontForFont:(UIFont *)arg0;
- (char)_allowsEllipsisGlyphSubstitution;
- (void)setLineFragmentRect:(struct CGRect)arg0 forGlyphRange:(struct CGSize)arg1 usedRect:(struct CGSize)arg2 baselineOffset:(struct _NSRange)arg3;
- (void)getLineFragmentRect:(struct CGRect *)arg0 usedRect:(struct CGSize)arg1 remainingRect:(NSObject *)arg2 forStartingGlyphAtIndex:(struct CGRect *)arg3 proposedRect:(struct CGSize)arg4 lineSpacing:(TSWPSpecLineSpacing *)arg5 paragraphSpacingBefore:(struct CGRect *)arg6 paragraphSpacingAfter:(struct CGSize)arg7;
- (void)setLocation:(struct CGPoint)arg0 withAdvancements:(float *)arg1 forStartOfGlyphRange:(float)arg2;
- (void)setNotShownAttribute:(char)arg0 forGlyphRange:(struct _NSRange)arg1;
- (char)_usesScreenFonts;
- (void)substituteGlyphsInRange:(struct _NSRange)arg0 withGlyphs:(unsigned int *)arg1;
- (void)insertGlyph:(unsigned int)arg0 atGlyphIndex:(unsigned int)arg1 characterIndex:(unsigned int)arg2;
- (void)setAttachmentSize:(struct CGSize)arg0 forGlyphRange:(struct _NSRange)arg1;
- (void)setBidiLevels:(char *)arg0 forGlyphRange:(struct _NSRange)arg1;
- (void)setDrawsOutsideLineFragment:(char)arg0 forGlyphRange:(struct _NSRange)arg1;
- (NSObject *)createRenderingContextForCharacterRange:(struct _NSRange)arg0 typesetterBehavior:(int)arg1 usesScreenFonts:(char)arg2 hasStrongRight:(char)arg3 maximumWidth:(float)arg4;
- (void)insertGlyphs:(unsigned int *)arg0 length:(unsigned int)arg1 forStartingGlyphAtIndex:(unsigned int)arg2 characterIndex:(unsigned int)arg3;
- (void)setIntAttribute:(int)arg0 value:(int)arg1 forGlyphAtIndex:(unsigned int)arg2;
- (unsigned int)layoutOptions;
- (void)deleteGlyphsInRange:(struct _NSRange)arg0;

@end
