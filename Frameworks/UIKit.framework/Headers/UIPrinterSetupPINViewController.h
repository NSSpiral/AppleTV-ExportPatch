/* Runtime dump - UIPrinterSetupPINViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrinterSetupPINViewController : UIViewController
{
    PKPrinter * _printer;
    UIPrinterSetupConnectingView * _connectingView;
    UIPrinterSetupPINView * _PINView;
    UIScrollView * _scrollView;
}

@property (retain, nonatomic) PKPrinter * printer;
@property (retain, nonatomic) UIPrinterSetupConnectingView * connectingView;
@property (retain, nonatomic) UIPrinterSetupPINView * PINView;
@property (retain, nonatomic) UIScrollView * scrollView;

- (void)dealloc;
- (unsigned int)supportedInterfaceOrientations;
- (void)setScrollView:(UIScrollView *)arg0;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (UIScrollView *)scrollView;
- (PKPrinter *)printer;
- (void)setPrinter:(PKPrinter *)arg0;
- (UIPrinterSetupPINViewController *)initWithPrinter:(PKPrinter *)arg0;
- (void)setConnectingView:(UIPrinterSetupConnectingView *)arg0;
- (void)setPINView:(NSObject *)arg0;
- (void)connectToPrinter;
- (void)showSetup;
- (void)showFailure;
- (void)connected:(char)arg0;
- (UIPrinterSetupConnectingView *)connectingView;
- (UIPrinterSetupPINView *)PINView;

@end
