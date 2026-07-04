/* Runtime dump - UIPrintStatusViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintStatusViewController : UINavigationController
{
    UIPopoverController * _poverController;
    <UIPrintStatusDelegate> * _printStatusDelegate;
}

@property (nonatomic) <UIPrintStatusDelegate> * printStatusDelegate;

- (void)dealloc;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)dismissAnimated:(char)arg0;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (NSObject *)printStatusView;
- (void)presentPrintStatusFromRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 animated:(char)arg2;
- (void)jobDidCancel;
- (<UIPrintStatusDelegate> *)printStatusDelegate;
- (void)setPrintStatusDelegate:(<UIPrintStatusDelegate> *)arg0;

@end
