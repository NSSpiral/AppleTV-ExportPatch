/* Runtime dump - MKCircleView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCircleView : MKOverlayPathView

@property (readonly, nonatomic) MKCircle * circle;

- (MKCircleView *)initWithCircle:(MKCircle *)arg0;
- (MKCircle *)circle;
- (void)createPath;

@end
