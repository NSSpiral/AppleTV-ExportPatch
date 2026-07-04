/* Runtime dump - UIPrinterPickerController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterPickerController : NSObject
{
    id _completionHandler;
    id _state;
    UIPrinter * _selectedPrinter;
    <UIPrinterPickerControllerDelegate> * _delegate;
}

@property (retain, nonatomic) UIPrinter * selectedPrinter;
@property (nonatomic) <UIPrinterPickerControllerDelegate> * delegate;

+ (UIPrinterPickerController *)printerPickerControllerWithInitiallySelectedPrinter:(id)arg0;

- (void)release;
- (void)dealloc;
- (void)setDelegate:(<UIPrinterPickerControllerDelegate> *)arg0;
- (UIPrinterPickerController *)init;
- (<UIPrinterPickerControllerDelegate> *)delegate;
- (UIPrinterPickerController *)_init;
- (void)_printerPickerDidPresent;
- (void)_printerPickerWillDismiss;
- (void)_printerPickerDidDismiss;
- (void)dismissAnimated:(char)arg0;
- (char)_delegateFiltersPrinters;
- (char)_shouldShowPrinter:(id)arg0;
- (void)setSelectedPrinter:(UIPrinter *)arg0;
- (char)presentFromRect:(struct CGRect)arg0 inView:(struct CGSize)arg1 animated:(char)arg2 completionHandler:(id /* block */)arg3;
- (char)_setupPickerPanel:(id)arg0;
- (char)presentAnimated:(char)arg0 completionHandler:(id /* block */)arg1;
- (UIPrinter *)selectedPrinter;
- (char)presentFromBarButtonItem:(NSObject *)arg0 animated:(char)arg1 completionHandler:(id /* block */)arg2;

@end
