/* Runtime dump - SKShapeNode
 * Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

@interface SKShapeNode : SKNode
{
    struct SKCShapeSprite * ss;
}

@property (nonatomic) struct CGPath * path;
@property (retain, nonatomic) UIColor * strokeColor;
@property (retain, nonatomic) UIColor * fillColor;
@property (nonatomic) int blendMode;
@property (nonatomic) char antialiased;
@property (nonatomic) float lineWidth;
@property (nonatomic) float glowWidth;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (nonatomic) float miterLimit;
@property (readonly, nonatomic) float lineLength;
@property (retain, nonatomic) SKTexture * fillTexture;
@property (retain, nonatomic) SKShader * fillShader;
@property (retain, nonatomic) SKTexture * strokeTexture;
@property (retain, nonatomic) SKShader * strokeShader;
@property (nonatomic) float renderQualityRatio;

+ (SKShapeNode *)shapeNodeWithPath:(struct CGPath *)arg0;
+ (SKShapeNode *)shapeNodeWithEllipseInRect:(struct CGRect)arg0;
+ (SKShapeNode *)shapeNodeWithEllipseOfSize:(struct CGSize)arg0;
+ (SKShapeNode *)shapeNodeWithRect:(struct CGRect)arg0;
+ (SKShapeNode *)shapeNodeWithRect:(struct CGRect)arg0 cornerRadius:(struct CGSize)arg1;
+ (SKShapeNode *)shapeNodeWithPath:(struct CGPath *)arg0 centered:(char)arg1;
+ (SKShapeNode *)shapeNodeWithCircleOfRadius:(float)arg0;
+ (SKShapeNode *)shapeNodeWithRectOfSize:(struct CGSize)arg0;
+ (SKShapeNode *)shapeNodeWithRectOfSize:(struct CGSize)arg0 cornerRadius:(float)arg1;
+ (SKShapeNode *)shapeNodeWithTriangleA:(struct CGPoint)arg0 B:(struct CGPoint)arg1 C:(struct CGPoint)arg2;
+ (SKShapeNode *)shapeNodeWithPoints:(struct CGPoint *)arg0 count:(unsigned long)arg1;
+ (SKShapeNode *)shapeNodeWithSplinePoints:(struct CGPoint *)arg0 count:(unsigned long)arg1;

- (int)lineCap;
- (int)blendMode;
- (void)setBlendMode:(int)arg0;
- (char)isEqualToNode:(NSObject *)arg0;
- (void)_initialize;
- (void)_scaleFactorChangedFrom:(float)arg0 to:(float)arg1;
- (NSData *)_copyImageData;
- (struct CGRect)calculateAccumulatedFrame;
- (float)glowWidth;
- (char)isAntialiased;
- (void)setAntialiased:(char)arg0;
- (void)setGlowWidth:(float)arg0;
- (float)renderQualityRatio;
- (void)setRenderQualityRatio:(float)arg0;
- (SKShader *)fillShader;
- (void)setFillShader:(SKShader *)arg0;
- (SKShader *)strokeShader;
- (void)setStrokeShader:(SKShader *)arg0;
- (SKTexture *)strokeTexture;
- (void)setStrokeTexture:(SKTexture *)arg0;
- (float)lineLength;
- (void)dealloc;
- (SKShapeNode *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (SKShapeNode *)init;
- (struct CGRect)frame;
- (NSString *)description;
- (struct CGPath *)path;
- (SKShapeNode *)copyWithZone:(struct _NSZone *)arg0;
- (char)containsPoint:(struct CGPoint)arg0;
- (float)lineWidth;
- (void)setLineWidth:(float)arg0;
- (float)miterLimit;
- (void)setMiterLimit:(float)arg0;
- (void)setFillColor:(UIColor *)arg0;
- (void)setStrokeColor:(UIColor *)arg0;
- (UIColor *)fillColor;
- (UIColor *)strokeColor;
- (void)setPath:(struct CGPath *)arg0;
- (void)setLineCap:(int)arg0;
- (void)setLineJoin:(int)arg0;
- (char)fillPath;
- (void)setFillPath:(char)arg0;
- (int)lineJoin;
- (SKTexture *)fillTexture;
- (void)setFillTexture:(SKTexture *)arg0;

@end
