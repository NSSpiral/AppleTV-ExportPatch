/* Runtime dump - PSSplitViewController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSplitViewController : UISplitViewController
{
    PSRootController * _containerNavigationController;
    <PSSplitViewControllerNavigationDelegate> * _navigationDelegate;
}

@property (retain, nonatomic) PSRootController * containerNavigationController;
@property (nonatomic) <PSSplitViewControllerNavigationDelegate> * navigationDelegate;

- (void)dealloc;
- (unsigned int)supportedInterfaceOrientations;
- (NSObject *)childViewControllerForStatusBarStyle;
- (<PSSplitViewControllerNavigationDelegate> *)navigationDelegate;
- (void)setNavigationDelegate:(<PSSplitViewControllerNavigationDelegate> *)arg0;
- (void)popRecursivelyToRootController;
- (PSRootController *)containerNavigationController;
- (void)setupControllerForToolbar:(id)arg0;
- (void)showInitialViewController:(BRController *)arg0;
- (void)setContainerNavigationController:(PSRootController *)arg0;

@end
