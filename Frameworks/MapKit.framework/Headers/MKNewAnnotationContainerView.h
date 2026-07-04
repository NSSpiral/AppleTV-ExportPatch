/* Runtime dump - MKNewAnnotationContainerView
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKNewAnnotationContainerView : MKAnnotationContainerView
{
    char _suppress;
}

- (void)setAnnotationViewsRotationRadians:(float)arg0 animation:(CAAnimation *)arg1;
- (void)_updateAnnotationViewPerspective;
- (void)suppressUpdates;
- (void)stopSuppressingUpdates;
- (void)_updateAnnotationView:(NSObject *)arg0;
- (void)_updateAnnotationViewPositions;
- (void)_updateAddedAnnotationRotation:(id)arg0;

@end
