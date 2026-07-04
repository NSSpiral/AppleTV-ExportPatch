/* Runtime dump - MKPolylineRenderer
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPolylineRenderer : MKOverlayPathRenderer

@property (readonly, nonatomic) MKPolyline * polyline;

- (void)drawMapRect:(struct ?)arg0 zoomScale:(struct ?)arg1 inContext:(NSObject *)arg2;
- (MKPolylineRenderer *)initWithPolyline:(MKPolyline *)arg0;
- (void)createPath;
- (MKPolyline *)polyline;

@end
