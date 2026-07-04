/* Runtime dump - TSDAngleGradient
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAngleGradient : TSDGradient <TSDMixing>
{
    float mAngle;
}

@property (readonly, nonatomic) float gradientAngleInDegrees;
@property (nonatomic) float gradientAngle;

- (void)saveToArchive:(struct FillArchive *)arg0 archiver:(struct /* ? */)arg1;
- (TSDAngleGradient *)initWithArchive:(struct FillArchive *)arg0 unarchiver:(struct FillArchive)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (void)paintPath:(struct CGPath *)arg0 naturalBounds:(struct CGRect)arg1 inContext:(struct CGSize)arg2 isPDF:(char)arg3;
- (float)gradientAngle;
- (void)setGradientAngle:(float)arg0;
- (TSDAngleGradient *)initWithGradientStops:(NSArray *)arg0 type:(unsigned int)arg1 opacity:(float)arg2 angle:(float)arg3;
- (void)paintRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1 atAngle:(TSDSpecShadowSetAngle *)arg2;
- (struct CGPoint)startPointForPath:(NSString *)arg0 andBounds:(struct CGRect)arg1;
- (struct CGPoint)endPointForPath:(NSString *)arg0 andBounds:(struct CGRect)arg1;
- (void)setColorOfStopAtIndex:(unsigned int)arg0 toColor:(UIColor *)arg1;
- (void)insertGradientStop:(id)arg0;
- (NSObject *)insertStopAtFraction:(float)arg0;
- (void)swapStopAtIndex:(unsigned int)arg0 withStopAtIndex:(unsigned int)arg1;
- (NSObject *)insertStopAtFraction:(float)arg0 withColor:(UIColor *)arg1;
- (void)removeStop:(id)arg0;
- (NSObject *)removeStopAtIndex:(unsigned int)arg0;
- (void)reverseStopOrder;
- (void)evenlyDistributeStops;
- (void)moveStopAtIndex:(unsigned int)arg0 toFraction:(float)arg1;
- (void)setInflectionOfStopAtIndex:(unsigned int)arg0 toInflection:(float)arg1;
- (void)setGradientStops:(NSArray *)arg0;
- (void)setFirstColor:(TSUColor *)arg0;
- (void)setLastColor:(TSUColor *)arg0;
- (struct CGAffineTransform)p_shadingTransformForBounds:(struct CGRect)arg0;
- (float)p_bestGradientLengthForRect:(struct CGRect)arg0 atAngle:(struct CGSize)arg1;
- (void)p_paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (TSDAngleGradient *)initWithStartColor:(UIColor *)arg0 endColor:(UIColor *)arg1 type:(unsigned int)arg2 angle:(float)arg3;
- (float)gradientAngleInDegrees;
- (int)mixingTypeWithObject:(NSObject *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSDAngleGradient *)copyWithZone:(struct _NSZone *)arg0;
- (TSDAngleGradient *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)setGradientType:(unsigned int)arg0;
- (void)paintRect:(struct CGRect)arg0 inContext:(struct CGSize)arg1;
- (void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;

@end
