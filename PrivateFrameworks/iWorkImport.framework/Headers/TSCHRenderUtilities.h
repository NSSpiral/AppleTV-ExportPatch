/* Runtime dump - TSCHRenderUtilities
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHRenderUtilities : NSObject

+ (struct CGRect)labelRectFromClipRect:(NSObject *)arg0 elementSize:(SEL)arg1;
+ (void)addTextSubselectionKnobsToArray:(NSArray *)arg0 rect:(struct CGRect)arg1 transform:(struct CGSize)arg2;
+ (void)drawFill:(id)arg0 inContext:(struct CGContext *)arg1 frame:(struct CGRect)arg2;
+ (TSCHRenderUtilities *)lightenFillOrStroke:(id)arg0 byPercent:(float)arg1;
+ (void)drawFill:(id)arg0 inContext:(struct CGContext *)arg1 path:(struct CGPath *)arg2;
+ (struct CGRect)integralFillRenderingRectFromElementRect:(NSObject *)arg0;
+ (void)addTextSubselectionHalosToArray:(NSArray *)arg0 rect:(struct CGRect)arg1 transform:(struct CGSize)arg2;
+ (char)centerPointForSeries:(id)arg0 index:(unsigned int)arg1 frame:(struct CGRect)arg2 point:(struct CGSize)arg3;
+ (struct CGPath *)newStrokedPathFromPath:(struct CGPath *)arg0 stroke:(TSDStroke *)arg1 cap:(int)arg2;
+ (struct CGPath *)newClipPathForSymbol:(int)arg0 at:(struct CGPoint)arg1 width:(float)arg2 stroke:(TSDStroke *)arg3;
+ (void)drawSymbol:(int)arg0 inContext:(struct CGContext *)arg1 at:(struct CGPoint)arg2 width:(float)arg3 fill:(id)arg4 stroke:(TSDStroke *)arg5;
+ (struct CGPath *)p_newPathForSymbol:(int)arg0 context:(struct CGContext *)arg1 at:(struct CGPoint)arg2 width:(float)arg3 pathLocation:(int)arg4 stroke:(TSDStroke *)arg5;
+ (char)centerPointForSeries:(id)arg0 index:(unsigned int)arg1 frame:(struct CGRect)arg2 point:(struct CGSize)arg3 nullsUseIntercept:(id)arg4;
+ (struct CGColor *)newLightenedColor:(struct CGColor *)arg0 byPercent:(float)arg1;
+ (struct CGPath *)p_newCirclePath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3;
+ (struct CGPath *)p_newTrianglePath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3;
+ (struct CGPath *)p_newYieldPath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3;
+ (struct CGPath *)p_newSquarePath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3 context:(struct CGContext *)arg4;
+ (struct CGPath *)p_newDiamondPath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3;
+ (struct CGPath *)p_newCrossPath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3;
+ (struct CGPath *)p_newPlusPath:(struct CGPoint)arg0 width:(float)arg1 pathLocation:(int)arg2 stroke:(TSDStroke *)arg3 context:(struct CGContext *)arg4;
+ (void)drawNullFillSwatchInContext:(struct CGContext *)arg0 frame:(struct CGRect)arg1;
+ (NSString *)printCGPath:(struct CGPath *)arg0;
+ (struct CGPath *)newUnitPathForSymbol:(int)arg0 symbolSize:(float)arg1 stroke:(TSDStroke *)arg2;
+ (struct CGRect)scaleRect:(NSObject *)arg0 toFit:(SEL)arg1;
+ (struct CGImage *)newImageFromFills:(id)arg0 size:(struct CGSize)arg1 spaceBetween:(struct CGSize)arg2 scale:(float)arg3 borderColor:(UIColor *)arg4 outFillRects:(struct CGRect * *)arg5;

@end
