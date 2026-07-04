/* Runtime dump - MKPolygonView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPolygonView : MKOverlayPathView

@property (readonly, nonatomic) MKPolygon * polygon;

- (void)fillPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (MKPolygonView *)initWithPolygon:(MKPolygon *)arg0;
- (MKPolygon *)polygon;
- (void)createPath;

@end
