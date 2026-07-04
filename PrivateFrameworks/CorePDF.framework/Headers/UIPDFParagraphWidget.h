/* Runtime dump - UIPDFParagraphWidget
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFParagraphWidget : NSObject <UIPDFSelectionWidget>
{
    CAShapeLayer * _trackingBorder;
    struct CGRect _initialRect;
    char _tracking;
    struct CGRect _currentTrackingRect;
    CALayer * _leftGrabber;
    CALayer * _rightGrabber;
    CALayer * _topGrabber;
    CALayer * _bottomGrabber;
    CALayer * _selectedGrabber;
    struct CGRect _boundsInPDFSpace;
    UIPDFPageView * _pageView;
    struct CGPoint _initialSelectionPointOnPage;
}

@property (nonatomic) UIPDFPageView * pageView;
@property (readonly, nonatomic) struct CGPoint initialSelectionPointOnPage;
@property (readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;

- (void)hide;
- (void)dealloc;
- (UIPDFParagraphWidget *)init;
- (void)layout;
- (void)setSelection:(TSKSelection *)arg0;
- (void)remove;
- (UIPDFPageView *)pageView;
- (void)setSelectedGrabberPosition:(struct CGRect)arg0;
- (struct CGRect)adjustRect:(NSObject *)arg0 toPoint:(SEL)arg1;
- (struct CGRect)selectionBoundsInEffectsSpace;
- (char)hitTest:(struct CGPoint)arg0 fixedPoint:(struct CGPoint *)arg1 preceeds:(char *)arg2;
- (struct CGPoint)selectedPointFor:(struct CGPoint)arg0;
- (struct CGPoint)viewOffset;
- (void)track:(struct CGPoint)arg0;
- (void)endTracking;
- (struct CGRect)selectionRectangle;
- (void)setSelectedGrabber:(unsigned int)arg0;
- (struct CGPoint)initialSelectionPointOnPage;
- (struct CGPoint)currentSelectionPointOnPage;
- (void)setPageView:(UIPDFPageView *)arg0;

@end
