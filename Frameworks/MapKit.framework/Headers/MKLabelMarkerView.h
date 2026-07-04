/* Runtime dump - MKLabelMarkerView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKLabelMarkerView : MKAnnotationView

+ (char)_followsTerrain;

- (void)_deregisterObserver;
- (void)_registerObserver;
- (void)dealloc;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)setAnnotation:(<MKAnnotation> *)arg0;
- (MKLabelMarkerView *)initWithAnnotation:(<MKAnnotation> *)arg0 reuseIdentifier:(NSString *)arg1;

@end
