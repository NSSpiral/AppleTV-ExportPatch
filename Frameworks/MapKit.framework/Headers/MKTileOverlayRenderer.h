/* Runtime dump - MKTileOverlayRenderer
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTileOverlayRenderer : MKOverlayRenderer

- (void)drawMapRect:(struct ?)arg0 zoomScale:(struct ?)arg1 inContext:(NSObject *)arg2;
- (char)canDrawMapRect:(struct ?)arg0 zoomScale:(struct ?)arg1;
- (MKTileOverlayRenderer *)initWithTileOverlay:(NSObject *)arg0;
- (void)reloadData;
- (MKTileOverlayRenderer *)initWithOverlay:(<MKOverlay> *)arg0;

@end
