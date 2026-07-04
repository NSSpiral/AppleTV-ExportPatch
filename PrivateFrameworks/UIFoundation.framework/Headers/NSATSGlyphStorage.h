/* Runtime dump - NSATSGlyphStorage
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSATSGlyphStorage : CTGlyphStorageInterface
{
    struct __CTGlyphStorage * _glyphStorage;
    struct __CFArray * _masterRuns;
    NSATSTypesetter * _typesetter;
    struct ? * _runs;
    long _numRuns;
    long _runBufferSize;
    struct _NSRange _glyphRange;
    struct _NSRange _characterRange;
    long _bufferSize;
    NSATSGlyphStorage * _parent;
    struct __CFSet * _children;
    long _paraEndElasticCharIndex;
    float _paraEndElasticCharWidth;
    NSString * _textString;
    struct ? * _stack;
    struct ? * _lastElasticRun;
    long _lastElasticRunLocation;
    long _totalAbsorbedCount;
    struct ? _gFlags;
}

+ (NSATSGlyphStorage *)allocWithZone:(struct _NSZone *)arg0;

- (void)release;
- (void)dealloc;
- (char)_tryRetain;
- (char)_isDeallocating;
- (void)_invalidate;
- (NSATSTypesetter *)typesetter;
- (NSATSGlyphStorage *)initWithTypesetter:(NSATSTypesetter *)arg0;
- (void)setGlyphRange:(struct _NSRange)arg0 characterRange:(struct _NSRange)arg1;
- (struct __CTTypesetter *)createCTTypesetter;
- (void)_flushCachedObjects;
- (NSObject *)childGlyphStorageWithCharacterRange:(struct _NSRange)arg0;
- (struct __CTRun *)_createEllipsisRunWithStringRange:(struct ?)arg0 attributes:(struct __CFDictionary *)arg1;
- (BOOL)_resolvePositionalStakeGlyphsForLineFragment:(struct __CTLine *)arg0 lineFragmentRect:(struct CGRect)arg1 minPosition:(struct CGSize)arg2 maxPosition:(float)arg3 maxLineFragmentWidth:(float)arg4 breakHint:(float)arg5;
- (struct _NSRange)_collectElasticRangeSurroundingCharacterAtIndex:(long)arg0 minimumCharacterIndex:(long)arg1;
- (float)_widthForStringRange:(struct _NSRange)arg0;
- (struct ? *)_attributeRunForCharacterAtIndex:(NSObject *)arg0;
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
- (void)finalize;

@end
