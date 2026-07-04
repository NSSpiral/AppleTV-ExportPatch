/* Runtime dump - MKPopoverBasedAnnotationCalloutController
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPopoverBasedAnnotationCalloutController : MKAnnotationCalloutController <_MKPopoverEmbeddingViewWindowDelegate, _UIPopoverControllerMapsTransitionDelegate, UIPopoverControllerDelegate, UIPopoverControllerDelegatePrivate, MKSmallCalloutViewControllerDelegate>
{
    UIPopoverController * _popoverController;
    MKSmallCalloutViewController * _calloutViewController;
    id _afterMoveToWindowBlock;
    UIView * _layoutConstraintsView;
    _MKPopoverEmbeddingView * _embeddingView;
    char _isHidingForImplementationReasons;
    char _allowsPopoverWhenNotInWindow;
    char _animatingIn;
    char _isShowingPopover;
    char _isCalloutExpanded;
}

@property (readonly, nonatomic) UIPopoverController * popoverController;
@property (nonatomic) char allowsPopoverWhenNotInWindow;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_contentSizeCategoryDidChange:(NSDictionary *)arg0;
- (char)allowsPopoverWhenNotInWindow;
- (void)setAllowsPopoverWhenNotInWindow:(char)arg0;
- (char)calloutContainsPoint:(struct CGPoint)arg0;
- (char)isCalloutExpanded;
- (void)_updateCalloutAnimated:(char)arg0;
- (NSString *)_subtitle;
- (void)_setLeftAccessoryView:(NSObject *)arg0 animated:(char)arg1;
- (void)_setRightAccessoryView:(NSObject *)arg0 animated:(char)arg1;
- (void)_setDetailAccessoryView:(NSObject *)arg0 animated:(char)arg1;
- (void)_setSubtitle:(MREffectReflectionsSubtitle *)arg0 animated:(char)arg1;
- (char)_isShowingCallout;
- (void)showCalloutForAnnotationView:(NSObject *)arg0 animated:(char)arg1 scrollToFit:(char)arg2 avoid:(struct CGRect)arg3;
- (void)hideCalloutAnimated:(char)arg0;
- (void)_showCalloutAnimated:(char)arg0 scrollToFit:(char)arg1 avoid:(struct CGRect)arg2;
- (void)_snapLayoutConstraintsViewToContainerBounds;
- (void)_updatePopoverContentSize:(char)arg0;
- (void)embeddingView:(_MKPopoverEmbeddingView *)arg0 willMoveToWindow:(UIWindow *)arg1;
- (void)embeddingView:(_MKPopoverEmbeddingView *)arg0 didMoveToWindow:(UIWindow *)arg1;
- (void)smallCalloutViewControllerDidAppear:(MKSmallCalloutViewController *)arg0;
- (void)dealloc;
- (MKPopoverBasedAnnotationCalloutController *)init;
- (void)_setTitle:(NSString *)arg0;
- (void)popoverController:(UIPopoverController *)arg0 animationCompleted:(int)arg1;
- (void).cxx_destruct;
- (UIPopoverController *)popoverController;
- (void)_popoverControllerWillBeginMapsTransitionMovingSideways:(UIPopoverController *)arg0;
- (void)_popoverControllerDidFinishMapsTransitionExpanding:(UIPopoverController *)arg0;
- (void)setMapDisplayStyle:(unsigned int)arg0;

@end
