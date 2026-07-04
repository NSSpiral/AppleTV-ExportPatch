/* Runtime dump - CMShapeRenderer
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMShapeRenderer : NSObject

+ (void)renderCanonicalShape:(int)arg0 fill:(id)arg1 stroke:(TSDStroke *)arg2 adjustValues:(NSDictionary *)arg3 orientedBounds:(OADOrientedBounds *)arg4 state:(NSObject *)arg5 drawingContext:(NSObject *)arg6;
+ (void)renderDiagramPath:(NSString *)arg0 fill:(id)arg1 stroke:(TSDStroke *)arg2 state:(NSObject *)arg3 drawingContext:(NSObject *)arg4;
+ (void)renderLine:(int)arg0 stroke:(TSDStroke *)arg1 adjustValues:(NSDictionary *)arg2 orientedBounds:(OADOrientedBounds *)arg3 state:(NSObject *)arg4 drawingContext:(NSObject *)arg5;
+ (void)_renderCGPath:(struct CGPath *)arg0 stroke:(TSDStroke *)arg1 fill:(id)arg2 orientedBounds:(OADOrientedBounds *)arg3 state:(NSObject *)arg4 drawingContext:(NSObject *)arg5;
+ (struct CGImage *)_copyImageFromOADImagefill:(id)arg0 withContext:(NSObject *)arg1;
+ (void)_setupDrawingStyleInDrawingContext:(NSObject *)arg0 fill:(id)arg1 stroke:(TSDStroke *)arg2 state:(NSObject *)arg3;
+ (void)_setupDrawingStyleInDrawingContext:(NSObject *)arg0 stroke:(TSDStroke *)arg1 state:(NSObject *)arg2;
+ (struct CGColor *)_copyCGColorFromOADFill:(id)arg0 andState:(NSObject *)arg1;
+ (struct CGColor *)_copyCGColorFromOADColor:(UIColor *)arg0 andState:(NSObject *)arg1;
+ (void)_setupDrawingStyleInDrawingContext:(NSObject *)arg0 dash:(id)arg1 state:(NSObject *)arg2;
+ (void)renderFreeForm:(id)arg0 fill:(id)arg1 stroke:(TSDStroke *)arg2 orientedBounds:(OADOrientedBounds *)arg3 state:(NSObject *)arg4 drawingContext:(NSObject *)arg5;

@end
