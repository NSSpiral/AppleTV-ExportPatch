/* Runtime dump - UIMoreNavigationController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIMoreNavigationController : UINavigationController
{
    UIMoreListController * _moreListController;
    UINavigationController * _originalNavigationController;
    UIViewController * _originalRootViewController;
}

@property (readonly, retain, nonatomic) UIViewController * moreListController;
@property (retain, nonatomic) NSArray * moreViewControllers;
@property (nonatomic) char allowsCustomizing;
@property (nonatomic) UIViewController * displayedViewController;
@property (nonatomic) char moreViewControllersChanged;

+ (Class)_moreListControllerClass;

- (void)dealloc;
- (UIMoreNavigationController *)init;
- (void)_willChangeToIdiom:(int)arg0 onScreen:(NSObject *)arg1;
- (void)pushViewController:(BRController *)arg0 animated:(char)arg1;
- (void)didShowViewController:(BRController *)arg0 animated:(char)arg1;
- (UIViewController *)moreListController;
- (void)setMoreViewControllers:(NSArray *)arg0;
- (void)_restoreOriginalNavigationController;
- (void)restoreOriginalNavigationController:(BRController *)arg0;
- (UIViewController *)displayedViewController;
- (NSArray *)moreViewControllers;
- (void)setDisplayedViewController:(UIViewController *)arg0;
- (void)setAllowsCustomizing:(char)arg0;
- (void)setMoreViewControllersChanged:(char)arg0;
- (void)_redisplayMoreTableView;
- (NSObject *)_preparedViewController:(BRController *)arg0;
- (void)_ensureChildrenHaveParentViewController;
- (char)allowsCustomizing;
- (char)moreViewControllersChanged;
- (NSObject *)_stateRestorationParentForChildViewController:(BRController *)arg0 index:(unsigned int *)arg1;

@end
