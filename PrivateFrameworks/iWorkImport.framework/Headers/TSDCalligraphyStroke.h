/* Runtime dump - TSDCalligraphyStroke
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDCalligraphyStroke : TSDSmartStroke

+ (Class)mutableClass;

- (void)applyToContext:(struct CGContext *)arg0 insideStroke:(char)arg1;
- (struct CGRect)boundsForLineEnd:(id)arg0 atPoint:(SEL)arg1 atAngle:(TSDSpecShadowSetAngle *)arg2 withScale:(struct CGPoint)arg3 transform:(float)arg4;
- (TSDCalligraphyStroke *)initWithColor:(UIColor *)arg0 width:(float)arg1 cap:(int)arg2 join:(int)arg3 pattern:(TSDStrokePattern *)arg4 miterLimit:(float)arg5;
- (void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(char)arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(char)arg3;
- (void)paintLineEnd:(id)arg0 atPoint:(struct CGPoint)arg1 atAngle:(float)arg2 withScale:(float)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(char)arg5;
- (char)canApplyToCAShapeLayer;
- (char)drawsOutsideStrokeBounds;
- (struct CGRect)boundsForPath:(NSString *)arg0;
- (char)prefersToApplyToCAShapeLayerDuringManipulation;
- (char)drawsInOneStep;
- (TSDCalligraphyStroke *)initWithName:(NSString *)arg0 color:(UIColor *)arg1 width:(float)arg2 cap:(int)arg3 join:(int)arg4 pattern:(TSDStrokePattern *)arg5 miterLimit:(float)arg6;
- (char)chisel;
- (struct CGAffineTransform)transformInContext:(struct CGContext *)arg0;
- (float)scale;
- (TSDCalligraphyStroke *)copyWithZone:(struct _NSZone *)arg0;
- (TSDCalligraphyStroke *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (float)angle;

@end
