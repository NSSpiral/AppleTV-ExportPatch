/* Runtime dump - MKPolylineView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPolylineView : MKOverlayPathView

@property (readonly, nonatomic) MKPolyline * polyline;

- (void)drawMapRect:(struct ?)arg0 zoomScale:(struct ?)arg1 inContext:(NSObject *)arg2;
- (MKPolylineView *)initWithPolyline:(MKPolyline *)arg0;
- (void)createPath;
- (MKPolyline *)polyline;

@end
