/* Runtime dump - MKOverlayRenderer
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOverlayRenderer : NSObject
{
    <MKOverlay> * _overlay;
    struct ? _boundingMapRect;
    id _renderer;
    float _contentScaleFactor;
    float _alpha;
}

@property (readonly, nonatomic) <MKOverlay> * overlay;
@property float alpha;
@property (readonly) float contentScaleFactor;

- (struct CGPoint)pointForMapPoint:(struct ?)arg0;
- (void)set_boundingMapRect:(struct ?)arg0;
- (CALayer *)_mk_overlayLayer;
- (NSObject *)_mk_overlayView;
- (void)set_renderer:(NSObject *)arg0;
- (void)drawMapRect:(struct ?)arg0 zoomScale:(struct ?)arg1 inContext:(NSObject *)arg2;
- (struct ?)mapRectForRect:(NSObject *)arg0;
- (void)setNeedsDisplayInMapRect:(struct ?)arg0;
- (struct ?)_originMapPoint;
- (struct ?)_boundingMapRect;
- (char)canDrawMapRect:(struct ?)arg0 zoomScale:(struct ?)arg1;
- (struct CGRect)rectForMapRect:(NSObject *)arg0;
- (struct ?)mapPointForPoint:(struct CGPoint)arg0;
- (void)setNeedsDisplayInMapRect:(struct ?)arg0 zoomScale:(struct ?)arg1;
- (void)dealloc;
- (void)setNeedsDisplay;
- (float)alpha;
- (void)setAlpha:(float)arg0;
- (MKOverlayRenderer *)init;
- (void)setContentScaleFactor:(float)arg0;
- (float)contentScaleFactor;
- (void).cxx_destruct;
- (struct OpaqueFigSubtitleRenderer *)_renderer;
- (<MKOverlay> *)overlay;
- (MKOverlayRenderer *)initWithOverlay:(<MKOverlay> *)arg0;
- (char)overlay:(<MKOverlay> *)arg0 canDrawKey:(struct ? *)arg1;
- (void)overlay:(<MKOverlay> *)arg0 drawKey:(struct ? *)arg1 inContext:(struct ?)arg2;

@end
