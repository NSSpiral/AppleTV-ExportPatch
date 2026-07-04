/* Runtime dump - WKActionSheet
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKActionSheet : UIAlertController
{
    <WKActionSheetDelegate> * _sheetDelegate;
    unsigned int _arrowDirections;
    char _isRotating;
    char _readyToPresentAfterRotation;
    struct RetainPtr<UIViewController> _presentedViewControllerWhileRotating;
    struct RetainPtr<id<UIPopoverPresentationControllerDelegate> > _popoverPresentationControllerDelegateWhileRotating;
}

@property (nonatomic) <WKActionSheetDelegate> * sheetDelegate;
@property (nonatomic) unsigned int arrowDirections;

- (void)dealloc;
- (WKActionSheet *)init;
- (void)willRotate;
- (void)didRotate;
- (void)doneWithSheet;
- (char)presentSheet;
- (void)setArrowDirections:(unsigned int)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)presentSheetFromRect:(struct CGRect)arg0;
- (void)_didRotateAndLayout;
- (unsigned int)arrowDirections;
- (void)updateSheetPosition;
- (<WKActionSheetDelegate> *)sheetDelegate;
- (void)setSheetDelegate:(<WKActionSheetDelegate> *)arg0;

@end
