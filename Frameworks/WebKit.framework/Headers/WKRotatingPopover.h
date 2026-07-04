/* Runtime dump - WKRotatingPopover
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKRotatingPopover : NSObject <UIPopoverControllerDelegate>
{
    WKContentView * _view;
    char _isRotating;
    struct CGPoint _presentationPoint;
    struct RetainPtr<UIPopoverController> _popoverController;
    <WKRotatingPopoverDelegate> * _dismissionDelegate;
}

@property (nonatomic) struct CGPoint presentationPoint;
@property (retain, nonatomic) UIPopoverController * popoverController;
@property (nonatomic) <WKRotatingPopoverDelegate> * dismissionDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)dismissPopoverAnimated:(char)arg0;
- (WKRotatingPopover *)initWithView:(WKContentView *)arg0;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (void).cxx_construct;
- (void)setPopoverController:(UIPopoverController *)arg0;
- (void)presentPopoverAnimated:(char)arg0;
- (void)willRotate:(SKRotate *)arg0;
- (void)didRotate:(SKRotate *)arg0;
- (void).cxx_destruct;
- (UIPopoverController *)popoverController;
- (void)setPresentationPoint:(struct CGPoint)arg0;
- (unsigned int)popoverArrowDirections;
- (struct CGPoint)presentationPoint;
- (void)setDismissionDelegate:(<WKRotatingPopoverDelegate> *)arg0;
- (<WKRotatingPopoverDelegate> *)dismissionDelegate;

@end
