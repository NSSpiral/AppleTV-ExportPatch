/* Runtime dump - TSDTransformGradient
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDTransformGradient : TSDGradient <TSDMixing>
{
    struct CGPoint mStart;
    struct CGPoint mEnd;
    struct CGSize mBaseNaturalSize;
    struct CGAffineTransform mTransformBeforeUpgrade;
}

@property (nonatomic) struct CGPoint startPoint;
@property (nonatomic) struct CGPoint endPoint;
@property (nonatomic) struct CGSize baseNaturalSize;

- (void)saveToArchive:(struct FillArchive *)arg0 archiver:(struct /* ? */)arg1;
- (TSDTransformGradient *)initWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect)arg1 inContext:(struct CGSize)arg2 isPDF:(char)arg3;
- (TSDTransformGradient *)initWithGradientStops:(NSArray *)arg0 type:(unsigned int)arg1;
- (TSDTransformGradient *)initWithStartColor:(UIColor *)arg0 endColor:(UIColor *)arg1 type:(unsigned int)arg2;
- (char)isAdvancedGradientIgnoringFlag;
- (char)isEqualIgnoringTransform:(NSObject *)arg0;
- (void)paintRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1 atAngle:(TSDSpecShadowSetAngle *)arg2;
- (struct CGPoint)startPointForPath:(NSString *)arg0 andBounds:(struct CGRect)arg1;
- (struct CGPoint)endPointForPath:(NSString *)arg0 andBounds:(struct CGRect)arg1;
- (float)gradientAngleInDegrees;
- (int)mixingTypeWithObject:(NSObject *)arg0;
- (void)p_setDefaultValues;
- (struct CGSize)baseNaturalSizeForBounds:(struct CGRect)arg0;
- (struct CGSize)baseNaturalSize;
- (void)setBaseNaturalSize:(struct CGSize)arg0;
- (struct CGAffineTransform)transformForSize:(struct CGSize)arg0;
- (void)p_drawQuartzShadingInContext:(struct CGContext *)arg0 withGradientNaturalSize:(struct CGSize)arg1 baseNaturalSize:(struct CGSize)arg2 start:(struct CGPoint)arg3 end:(struct CGPoint)arg4;
- (struct CGPoint)normalizedPointForSize:(struct CGSize)arg0 endPoint:(char)arg1;
- (TSDTransformGradient *)initWithGradient:(NSObject *)arg0 inPath:(NSString *)arg1 andBounds:(struct CGRect)arg2;
- (struct CGPoint)p_scalePoint:(struct CGPoint)arg0 toShapeWithNaturalSize:(struct CGSize)arg1;
- (struct CGPoint)p_scalePoint:(struct CGPoint)arg0 fromShapeWithNaturalSize:(struct CGSize)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDTransformGradient *)copyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)startPoint;
- (void)setStartPoint:(struct CGPoint)arg0;
- (void)setEndPoint:(struct CGPoint)arg0;
- (TSDTransformGradient *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (struct CGPoint)endPoint;
- (void)paintRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;

@end
