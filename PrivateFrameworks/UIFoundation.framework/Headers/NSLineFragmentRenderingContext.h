/* Runtime dump - NSLineFragmentRenderingContext
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSLineFragmentRenderingContext : NSObject
{
    void * _runs;
    long _numRuns;
    unsigned short * _glyphs;
    struct CGSize * _advancements;
    float _leftSideDelta;
    float _lineWidth;
    float _leftControlWidth;
    float _rightControlWidth;
    float _elasticWidth;
    struct CGRect _imageBounds;
    struct ? _flags;
    CUICatalog * _catalog;
    CUIStyleEffectConfiguration * _styleEffects;
}

@property (retain, nonatomic) CUICatalog * cuiCatalog;
@property (retain, nonatomic) CUIStyleEffectConfiguration * cuiStyleEffects;
@property (nonatomic) char usesSimpleTextEffects;

+ (void)initialize;
+ (NSLineFragmentRenderingContext *)allocWithZone:(struct _NSZone *)arg0;

- (void)release;
- (void)dealloc;
- (char)_tryRetain;
- (char)_isDeallocating;
- (void)_setUsesSimpleTextEffects:(char)arg0;
- (char)_usesSimpleTextEffects;
- (CUICatalog *)cuiCatalog;
- (CUIStyleEffectConfiguration *)cuiStyleEffects;
- (NSLineFragmentRenderingContext *)initWithRuns:(struct __CFArray *)arg0 glyphOrigin:(float)arg1 lineFragmentWidth:(float)arg2 elasticWidth:(float)arg3 usesScreenFonts:(char)arg4 isRTL:(char)arg5;
- (void)drawAtPoint:(struct CGPoint)arg0 inContext:(struct CGContext *)arg1;
- (struct CGSize)sizeWithBehavior:(int)arg0 usesFontLeading:(char)arg1 baselineDelta:(float *)arg2;
- (void)getMaximumAscender:(float *)arg0 minimumDescender:(float *)arg1;
- (float)lineFragmentWidth;
- (float)elasticWidth;
- (char)isRTL;
- (struct CGRect)imageBounds;
- (void)setCuiCatalog:(CUICatalog *)arg0;
- (void)setCuiStyleEffects:(CUIStyleEffectConfiguration *)arg0;
- (void)finalize;

@end
