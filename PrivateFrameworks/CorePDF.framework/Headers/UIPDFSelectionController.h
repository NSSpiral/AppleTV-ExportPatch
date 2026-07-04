/* Runtime dump - UIPDFSelectionController
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFSelectionController : NSObject
{
    UIPDFPageView * _pageView;
    char _rangeMode;
    <UIPDFSelectionWidget><NSObject> * _selectionWidget;
    char _resizingWidget;
    struct CGPoint _selectionFixedPoint;
    struct CGRect _selectionBounds;
    char _preceeds;
    char _isTracking;
    struct CGPoint _adjustedPoint;
    char _hiding;
    long _firstIndex;
    long _lastIndex;
    struct CGPoint _startPoint;
    char _needsLayout;
    char _cancelled;
    char _instantModeIsSuspended;
    char _instantHighlightMode;
}

@property (nonatomic) UIPDFPageView * pageView;
@property (readonly, nonatomic) char rangeMode;
@property (readonly, nonatomic) <UIPDFSelectionWidget> * selectionWidget;
@property (readonly, nonatomic) char isTracking;
@property (readonly, nonatomic) struct CGPoint adjustedPoint;
@property (readonly, nonatomic) struct CGPoint initialSelectionPoint;
@property (readonly, nonatomic) struct CGPoint currentSelectionPoint;
@property (nonatomic) char instantHighlightMode;

- (void)dealloc;
- (UIPDFSelectionController *)init;
- (NSString *)description;
- (char)isTracking;
- (void)clearSelection;
- (UIPDFPageView *)pageView;
- (void)layoutSelections;
- (void)hideWidget;
- (void)addSelectionWidget:(ATVIPv4AddressSelectionWidget *)arg0;
- (void)setInstantHighlightMode:(char)arg0;
- (void)suspendInstantHighlightMode;
- (void)setPageView:(UIPDFPageView *)arg0;
- (void)selectionHideFromAncestor:(id)arg0;
- (void)selectionShowToAncestor:(id)arg0;
- (void)selectionHide:(id)arg0;
- (void)selectionShowDelayed:(id)arg0;
- (void)selectionShow:(id)arg0;
- (void)setSelectionFor:(struct CGPoint)arg0;
- (char)useParagraphMode;
- (void)startSelectingAt:(struct CGPoint)arg0;
- (void)adjustSelection:(struct CGPoint)arg0;
- (void)extendSelectionToParagraph;
- (char)shouldTrackAt:(struct CGPoint)arg0;
- (void)startTracking:(struct CGPoint)arg0 showMagnifier:(char *)arg1;
- (void)tracking:(struct CGPoint)arg0 showMagnifier:(char *)arg1;
- (void)endTracking:(struct CGPoint)arg0;
- (void)startTracking:(struct CGPoint)arg0 andPoint:(struct CGPoint)arg1;
- (void)tracking:(struct CGPoint)arg0 andPoint:(struct CGPoint)arg1;
- (struct CGPoint)selectedPointOffset;
- (struct CGPoint)initialSelectionPoint;
- (struct CGPoint)currentSelectionPoint;
- (char)rangeMode;
- (<UIPDFSelectionWidget> *)selectionWidget;
- (struct CGPoint)adjustedPoint;
- (char)instantHighlightMode;

@end
