/* Runtime dump - PSSetupController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSSetupController : PSRootController
{
    NSDictionary * _rootInfo;
    UIViewController<PSController> * _parentController;
    PSRootController * _parentRootController;
}

- (void)dealloc;
- (PSSetupController *)init;
- (void)viewWillDisappear:(char)arg0;
- (void)viewDidDisappear:(char)arg0;
- (void)dismiss;
- (void)dismissAnimated:(char)arg0;
- (QLPreviewViewController *)controller;
- (void)setParentController:(UIViewController<PSController> *)arg0;
- (void)setupController;
- (char)usePopupStyle;
- (char)popupStyleIsModal;
- (void)showController:(BRController *)arg0 animate:(char)arg1;
- (void)handleURL:(NSURL *)arg0;
- (UIViewController<PSController> *)parentController;
- (void)statusBarWillChangeHeight:(id)arg0;
- (void)dismissAnimated:(char)arg0 completion:(id /* block */)arg1;
- (void)dismissWithCompletion:(id /* block */)arg0;
- (void)pushControllerOnParentWithSpecifier:(id)arg0;
- (void)popControllerOnParent;

@end
