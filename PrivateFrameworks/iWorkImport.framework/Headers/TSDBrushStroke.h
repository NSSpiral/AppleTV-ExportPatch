/* Runtime dump - TSDBrushStroke
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDBrushStroke : TSDSmartStroke

+ (TSDBrushStroke *)sharedContext;
+ (Class)mutableClass;
+ (TSDBrushStroke *)cacheDirectory;
+ (void)loadLineEndsForBrush:(id)arg0 inSVGDoc:(struct _xmlDoc *)arg1;
+ (void)loadSectionsForBrush:(id)arg0 inSVGDoc:(struct _xmlDoc *)arg1;
+ (void)loadLineEndTextureForBrush:(id)arg0 lineEnd:(TSDLineEnd *)arg1 path:(struct CGPath *)arg2 andBounds:(struct CGRect)arg3;
+ (TSDBrushStroke *)loadImageForBrush:(id)arg0;
+ (void)loadBrush:(id)arg0;
+ (TSDBrushStroke *)brushProgram;
+ (struct CGImage *)newCGImageFromGL;
+ (void)applicationDidBecomeActive;
+ (void)applicationWillResignActive;
+ (NSOperationQueue *)renderQueue;

- (char)supportsPattern;
- (void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(char)arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(char)arg3;
- (void)paintLineEnd:(id)arg0 atPoint:(struct CGPoint)arg1 atAngle:(float)arg2 withScale:(float)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(char)arg5;
- (char)canApplyToCAShapeLayer;
- (char)needsToExtendJoinsForBoundsCalculation;
- (float)lineEndInsetAdjustment;
- (id)strokeLineEnd:(id)arg0;
- (float)suggestedMinimumLineWidth;
- (char)prefersToApplyToCAShapeLayerDuringManipulation;
- (char)drawsInOneStep;
- (struct CGImage *)maskForId:(NSObject *)arg0;
- (NSObject *)brushTextureForId:(NSObject *)arg0;
- (void)brushPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (void)glBrushPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (void)renderOpenGLSection:(id)arg0 sectionIndex:(unsigned int)arg1 ontoPath:(NSString *)arg2 withScaling:(struct ?)arg3 inElementRange:(struct _NSRange)arg4 into:(struct vector<TSDBrushVertexData, std::__1::allocator<TSDBrushVertexData> > *)arg5 viewScale:(struct TSDBrushVertexData *)arg6;
- (NSObject *)brushPathsForId:(NSObject *)arg0;
- (NSObject *)brushBoundsForId:(NSObject *)arg0;
- (void)brushSection:(id)arg0 sectionIndex:(unsigned int)arg1 ontoPath:(NSString *)arg2 withScaling:(struct ?)arg3 inElementRange:(struct _NSRange)arg4 into:(void *)arg5 viewScale:(float)arg6;
- (void)brushPath:(NSString *)arg0 withScaling:(struct ?)arg1 inElementRange:(struct _NSRange)arg2 into:(void *)arg3 sectionIndex:(unsigned int *)arg4 viewScale:(float)arg5;
- (void)finishOpenGLRenderInContext:(struct CGContext *)arg0 pathVertexData:(struct vector<TSDBrushVertexData, std::__1::allocator<TSDBrushVertexData> > *)arg1;
- (NSString *)description;
- (TSDBrushStroke *)copyWithZone:(struct _NSZone *)arg0;
- (TSDBrushStroke *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)cap;

@end
