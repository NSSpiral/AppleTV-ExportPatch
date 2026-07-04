/* Runtime dump - MRTextRenderer
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRTextRenderer : NSObject
{
    NSAttributedString * _text;
    NSAttributedString * _cachedText;
    NSAttributedString * _placeholderText;
    struct CGSize _definedSize;
    struct CGSize _resolution;
    int _maxNumberOfLines;
    int _lastGlyphIndex;
    char _truncate;
    char _renderAtDefinedSize;
    float _lineSpacingFactor;
    struct CGSize _inset;
    float _scale;
    int _columnCount;
    float _columnMargin;
    float _extraFooter;
    char _centerVertically;
    struct CGSize _cachedSize;
    struct CGSize _originalCacheSize;
    struct CGRect _imageRect;
}

@property (nonatomic) NSAttributedString * text;
@property (nonatomic) NSAttributedString * placeholderText;
@property (nonatomic) struct CGSize resolution;
@property (nonatomic) char truncate;
@property (nonatomic) struct CGSize definedSize;
@property (nonatomic) char renderAtDefinedSize;
@property (nonatomic) int maxNumberOfLines;
@property (nonatomic) float lineSpacingFactor;
@property (nonatomic) struct CGSize inset;
@property (nonatomic) float scale;
@property (nonatomic) int columnCount;
@property (nonatomic) float columnMargin;
@property (nonatomic) float extraFooter;
@property (nonatomic) char centerVertically;
@property (nonatomic) struct CGRect imageRect;

- (void)dealloc;
- (void)setInset:(struct CGSize)arg0;
- (MRTextRenderer *)init;
- (float)scale;
- (NSAttributedString *)text;
- (void)setText:(NSAttributedString *)arg0;
- (float)_scale;
- (void)setScale:(float)arg0;
- (struct CGSize)shadowOffset;
- (int)numberOfLines;
- (int)columnCount;
- (void)setColumnCount:(int)arg0;
- (void)cleanup;
- (void)clearCache;
- (struct CGSize)inset;
- (void)setPlaceholderText:(NSAttributedString *)arg0;
- (void)setResolution:(struct CGSize)arg0;
- (void)setMaxNumberOfLines:(int)arg0;
- (void)setDefinedSize:(struct CGSize)arg0;
- (void)setTruncate:(char)arg0;
- (struct CGSize)sizeOfContext;
- (struct CGContext *)retainedContext;
- (void)setRenderAtDefinedSize:(char)arg0;
- (void)setLineSpacingFactor:(float)arg0;
- (void)trimWhitespace;
- (void)squeezeWidthForLineCount:(int)arg0;
- (struct CGRect)tightFrameOfLineAtIndex:(NSObject *)arg0;
- (int)countOfWords;
- (void)cacheText;
- (struct ?)rangeOfGlyphsForWordsInRange:(struct ?)arg0;
- (int)numberOfLinesForTruncatedText;
- (struct ?)rangeOfGlyphsOnLine:(int)arg0;
- (struct CGPoint)originOfGlyphAtIndex:(int)arg0;
- (struct CGContext *)retainedContextOfGlyphAtIndex:(int)arg0;
- (struct ?)rangeOfWordsOnLine:(int)arg0;
- (struct CGContext *)retainedContextOfWordsInRange:(struct ?)arg0;
- (struct CGPoint)originOfWordAtIndex:(int)arg0;
- (void)setCenterVertically:(char)arg0;
- (struct CGSize)sizeOfText;
- (int)countOfGlyphs;
- (MRTextRenderer *)initWithText:(NSAttributedString *)arg0 resolution:(struct CGSize)arg1;
- (void)updateLineSpacing;
- (struct CGSize)_sizeToRendererAt;
- (NSObject *)_truncateTextToFitInSize:(struct CGSize)arg0 fromCenter:(char)arg1 outSize:(struct CGSize *)arg2;
- (struct CGContext *)_retainedContextFromAttributedString:(NSString *)arg0 withSize:(struct CGSize)arg1;
- (struct CGSize)_sizeOfString:(NSString *)arg0;
- (struct CGRect)_tightFrameOfLineAtIndex:(NSObject *)arg0 inString:(SEL)arg1 withSize:(int)arg2;
- (void)_drawInContext:(struct CGContext *)arg0 withAttributedString:(NSAttributedString *)arg1 withSize:(struct CGSize)arg2 andScale:(float)arg3;
- (NSObject *)_invertRect:(struct CGRect)arg0 inRect:(struct CGSize)arg1;
- (float)_strikethroughThinkness:(int)arg0 baselineOffset:(float)arg1 lineRect:(struct CGRect)arg2;
- (int)_numberOfLinesInString:(NSString *)arg0;
- (int)glyphIndexForStringIndex:(int)arg0;
- (struct ?)rangeOfStringForGlyphIndex:(int)arg0;
- (struct CGSize)_shadowSizeOffsetForString:(NSString *)arg0;
- (int)maxNumberOfLines;
- (struct CGRect)tightFrameOfAllLines;
- (struct CGRect)_textClipRectForString:(NSString *)arg0;
- (struct CGRect)frameOfLineWithGlyphAtIndex:(NSObject *)arg0 range:(SEL)arg1;
- (NSString *)truncatedText;
- (NSAttributedString *)placeholderText;
- (struct CGSize)resolution;
- (char)truncate;
- (struct CGSize)definedSize;
- (char)renderAtDefinedSize;
- (float)lineSpacingFactor;
- (float)columnMargin;
- (void)setColumnMargin:(float)arg0;
- (float)extraFooter;
- (void)setExtraFooter:(float)arg0;
- (char)centerVertically;
- (void)setImageRect:(struct CGRect)arg0;
- (struct CGRect)imageRect;
- (void)finalize;

@end
