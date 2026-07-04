/* Runtime dump - MKCalloutBasedAnnotationCalloutController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKCalloutBasedAnnotationCalloutController : MKAnnotationCalloutController
{
    UICalloutView * _calloutView;
}

- (char)calloutContainsPoint:(struct CGPoint)arg0;
- (char)isCalloutExpanded;
- (NSString *)_subtitle;
- (void)_setLeftAccessoryView:(NSObject *)arg0 animated:(char)arg1;
- (void)_setRightAccessoryView:(NSObject *)arg0 animated:(char)arg1;
- (void)_setDetailAccessoryView:(NSObject *)arg0 animated:(char)arg1;
- (void)_setSubtitle:(MREffectReflectionsSubtitle *)arg0 animated:(char)arg1;
- (float)defaultCalloutHeight;
- (char)_isShowingCallout;
- (void)showCalloutForAnnotationView:(NSObject *)arg0 animated:(char)arg1 scrollToFit:(char)arg2 avoid:(struct CGRect)arg3;
- (void)hideCalloutAnimated:(char)arg0;
- (void)_addCallout:(CPDistributedMessagingCallout *)arg0 forAnnotationView:(NSObject *)arg1 anchorPoint:(struct CGPoint)arg2 boundaryRect:(struct CGRect)arg3 animated:(struct CGSize)arg4;
- (MKCalloutBasedAnnotationCalloutController *)init;
- (void)calloutView:(UICalloutView *)arg0 willMoveToAnchorPoint:(struct CGPoint)arg1 animated:(char)arg2;
- (void)calloutView:(UICalloutView *)arg0 didMoveToAnchorPoint:(struct CGPoint)arg1 animated:(char)arg2;
- (void)_setTitle:(NSString *)arg0;
- (void).cxx_destruct;

@end
