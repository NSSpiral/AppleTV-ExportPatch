/* Runtime dump - MKMapSnapshot
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKMapSnapshot : NSObject
{
    VKMapSnapshot * _snapshot;
    UIImage * _image;
}

@property (readonly, nonatomic) UIImage * image;

- (NSObject *)snapshotWithAnnotationView:(NSObject *)arg0 atCoordinate:(struct ?)arg1;
- (NSObject *)snapshotWithAnnotationView:(NSObject *)arg0 atPoint:(struct CGPoint)arg1;
- (NSObject *)_initWithSnapshot:(VKMapSnapshot *)arg0;
- (struct ?)_coordinateForPoint:(struct CGPoint)arg0;
- (UIImage *)image;
- (void).cxx_destruct;
- (struct CGPoint)pointForCoordinate:(struct ?)arg0;

@end
