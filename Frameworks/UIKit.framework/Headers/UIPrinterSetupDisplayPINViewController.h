/* Runtime dump - UIPrinterSetupDisplayPINViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupDisplayPINViewController : UIViewController
{
    PKPrinter * _printer;
}

@property (retain, nonatomic) PKPrinter * printer;

- (void)dealloc;
- (unsigned int)supportedInterfaceOrientations;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewDidAppear:(char)arg0;
- (PKPrinter *)printer;
- (void)setPrinter:(PKPrinter *)arg0;
- (UIPrinterSetupDisplayPINViewController *)initWithPrinter:(PKPrinter *)arg0;
- (void)enterPIN;
- (void)showDisplayMessage:(int)arg0;

@end
