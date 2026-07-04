/* Runtime dump - MKPolygonRenderer
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPolygonRenderer : MKOverlayPathRenderer

@property (readonly, nonatomic) MKPolygon * polygon;

- (void)fillPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1;
- (MKPolygonRenderer *)initWithPolygon:(MKPolygon *)arg0;
- (MKPolygon *)polygon;
- (void)createPath;

@end
