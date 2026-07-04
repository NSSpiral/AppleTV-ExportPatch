/* Runtime dump - CTGlyphStorageInterface
 * Image: /System/Library/Frameworks/CoreText.framework/CoreText
 */

@interface CTGlyphStorageInterface : NSObject
{
    long _glyphCount;
    unsigned short * _glyphs;
    struct CGSize * _advances;
    unsigned int * _props;
    int * _stringIndexes;
    int * _absorbedCounts;
}

- (struct __CTGlyphStorage *)createCopy:(struct ?)arg0;
- (void)getCustomAdvance:(struct CGSize *)arg0 forIndex:(long)arg1;
- (void)setGlyphID:(unsigned short)arg0 forIndex:(long)arg1;
- (void)setAdvance:(struct CGSize)arg0 forIndex:(long)arg1;
- (void)setProps:(unsigned int)arg0 forIndex:(long)arg1;
- (void)setAbsorbedCount:(long)arg0 forIndex:(long)arg1;
- (void)setStringIndex:(long)arg0 forIndex:(long)arg1;
- (void)swapGlyph:(long)arg0 withIndex:(long)arg1;
- (void)moveGlyphsTo:(long)arg0 from:(struct ?)arg1;
- (void)insertGlyphs:(struct ?)arg0;
- (void)initGlyphStack:(long)arg0;
- (void)pushGlyph:(long)arg0;
- (void)popGlyph:(long)arg0;
- (void)disposeGlyphStack;

@end
