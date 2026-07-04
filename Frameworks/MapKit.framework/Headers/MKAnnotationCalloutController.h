/* Runtime dump - MKAnnotationCalloutController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAnnotationCalloutController : NSObject
{
    <MKAnnotationCalloutControllerDelegate> * _delegate;
    MKAnnotationView * _annotationView;
    unsigned int _mapDisplayStyle;
}

@property (weak, nonatomic) <MKAnnotationCalloutControllerDelegate> * delegate;
@property (retain, nonatomic) MKAnnotationView * annotationView;
@property (nonatomic) unsigned int mapDisplayStyle;

- (char)calloutContainsPoint:(struct CGPoint)arg0;
- (char)isCalloutExpanded;
- (void)setAnnotationView:(MKAnnotationView *)arg0;
- (void)_updateCalloutAnimated:(char)arg0;
- (void)_updateCallout;
- (void)_calloutAccessoryControlTapped:(id)arg0;
- (MKAnnotationView *)annotationView;
- (void)_removeAccessoryTargetForView:(NSObject *)arg0;
- (NSString *)_subtitle;
- (void)_setLeftAccessoryView:(NSObject *)arg0 animated:(char)arg1;
- (void)_setRightAccessoryView:(NSObject *)arg0 animated:(char)arg1;
- (void)_setDetailAccessoryView:(NSObject *)arg0 animated:(char)arg1;
- (void)_setSubtitle:(MREffectReflectionsSubtitle *)arg0 animated:(char)arg1;
- (void)_addAccessoryTargetForView:(NSObject *)arg0;
- (float)defaultCalloutHeight;
- (char)_isShowingCallout;
- (void)_removeAccessoryTargets;
- (struct CGRect)_visibleCenteringRectInView:(NSObject *)arg0;
- (void)showCalloutForAnnotationView:(NSObject *)arg0 animated:(char)arg1 scrollToFit:(char)arg2 avoid:(struct CGRect)arg3;
- (void)hideCalloutAnimated:(char)arg0;
- (void)dealloc;
- (void)setDelegate:(<MKAnnotationCalloutControllerDelegate> *)arg0;
- (<MKAnnotationCalloutControllerDelegate> *)delegate;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)_setTitle:(NSString *)arg0;
- (void).cxx_destruct;
- (unsigned int)mapDisplayStyle;
- (void)setMapDisplayStyle:(unsigned int)arg0;

@end
