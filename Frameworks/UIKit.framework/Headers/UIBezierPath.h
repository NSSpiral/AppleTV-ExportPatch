/* Runtime dump - UIBezierPath
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIBezierPath : NSObject <NSCopying, NSCoding>
{
    struct CGPath * _path;
    float * _lineDashPattern;
    unsigned int _lineDashPatternCount;
    float _lineWidth;
    float _miterLimit;
    float _flatness;
    float _lineDashPhase;
    int _lineCapStyle;
    int _lineJoinStyle;
    char _usesEvenOddFillRule;
    struct CGPath * _immutablePath;
    char _immutablePathIsValid;
}

@property (nonatomic) struct CGPath * CGPath;
@property (readonly) char empty;
@property (readonly, nonatomic) struct CGRect bounds;
@property (readonly, nonatomic) struct CGPoint currentPoint;
@property (nonatomic) float lineWidth;
@property (nonatomic) int lineCapStyle;
@property (nonatomic) int lineJoinStyle;
@property (nonatomic) float miterLimit;
@property (nonatomic) float flatness;
@property (nonatomic) char usesEvenOddFillRule;

+ (UIBezierPath *)bezierPath;
+ (NSObject *)_bezierPathWithRoundedRect:(struct CGRect)arg0 byRoundingCorners:(struct CGSize)arg1 cornerRadius:(float)arg2;
+ (NSString *)_roundedRectBezierPath:(struct CGRect)arg0 withRoundedCorners:(struct CGSize)arg1 cornerRadius:(float)arg2 segments:(int)arg3 legacyCorners:(float)arg4;
+ (NSString *)roundedRectBezierPath:(struct CGRect)arg0 withRoundedCorners:(struct CGSize)arg1 withCornerRadii:(id)arg2;
+ (NSString *)_continuousRoundedRectBezierPath:(struct CGRect)arg0 withRoundedCorners:(struct CGSize)arg1 cornerRadius:(float)arg2 segments:(int)arg3;
+ (NSString *)_continuousRoundedRectBezierPath:(struct CGRect)arg0 withRoundedCorners:(struct CGSize)arg1 cornerRadii:(id)arg2 segments:(int)arg3 smoothPillShapes:(id)arg4;
+ (UIBezierPath *)bezierPathWithRect:(struct CGRect)arg0;
+ (UIBezierPath *)bezierPathWithOvalInRect:(struct CGRect)arg0;
+ (UIBezierPath *)bezierPathWithRoundedRect:(struct CGRect)arg0 cornerRadius:(struct CGSize)arg1;
+ (NSObject *)_bezierPathWithArcRoundedRect:(struct CGRect)arg0 cornerRadius:(struct CGSize)arg1;
+ (UIBezierPath *)bezierPathWithRoundedRect:(struct CGRect)arg0 byRoundingCorners:(struct CGSize)arg1 cornerRadii:(id)arg2;
+ (UIBezierPath *)bezierPathWithArcCenter:(struct CGPoint)arg0 radius:(float)arg1 startAngle:(float)arg2 endAngle:(float)arg3 clockwise:(char)arg4;
+ (UIBezierPath *)bezierPathWithCGPath:(struct CGPath *)arg0;
+ (NSString *)roundedRectBezierPath:(struct CGRect)arg0 withTopCornerRadius:(struct CGSize)arg1 withBottomCornerRadius:(id)arg2;
+ (NSString *)roundedRectBezierPath:(struct CGRect)arg0 withRoundedEdges:(struct CGSize)arg1;
+ (NSString *)roundedRectBezierPath:(struct CGRect)arg0 withRoundedCorners:(struct CGSize)arg1 withCornerRadius:(float)arg2;
+ (NSString *)_roundedRectBezierPath:(struct CGRect)arg0 withRoundedCorners:(struct CGSize)arg1 cornerRadius:(float)arg2 segments:(int)arg3;
+ (NSObject *)_bezierPathWithPillRect:(struct CGRect)arg0 cornerRadius:(struct CGSize)arg1;
+ (NSString *)shadowBezierPath:(struct CGRect)arg0 withRoundedEdges:(struct CGSize)arg1;

- (void)dealloc;
- (struct CGRect)bounds;
- (UIBezierPath *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (UIBezierPath *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (NSString *)_initWithCGMutablePath:(struct CGPath *)arg0;
- (struct CGPath *)_createMutablePathByDecodingData:(NSData *)arg0;
- (struct CGPath *)CGPath;
- (struct CGPath *)_mutablePath;
- (void)moveToPoint:(struct CGPoint)arg0;
- (void)addLineToPoint:(struct CGPoint)arg0;
- (void)closePath;
- (void)addQuadCurveToPoint:(struct CGPoint)arg0 controlPoint:(struct CGPoint)arg1;
- (void)addCurveToPoint:(struct CGPoint)arg0 controlPoint1:(struct CGPoint)arg1 controlPoint2:(struct CGPoint)arg2;
- (void)addClip;
- (UIBezierPath *)copyWithZone:(struct _NSZone *)arg0;
- (void)addArcWithCenter:(struct CGPoint)arg0 radius:(float)arg1 startAngle:(float)arg2 endAngle:(float)arg3 clockwise:(char)arg4;
- (void)appendPath:(NSString *)arg0;
- (void)applyTransform:(struct CGAffineTransform)arg0;
- (void)removeAllPoints;
- (NSString *)bezierPathByReversingPath;
- (void)setCGPath:(struct CGPath *)arg0;
- (char)isEmpty;
- (struct CGPoint)currentPoint;
- (char)containsPoint:(struct CGPoint)arg0;
- (void)setLineDash:(float *)arg0 count:(float)arg1 phase:(int)arg2;
- (void)getLineDash:(float *)arg0 count:(int *)arg1 phase:(float *)arg2;
- (void)fill;
- (void)stroke;
- (void)fillWithBlendMode:(int)arg0 alpha:(float)arg1;
- (void)strokeWithBlendMode:(int)arg0 alpha:(float)arg1;
- (void)_addRoundedCornerWithTrueCorner:(struct CGPoint)arg0 radius:(struct CGSize)arg1 corner:(unsigned int)arg2 clockwise:(char)arg3;
- (struct CGPath *)_pathRef;
- (void)lineToPoint:(struct CGPoint)arg0;
- (void)clip;
- (void)appendBezierPath:(NSString *)arg0;
- (void)appendBezierPathWithRect:(struct CGRect)arg0;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg0;
- (void)appendBezierPathWithOvalInRect:(struct CGRect)arg0 transform:(struct CGSize)arg1;
- (void)appendBezierPathWithArcWithCenter:(struct CGPoint)arg0 radius:(float)arg1 startAngle:(float)arg2 endAngle:(float)arg3 clockwise:(char)arg4;
- (float)lineWidth;
- (void)setLineWidth:(float)arg0;
- (int)lineCapStyle;
- (void)setLineCapStyle:(int)arg0;
- (int)lineJoinStyle;
- (void)setLineJoinStyle:(int)arg0;
- (float)miterLimit;
- (void)setMiterLimit:(float)arg0;
- (float)flatness;
- (void)setFlatness:(float)arg0;
- (char)usesEvenOddFillRule;
- (void)setUsesEvenOddFillRule:(char)arg0;

@end
