/* Runtime dump - UIPrintingProgressViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintingProgressViewController : UITableViewController
{
    UIPrintingProgress * _printingProgress;
    UIPrintingMessageView * _messageView;
    UINavigationController * _navController;
    UIWindow * _window;
    double _rotationDelay;
}

- (void)show;
- (void)dealloc;
- (unsigned int)supportedInterfaceOrientations;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (void)setMessage:(NSString *)arg0;
- (char)visible;
- (void)dismissAnimated:(char)arg0;
- (void)setDonePrinting:(char)arg0;
- (void)doneProgress;
- (void)cancelProgress;
- (void)cleanupAfterDismiss;
- (UIPrintingProgressViewController *)initWithTitle:(NSString *)arg0 message:(NSString *)arg1 printingProgress:(UIPrintingProgress *)arg2;
- (double)rotationDelay;

@end
