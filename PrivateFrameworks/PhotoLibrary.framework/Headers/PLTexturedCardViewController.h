/* Runtime dump - PLTexturedCardViewController
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTexturedCardViewController : UIViewController <PLModalDimmingContained>
{
    UIImageView * _decorationView;
    UIImageView * _innerShadowView;
    UIView * _wrapperView;
    UINavigationBar * _navigationBar;
    UINavigationController * _navigationController;
}

- (void)dealloc;
- (void)popViewControllerAnimated:(char)arg0;
- (void)viewWillLayoutSubviews;
- (PLTexturedCardViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (char)shouldAutorotateToInterfaceOrientation:(int)arg0;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)pushViewController:(BRController *)arg0 animated:(char)arg1;
- (struct CGPoint)preferredOffsetInParentViewController;
- (struct CGSize)preferredSizeInParentViewController;
- (void)_updateNavigationBarToOrientation:(int)arg0;
- (void)_updateWrapperViewToOrientation:(int)arg0;

@end
