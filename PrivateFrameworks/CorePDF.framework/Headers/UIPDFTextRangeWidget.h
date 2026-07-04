/* Runtime dump - UIPDFTextRangeWidget
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFTextRangeWidget : NSObject <UIPDFSelectionWidget>
{
    CALayer * _startSelectionGrabber;
    CALayer * _startBar;
    CALayer * _endSelectionGrabber;
    CALayer * _endBar;
    CALayer * _startHandle;
    CALayer * _endHandle;
    CALayer * _fixedSelectionGrabber;
    UIPDFPageView * _pageView;
    float _handleHeight;
    float _handleWidth;
    struct CGPoint _initialSelectionPointOnPage;
    float _offsetX;
    float _offsetY;
    unsigned int _startIndex;
    unsigned int _endIndex;
    struct CGColor * _grabberColor;
    long _startRectangle;
    long _endRectangle;
    BOOL _startLeft;
    BOOL _endRight;
    float _startX;
    float _endX;
}

@property (nonatomic) UIPDFPageView * pageView;
@property (readonly, nonatomic) struct CGPoint initialSelectionPointOnPage;
@property (readonly, nonatomic) struct CGPoint currentSelectionPointOnPage;

- (void)hide;
- (void)dealloc;
- (UIPDFTextRangeWidget *)init;
- (NSString *)description;
- (void)drawLayer:(CALayer *)arg0 inContext:(struct CGContext *)arg1;
- (void)layout;
- (void)setSelection:(TSKSelection *)arg0;
- (void)remove;
- (UIPDFPageView *)pageView;
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
- (void)layoutStartSelectionGrabber:(struct CGRect)arg0 transform:(struct CGSize)arg1 width:(int *)arg2 extraHeight:(struct CGAffineTransform *)arg3 unitSize:(float)arg4;
- (void)layoutEndSelectionGrabber:(struct CGRect)arg0 transform:(struct CGSize)arg1 width:(int *)arg2 extraHeight:(struct CGAffineTransform *)arg3 unitSize:(float)arg4;
- (void)layoutWidget;

@end
