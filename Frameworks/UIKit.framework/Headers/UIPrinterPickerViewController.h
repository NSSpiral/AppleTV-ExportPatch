/* Runtime dump - UIPrinterPickerViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterPickerViewController : UIViewController <UIPrinterBrowserOwner, UINavigationControllerDelegate>
{
    UIPrinterPickerController * _printerPickerController;
    UINavigationController * _navigationController;
    UIPrinterBrowserViewController * _printerBrowserViewController;
    UIViewController * _parentController;
    UIViewController * _originalViewControllerInNav;
    UIPopoverController * _poverController;
    UIWindow * _window;
    char _dismissed;
    char _animated;
    char _observingRotation;
    char _parentHasNoPopover;
    char _userSelectedPrinter;
    PKPrinter * _printer;
}

@property (retain, nonatomic) PKPrinter * printer;
@property char userSelectedPrinter;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (unsigned int)supportedInterfaceOrientations;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)navigationController:(UINavigationController *)arg0 willShowViewController:(BRController *)arg1 animated:(char)arg2;
- (void)navigationController:(UINavigationController *)arg0 didShowViewController:(BRController *)arg1 animated:(char)arg2;
- (void)printerBrowserViewDidDisappear;
- (void)_presentWindow;
- (void)_keyWindowWillRotate:(id)arg0;
- (void)_presentInParentAnimated:(char)arg0;
- (void)dismissAnimated:(char)arg0;
- (void)dismissPrinterPickerAnimated:(char)arg0;
- (char)filtersPrinters;
- (void)cancelPrinting;
- (void)setUserSelectedPrinter:(char)arg0;
- (char)shouldShowPrinter:(id)arg0;
- (PKPrinter *)printer;
- (void)setPrinter:(PKPrinter *)arg0;
- (UIPrinterPickerViewController *)initWithPrinterPickerController:(UIPrinterPickerController *)arg0 inParentController:(BRController *)arg1;
- (void)presentPrinterPickerPanelAnimated:(char)arg0;
- (void)presentPrinterPickerPanelFromRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 animated:(char)arg2;
- (void)presentPrinterPickerPanelFromBarButtonItem:(NSObject *)arg0 animated:(char)arg1;
- (void)popoverControllerDidDismissPopover:(UIPopoverController *)arg0;
- (char)userSelectedPrinter;

@end
