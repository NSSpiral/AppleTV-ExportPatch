/* Runtime dump - NSTypesetter
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSTypesetter : NSObject
{
    void * _reserved;
}

+ (void)initialize;
+ (int)defaultTypesetterBehavior;
+ (NSTypesetter *)sharedSystemTypesetterForBehavior:(int)arg0;
+ (int)defaultStringDrawingTypesetterBehavior;
+ (char)_usesATSTypesetter;
+ (NSTypesetter *)sharedSystemTypesetter;

- (void)dealloc;
- (NSLayoutManager *)layoutManager;
- (void)setLineFragmentPadding:(float)arg0;
- (void)setUsesFontLeading:(char)arg0;
- (void)setAttributedString:(NSAttributedString *)arg0;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg0 actualCharacterRange:(struct _NSRange *)arg1;
- (unsigned int)getGlyphsInRange:(struct _NSRange)arg0 glyphs:(unsigned short *)arg1 properties:(int *)arg2 characterIndexes:(unsigned int *)arg3 bidiLevels:(char *)arg4;
- (NSAttributedString *)attributedString;
- (float)lineFragmentPadding;
- (NSArray *)textContainers;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg0 actualGlyphRange:(struct _NSRange *)arg1;
- (NSDictionary *)attributesForExtraLineFragment;
- (float)baselineOffsetInLayoutManager:(NSObject *)arg0 glyphIndex:(unsigned int)arg1;
- (unsigned int)actionForControlCharacterAtIndex:(unsigned int)arg0;
- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg0 forLayoutManager:(NSObject *)arg1 maximumNumberOfLineFragments:(unsigned int)arg2;
- (void)layoutGlyphsInLayoutManager:(NSObject *)arg0 startingAtGlyphIndex:(unsigned int)arg1 maxNumberOfLineFragments:(unsigned int)arg2 nextGlyphIndex:(unsigned int *)arg3;
- (UIFont *)substituteFontForFont:(UIFont *)arg0;
- (char)_allowsEllipsisGlyphSubstitution;
- (UIFont *)_ellipsisFontForFont:(UIFont *)arg0;
- (void)setLineFragmentRect:(struct CGRect)arg0 forGlyphRange:(struct CGSize)arg1 usedRect:(struct CGSize)arg2 baselineOffset:(struct _NSRange)arg3;
- (struct ? *)_getAuxData;
- (char)bidiProcessingEnabled;
- (struct _NSRange)paragraphCharacterRange;
- (struct _NSRange)paragraphSeparatorCharacterRange;
- (int)_baseWritingDirection;
- (int)typesetterBehavior;
- (NSTextContainer *)currentTextContainer;
- (void)beginLineWithGlyphAtIndex:(unsigned int)arg0;
- (void)getLineFragmentRect:(struct CGRect *)arg0 usedRect:(struct CGSize)arg1 remainingRect:(NSObject *)arg2 forStartingGlyphAtIndex:(struct CGRect *)arg3 proposedRect:(struct CGSize)arg4 lineSpacing:(TSWPSpecLineSpacing *)arg5 paragraphSpacingBefore:(struct CGRect *)arg6 paragraphSpacingAfter:(struct CGSize)arg7;
- (float)lineSpacingAfterGlyphAtIndex:(unsigned int)arg0 withProposedLineFragmentRect:(struct CGRect)arg1;
- (float)paragraphSpacingBeforeGlyphAtIndex:(unsigned int)arg0 withProposedLineFragmentRect:(struct CGRect)arg1;
- (float)paragraphSpacingAfterGlyphAtIndex:(unsigned int)arg0 withProposedLineFragmentRect:(struct CGRect)arg1;
- (char)finalizeLineFragmentRect:(struct CGRect *)arg0 lineFragmentUsedRect:(struct CGRect)arg1 baselineOffset:(struct CGSize)arg2 forGlyphRange:(NSObject *)arg3;
- (void)setLocation:(struct CGPoint)arg0 withAdvancements:(float *)arg1 forStartOfGlyphRange:(float)arg2;
- (void)setNotShownAttribute:(char)arg0 forGlyphRange:(struct _NSRange)arg1;
- (void)endLineWithGlyphRange:(struct _NSRange)arg0;
- (void)beginParagraph;
- (void)endParagraph;
- (void)getLineFragmentRect:(struct CGRect *)arg0 usedRect:(struct CGSize)arg1 forParagraphSeparatorGlyphRange:(NSObject *)arg2 atProposedOrigin:(struct CGRect *)arg3;
- (float)hyphenationFactor;
- (unsigned int)layoutParagraphAtPoint:(struct CGPoint *)arg0;
- (struct ? *)_allocateAuxData;
- (id *)_lineFragmentRectForProposedRectArgs;
- (struct _NSRange)paragraphGlyphRange;
- (struct _NSRange)paragraphSeparatorGlyphRange;
- (NSParagraphStyle *)currentParagraphStyle;
- (char)_forceOriginalFontBaseline;
- (NSObject *)textTabForGlyphLocation:(float)arg0 writingDirection:(int)arg1 maxLocation:(float)arg2;
- (char)_isLineBreakModeOverridden;
- (float)tightenThresholdForTruncation;
- (char)usesFontLeading;
- (void)substituteGlyphsInRange:(struct _NSRange)arg0 withGlyphs:(unsigned int *)arg1;
- (void)insertGlyph:(unsigned int)arg0 atGlyphIndex:(unsigned int)arg1 characterIndex:(unsigned int)arg2;
- (void)setAttachmentSize:(struct CGSize)arg0 forGlyphRange:(struct _NSRange)arg1;
- (void)setBidiLevels:(char *)arg0 forGlyphRange:(struct _NSRange)arg1;
- (void)setDrawsOutsideLineFragment:(char)arg0 forGlyphRange:(struct _NSRange)arg1;
- (void)setHardInvalidation:(char)arg0 forGlyphRange:(struct _NSRange)arg1;
- (void)_setForceOriginalFontBaseline:(char)arg0;
- (void)setTypesetterBehavior:(int)arg0;
- (void)setParagraphGlyphRange:(struct _NSRange)arg0 separatorGlyphRange:(struct _NSRange)arg1;
- (void)deleteGlyphsInRange:(struct _NSRange)arg0;
- (unsigned int)getGlyphsInRange:(struct _NSRange)arg0 glyphs:(unsigned int *)arg1 characterIndexes:(unsigned int *)arg2 glyphInscriptions:(unsigned int *)arg3 elasticBits:(char *)arg4 bidiLevels:(char *)arg5;
- (void)_updateParagraphStyleCache:(NSObject *)arg0;
- (unsigned int)_getRemainingNominalParagraphRange:(struct _NSRange *)arg0 andParagraphSeparatorRange:(struct _NSRange *)arg1 charactarIndex:(unsigned int)arg2 layoutManager:(_UIFieldEditorLayoutManager *)arg3 string:(NSString *)arg4;
- (void)_setLineBreakModeOverridden:(char)arg0;
- (void)_layoutGlyphsInLayoutManager:(NSObject *)arg0 startingAtGlyphIndex:(unsigned int)arg1 maxNumberOfLineFragments:(unsigned int)arg2 maxCharacterIndex:(unsigned int)arg3 nextGlyphIndex:(unsigned int *)arg4 nextCharacterIndex:(unsigned int *)arg5;
- (void)setBidiProcessingEnabled:(char)arg0;
- (void)setTightenThresholdForTruncation:(float)arg0;
- (void)finalize;
- (void)setHyphenationFactor:(float)arg0;

@end
