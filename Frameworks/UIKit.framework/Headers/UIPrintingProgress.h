/* Runtime dump - UIPrintingProgress
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintingProgress : NSObject
{
    NSString * _printerName;
    id _cancelHandler;
    double _startTime;
    double _displayTime;
    UIAlertView * _alert;
    UIPrintingProgressViewController * _viewController;
    char _donePrinting;
    char _forceDisplayAsAlert;
}

- (void)dealloc;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)alertViewCancel:(UIAlertView *)arg0;
- (void)didPresentAlertView:(NSObject *)arg0;
- (UIPrintingProgress *)initWithPrinterName:(NSString *)arg0 forceDisplayAsAlert:(char)arg1 cancelHandler:(id /* block */)arg2;
- (void)setPrintInfoState:(int)arg0;
- (void)setPage:(int)arg0 ofPage:(int)arg1;
- (double)nextPrintDelay;
- (void)endProgress;
- (void)hideProgressAnimated:(char)arg0;
- (char)progressVisible;
- (void)progressCancel;
- (void)showProgress:(id)arg0 immediately:(char)arg1;

@end
