/* Runtime dump - MKRouteStepPolyline
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKRouteStepPolyline : MKPolyline
{
    MKRoutePolyline * _fullRoute;
}

- (MKRouteStepPolyline *)_initWithRoute:(ATVRoute *)arg0 range:(struct _NSRange)arg1;
- (void)dealloc;
- (void).cxx_destruct;
- (struct ?)coordinate;

@end
