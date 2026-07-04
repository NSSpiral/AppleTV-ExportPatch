/* Runtime dump - UIPrintActivityWrapperNavigationController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPrintActivityWrapperNavigationController : UINavigationController
{
    id _completionHandler;
    char _presentedPrintInteractionController;
}

@property (nonatomic) char presentedPrintInteractionController;

- (void)dealloc;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (char)presentedPrintInteractionController;
- (void)setPresentedPrintInteractionController:(char)arg0;
- (UIPrintActivityWrapperNavigationController *)initWithCompletion:(id /* block */)arg0;

@end
