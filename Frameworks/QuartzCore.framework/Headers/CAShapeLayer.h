/* Runtime dump - CAShapeLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAShapeLayer : CALayer

@property struct CGPath * path;
@property struct CGColor * fillColor;
@property (copy) NSString * fillRule;
@property struct CGColor * strokeColor;
@property float strokeStart;
@property float strokeEnd;
@property float lineWidth;
@property float miterLimit;
@property (copy) NSString * lineCap;
@property (copy) NSString * lineJoin;
@property float lineDashPhase;
@property (copy) NSArray * lineDashPattern;

+ (CAShapeLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;
+ (char)_hasRenderLayerSubclass;

- (void)setCGLineCap:(int)arg0;
- (void)setCGLineJoin:(int)arg0;
- (NSString *)lineCap;
- (float)lineDashPhase;
- (NSArray *)lineDashPattern;
- (void)setLineDashPhase:(float)arg0;
- (BOOL)_renderLayerDefinesProperty:(unsigned int)arg0;
- (unsigned int)_renderLayerPropertyAnimationFlags:(unsigned int)arg0;
- (struct Layer *)_copyRenderLayer:(struct Rect)arg0 layerFlags:(id)arg1 commitFlags:(struct Ref<CA::Render::Object>)arg2;
- (void)_renderForegroundInContext:(struct CGContext *)arg0;
- (NSString *)fillRule;
- (float)strokeStart;
- (float)strokeEnd;
- (void)setStrokeStart:(float)arg0;
- (void)setStrokeEnd:(float)arg0;
- (void)didChangeValueForKey:(NSString *)arg0;
- (struct CGPath *)path;
- (float)lineWidth;
- (void)setLineWidth:(float)arg0;
- (float)miterLimit;
- (void)setMiterLimit:(float)arg0;
- (NSString *)implicitAnimationForKeyPath:(NSString *)arg0;
- (void)setFillColor:(struct CGColor *)arg0;
- (void)setStrokeColor:(struct CGColor *)arg0;
- (struct CGColor *)fillColor;
- (void)setFillRule:(NSString *)arg0;
- (struct CGColor *)strokeColor;
- (void)setPath:(struct CGPath *)arg0;
- (void)setLineCap:(NSString *)arg0;
- (void)setLineJoin:(NSString *)arg0;
- (void)setLineDashPattern:(NSArray *)arg0;
- (NSString *)lineJoin;

@end
