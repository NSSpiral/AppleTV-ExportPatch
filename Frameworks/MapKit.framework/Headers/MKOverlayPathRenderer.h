/* Runtime dump - MKOverlayPathRenderer
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOverlayPathRenderer : MKOverlayRenderer
{
    UIColor * _fillColor;
    UIColor * _strokeColor;
    float _lineWidth;
    int _lineJoin;
    int _lineCap;
    float _miterLimit;
    float _lineDashPhase;
    NSArray * _lineDashPattern;
    struct CGPath * _path;
}

@property (retain) UIColor * fillColor;
@property (retain) UIColor * strokeColor;
@property float lineWidth;
@property int lineJoin;
@property int lineCap;
@property float miterLimit;
@property float lineDashPhase;
@property (copy) NSArray * lineDashPattern;
@property struct CGPath * path;

- (int)lineCap;
- (float)lineDashPhase;
- (NSArray *)lineDashPattern;
- (void)applyFillPropertiesToContext:(struct CGContext *)arg0 atZoomScale:(float)arg1;
- (void)fillPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (void)applyStrokePropertiesToContext:(struct CGContext *)arg0 atZoomScale:(float)arg1;
- (void)strokePath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (void)setLineDashPhase:(float)arg0;
- (void)invalidatePath;
- (void)drawMapRect:(struct ?)arg0 zoomScale:(struct ?)arg1 inContext:(NSObject *)arg2;
- (void)dealloc;
- (struct CGPath *)path;
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
- (void)setLineDashPattern:(NSArray *)arg0;
- (void).cxx_destruct;
- (void)createPath;
- (int)lineJoin;
- (MKOverlayPathRenderer *)initWithOverlay:(<MKOverlay> *)arg0;

@end
