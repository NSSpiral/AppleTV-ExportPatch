/* Runtime dump - NSATSLineFragment
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSATSLineFragment : NSObject
{
    void * _line;
    NSATSTypesetter * _typesetter;
    struct _NSRange _glyphRange;
    struct _NSRange _characterRange;
    float _minPosition;
    float _maxPosition;
    long _elasticCharIndex;
    float _elasticRangeWidth;
    unsigned int _hyphenGlyph;
    float _hyphenGlyphWidth;
    struct ? _flags;
}

- (void)dealloc;
- (void)_invalidate;
- (struct _NSRange)glyphRange;
- (NSATSLineFragment *)initWithTypesetter:(NSATSTypesetter *)arg0;
- (void)layoutForStartingGlyphAtIndex:(unsigned int)arg0 characterIndex:(unsigned int)arg1 minPosition:(float)arg2 maxPosition:(float)arg3 lineFragmentRect:(struct CGRect)arg4;
- (struct _NSRange)characterRange;
- (void)getTypographicLineHeight:(float *)arg0 baselineOffset:(float *)arg1 leading:(float *)arg2;
- (void)justifyWithFactor:(float)arg0;
- (float)lineWidthForType:(int)arg0;
- (char)hasElasticRange;
- (void)saveMorphedGlyphs:(struct _NSRange *)arg0;
- (void)saveWithGlyphOrigin:(float)arg0;
- (id)_copyRenderingContextWithGlyphOrigin:(float)arg0;
- (void)_flushCachedObjects;
- (int)resolvedLineBreakMode:(char)arg0;
- (long)_charIndexToBreakLineByWordWrappingAtIndex:(long)arg0 lineFragmentWidth:(float)arg1 hyphenate:(char *)arg2;
- (void)finalize;

@end
