/* Runtime dump - NSATSTypesetter
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSATSTypesetter : NSTypesetter
{
    NSAttributedString * attributedString;
    struct _NSRange paragraphGlyphRange;
    struct _NSRange paragraphSeparatorGlyphRange;
    float lineFragmentPadding;
    NSLayoutManager * layoutManager;
    NSArray * textContainers;
    NSTextContainer * currentTextContainer;
    unsigned int currentTextContainerIndex;
    struct CGSize currentTextContainerSize;
    NSParagraphStyle * currentParagraphStyle;
    id _atsReserved;
    id _private;
}

+ (NSATSTypesetter *)sharedInstance;
+ (void)initialize;
+ (NSATSTypesetter *)sharedTypesetter;
+ (char)_allowsScreenFontKerning;

- (void)dealloc;
- (float)baselineOffsetInLayoutManager:(NSObject *)arg0 glyphIndex:(unsigned int)arg1;
- (unsigned int)actionForControlCharacterAtIndex:(unsigned int)arg0;
- (struct _NSRange)layoutCharactersInRange:(struct _NSRange)arg0 forLayoutManager:(NSObject *)arg1 maximumNumberOfLineFragments:(unsigned int)arg2;
- (void)layoutGlyphsInLayoutManager:(NSObject *)arg0 startingAtGlyphIndex:(unsigned int)arg1 maxNumberOfLineFragments:(unsigned int)arg2 nextGlyphIndex:(unsigned int *)arg3;
- (struct CGRect)lineFragmentRectForProposedRect:(NSObject *)arg0 remainingRect:(SEL)arg1;
- (char *)_bidiLevels;
- (struct __CTTypesetter *)_ctTypesetter;
- (void)_doBidiProcessing;
- (int)_baseWritingDirection;
- (char)_baselineRenderingMode;
- (void)beginLineWithGlyphAtIndex:(unsigned int)arg0;
- (void)endLineWithGlyphRange:(struct _NSRange)arg0;
- (void)_flushCachedObjects;
- (void)beginParagraph;
- (void)endParagraph;
- (char)_layoutLineFragmentStartingWithGlyphAtIndex:(unsigned int *)arg0 characterIndex:(unsigned int *)arg1 atPoint:(struct CGPoint *)arg2 renderingContext:(id *)arg3;
- (char)_forceWordWrapping;
- (void)_setForceWordWrapping:(char)arg0;
- (float)defaultTighteningFactor;
- (void)setDefaultTighteningFactor:(float)arg0;
- (void)_setBaselineRenderingMode:(char)arg0;
- (id)_getATSTypesetterGuts;
- (char)_usesScreenFonts;
- (unsigned int)_sweepDirectionForGlyphAtIndex:(long)arg0;
- (unsigned int)layoutParagraphAtPoint:(struct CGPoint *)arg0;
- (char)shouldBreakLineByWordBeforeCharacterAtIndex:(unsigned int)arg0;
- (char)shouldBreakLineByHyphenatingBeforeCharacterAtIndex:(unsigned int)arg0;
- (float)hyphenationFactorForGlyphAtIndex:(unsigned int)arg0;
- (struct CGRect)boundingBoxForControlGlyphAtIndex:(NSObject *)arg0 forTextContainer:(SEL)arg1 proposedLineFragment:(unsigned int)arg2 glyphPosition:(NSObject *)arg3 characterIndex:(struct CGRect)arg4;
- (unsigned long)hyphenCharacterForGlyphAtIndex:(unsigned int)arg0;
- (struct ? *)_allocateAuxData;
- (id *)_lineFragmentRectForProposedRectArgs;

@end
