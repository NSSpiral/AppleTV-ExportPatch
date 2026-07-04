/* Runtime dump - UIWebRotatingNodePopover
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIWebRotatingNodePopover : NSObject <UIPopoverControllerDelegate>
{
    char _isRotating;
    DOMNode * _node;
    struct CGPoint _presentationPoint;
    UIPopoverController * _popoverController;
    <UIWebRotatingNodePopoverDelegate> * _dismissDelegate;
}

@property (retain, nonatomic) DOMNode * node;
@property (nonatomic) struct CGPoint presentationPoint;
@property (retain, nonatomic) UIPopoverController * popoverController;
@property (nonatomic) <UIWebRotatingNodePopoverDelegate> * dismissDelegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)dismissPopoverAnimated:(char)arg0;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (DOMNode *)node;
- (UIWebRotatingNodePopover *)initWithDOMNode:(NSObject *)arg0;
- (void)setPopoverController:(UIPopoverController *)arg0;
- (void)presentPopoverAnimated:(char)arg0;
- (void)willRotate:(SKRotate *)arg0;
- (void)didRotate:(SKRotate *)arg0;
- (UIPopoverController *)popoverController;
- (void)setNode:(DOMNode *)arg0;
- (void)setPresentationPoint:(struct CGPoint)arg0;
- (unsigned int)popoverArrowDirections;
- (struct CGPoint)presentationPoint;
- (<UIWebRotatingNodePopoverDelegate> *)dismissDelegate;
- (void)setDismissDelegate:(<UIWebRotatingNodePopoverDelegate> *)arg0;

@end
