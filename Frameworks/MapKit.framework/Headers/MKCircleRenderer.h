/* Runtime dump - MKCircleRenderer
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCircleRenderer : MKOverlayPathRenderer

@property (readonly, nonatomic) MKCircle * circle;

- (MKCircleRenderer *)initWithCircle:(MKCircle *)arg0;
- (MKCircle *)circle;
- (void)createPath;

@end
