/* Runtime dump - UIPDFViewTouchHandler
 * Image: /System/Library/PrivateFrameworks/CorePDF.framework/CorePDF
 */

@interface UIPDFViewTouchHandler : UIResponder <UIGestureRecognizerDelegate>
{
    UIPDFPageView * _pdfPageView;
    UITapGestureRecognizer * _doubleTapRecognizer;
    UITapGestureRecognizer * _singleTapRecognizer;
    UILongPressGestureRecognizer * _briefPressRecognizer;
    UILongPressGestureRecognizer * _longPressRecognizer;
    UITapGestureRecognizer * _twoFingerTapRecognizer;
    UIMenuController * _menuController;
    UIPDFSelectionController * _selectionController;
    UIPDFMagnifierController * _magnifyController;
    char _trackingSelection;
    char _showMagnifier;
    char _showLoupe;
    char _firstTouch;
    char _useDelegateForLinks;
    char _allowMenu;
}

@property char allowMenu;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)releaseViewManager;

- (void)showMenu;
- (void)dealloc;
- (char)gestureRecognizerShouldBegin:(UIGestureRecognizer *)arg0;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(ADTapGestureRecognizer *)arg1;
- (char)gestureRecognizer:(ADTapGestureRecognizer *)arg0 shouldReceiveTouch:(UITouch *)arg1;
- (WAKView *)nextResponder;
- (char)canPerformAction:(SEL)arg0 withSender:(NSObject *)arg1;
- (char)resignFirstResponder;
- (char)canBecomeFirstResponder;
- (UIPDFViewTouchHandler *)initWithView:(WKContentView *)arg0;
- (void)selectAll:(id)arg0;
- (void)copy:(id)arg0;
- (void)enableRecognizers;
- (void)setAllowMenu:(char)arg0;
- (void)disableRecognizers;
- (void)setFirstTouch;
- (void)hideMenu;
- (char)allowMenu;
- (void)doubleTapRecognized:(id)arg0;
- (void)singleTapRecognized:(id)arg0;
- (void)twoFingerTapRecognized:(id)arg0;
- (void)briefPressRecognized:(id)arg0;
- (void)longPressRecognized:(id)arg0;
- (char)delegateGesture:(NSObject *)arg0 kind:(int)arg1;

@end
