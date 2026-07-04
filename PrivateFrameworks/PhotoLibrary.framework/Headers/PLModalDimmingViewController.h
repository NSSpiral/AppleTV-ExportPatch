/* Runtime dump - PLModalDimmingViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLModalDimmingViewController : UIViewController
{
    UIImageView * _vignetteView;
    UIViewController<PLModalDimmingContained> * _contentViewController;
    UIView * _wrapperView;
}

@property (retain, nonatomic) UIViewController<PLModalDimmingContained> * contentViewController;

- (void)dealloc;
- (void)viewWillLayoutSubviews;
- (PLModalDimmingViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (UIViewController<PLModalDimmingContained> *)contentViewController;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidLoad;
- (void)viewDidAppear:(char)arg0;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (PLModalDimmingViewController *)initWithContentViewController:(UIViewController<PLModalDimmingContained> *)arg0;
- (void)setContentViewController:(UIViewController<PLModalDimmingContained> *)arg0;
- (void)_updateWrapperView:(NSObject *)arg0 toOrientation:(int)arg1 forViewController:(BRController *)arg2;
- (void)_updateVignetteToOrientation:(int)arg0;
- (void)presentWithCustomAnimation;
- (void)presentModalOnViewController:(BRController *)arg0 animated:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)dismissWithCustomAnimation:(int)arg0 completionHandler:(id /* block */)arg1;

@end
