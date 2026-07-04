/* Runtime dump - TSKGradientShapeLayer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSKGradientShapeLayer : CAShapeLayer
{
    CAGradientLayer * _gradient;
    CAShapeLayer * _shapeMask;
}

@property (copy) NSArray * colors;
@property (copy) NSArray * locations;
@property struct CGPoint startPoint;
@property struct CGPoint endPoint;
@property (copy) NSString * type;
@property (retain, nonatomic) CAGradientLayer * gradient;
@property (retain, nonatomic) CAShapeLayer * shapeMask;

- (CAShapeLayer *)shapeMask;
- (void)setShapeMask:(CAShapeLayer *)arg0;
- (char)isGradientTree;
- (void)p_flatten;
- (void)p_createGradientTreeIfNeeded;
- (void)setLineDashPhase:(float)arg0;
- (void)setStrokeStart:(float)arg0;
- (void)setStrokeEnd:(float)arg0;
- (void)dealloc;
- (void)setColors:(NSArray *)arg0;
- (void)setLocations:(NSArray *)arg0;
- (void)setDelegate:(NSObject *)arg0;
- (void)setType:(NSString *)arg0;
- (NSString *)type;
- (void)setLineWidth:(float)arg0;
- (void)setMiterLimit:(float)arg0;
- (struct CGPoint)startPoint;
- (void)setStartPoint:(struct CGPoint)arg0;
- (void)setEndPoint:(struct CGPoint)arg0;
- (void)setFillColor:(struct CGColor *)arg0;
- (void)setStrokeColor:(struct CGColor *)arg0;
- (void)setFillRule:(NSString *)arg0;
- (void)setPath:(struct CGPath *)arg0;
- (NSArray *)colors;
- (void)setLineCap:(NSString *)arg0;
- (void)setLineJoin:(NSString *)arg0;
- (void)setLineDashPattern:(NSArray *)arg0;
- (void)setGradient:(CAGradientLayer *)arg0;
- (CAGradientLayer *)gradient;
- (NSArray *)locations;
- (struct CGPoint)endPoint;

@end
