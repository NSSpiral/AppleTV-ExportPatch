/* Runtime dump - TSDGradient
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDGradient : TSDFill <TSSPreset, TSSPresetSource, TSDMixing, NSCopying, NSMutableCopying>
{
    NSMutableArray * mStops;
    unsigned int mType;
    float mOpacity;
    struct CGShading * mShadingRef;
    char mIsAdvancedGradient;
}

@property (readonly, retain, nonatomic) NSArray * gradientStops;
@property (readonly, nonatomic) TSUColor * firstColor;
@property (readonly, nonatomic) TSUColor * lastColor;
@property (readonly, nonatomic) unsigned int gradientType;
@property (nonatomic) float opacity;
@property (readonly, nonatomic) char isOpaque;
@property (readonly, nonatomic) struct CGShading * shadingRef;
@property (nonatomic) char isAdvancedGradient;
@property (readonly, nonatomic) char hasAlpha;
@property (readonly, nonatomic) NSString * presetKind;

+ (TSDGradient *)instanceWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
+ (UIColor *)linearGradientWithStartColor:(UIColor *)arg0 endColor:(UIColor *)arg1;
+ (TSDGradient *)presetKinds;
+ (void)bootstrapPresetsOfKind:(NSString *)arg0 inTheme:(TSSTheme *)arg1 alternate:(int)arg2;
+ (char)useInflections;
+ (void)enableInflections;
+ (void)disableInflections;
+ (char)useQuartzShadings;
+ (void)sortStopsArray:(NSArray *)arg0;
+ (TSDGradient *)linearGradientWithGradientStops:(NSArray *)arg0;
+ (UIColor *)radialGradientWithStartColor:(UIColor *)arg0 endColor:(UIColor *)arg1;
+ (TSDGradient *)radialGradientWithGradientStops:(NSArray *)arg0;

- (void)saveToArchive:(struct FillArchive *)arg0 archiver:(struct /* ? */)arg1;
- (TSDGradient *)initWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
- (void)drawSwatchInRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (NSString *)presetKind;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (TSUColor *)firstColor;
- (NSObject *)newColorAtFraction:(float)arg0;
- (TSDGradient *)initWithGradientStops:(NSArray *)arg0 type:(unsigned int)arg1 opacity:(float)arg2;
- (TSDGradient *)initWithGradientStops:(NSArray *)arg0 type:(unsigned int)arg1;
- (void)releaseShadingRef;
- (NSArray *)gradientStops;
- (char)isAdvancedGradient;
- (TSDGradient *)initWithStartColor:(UIColor *)arg0 endColor:(UIColor *)arg1 type:(unsigned int)arg2;
- (char)isAdvancedGradientIgnoringFlag;
- (TSUColor *)lastColor;
- (NSObject *)stopBeforeFraction:(float)arg0;
- (NSObject *)stopAfterFraction:(float)arg0;
- (void)setIsAdvancedGradient:(char)arg0;
- (NSObject *)p_insertStopAtFraction:(float)arg0 withColor:(UIColor *)arg1;
- (void)p_insertGradientStop:(id)arg0;
- (char)isEqualIgnoringTransform:(NSObject *)arg0;
- (struct CGShading *)shadingRef;
- (NSObject *)stopAtIndex:(unsigned int)arg0;
- (void)paintRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1 atAngle:(TSDSpecShadowSetAngle *)arg2;
- (struct CGAffineTransform)centeredRadialTransformInRect:(struct CGRect)arg0;
- (struct CGPoint)startPointForPath:(NSString *)arg0 andBounds:(struct CGRect)arg1;
- (struct CGPoint)endPointForPath:(NSString *)arg0 andBounds:(struct CGRect)arg1;
- (void)p_setAlpha:(struct CGContext *)arg0;
- (struct CGContext *)p_beginBitmapWrapperContextInContext:(struct CGContext *)arg0 returningIntegralBounds:(struct CGRect *)arg1;
- (void)p_endBitmapWrapperContext:(struct CGContext *)arg0 inContext:(struct CGContext *)arg1 withIntegralBounds:(struct CGRect)arg2;
- (SEL)mapThemeAssetSelector;
- (void)p_setGradientStops:(id)arg0;
- (void)p_removeStop:(id)arg0;
- (NSObject *)p_removeStopAtIndex:(unsigned int)arg0;
- (NSObject *)p_insertStopAtFraction:(float)arg0;
- (void)p_reverseStopOrder;
- (void)p_evenlyDistributeStops;
- (void)p_setGradientType:(unsigned int)arg0;
- (void)p_moveStopAtIndex:(unsigned int)arg0 toFraction:(float)arg1;
- (void)p_swapStopAtIndex:(unsigned int)arg0 withStopAtIndex:(unsigned int)arg1;
- (void)p_setColorOfStopAtIndex:(unsigned int)arg0 toColor:(UIColor *)arg1;
- (void)p_setInflectionOfStopAtIndex:(unsigned int)arg0 toInflection:(float)arg1;
- (char)hasAlpha;
- (void)dealloc;
- (TSDGradient *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDGradient *)copyWithZone:(struct _NSZone *)arg0;
- (char)isOpaque;
- (float)opacity;
- (void)setOpacity:(float)arg0;
- (TSDGradient *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (TSUColor *)referenceColor;
- (unsigned int)gradientType;
- (void)paintRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (int)fillType;

@end
