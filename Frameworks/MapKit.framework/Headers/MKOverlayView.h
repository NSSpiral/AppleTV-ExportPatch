/* Runtime dump - MKOverlayView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKOverlayView : UIView
{
    <MKOverlay> * _overlay;
    struct ? _boundingMapRect;
    id _renderer;
}

@property (readonly, nonatomic) <MKOverlay> * overlay;

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
- (MKOverlayView *)init;
- (void)setContentScaleFactor:(float)arg0;
- (char)_canDrawContent;
- (void)setNeedsDisplayInRect:(struct CGRect)arg0;
- (void).cxx_destruct;
- (struct OpaqueFigSubtitleRenderer *)_renderer;
- (<MKOverlay> *)overlay;
- (MKOverlayView *)initWithOverlay:(<MKOverlay> *)arg0;
- (char)overlay:(<MKOverlay> *)arg0 canDrawKey:(struct ? *)arg1;
- (void)overlay:(<MKOverlay> *)arg0 drawKey:(struct ? *)arg1 inContext:(struct ?)arg2;

@end
