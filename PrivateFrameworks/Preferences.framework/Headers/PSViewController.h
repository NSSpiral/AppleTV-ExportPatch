/* Runtime dump - PSViewController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSViewController : UIViewController <PSController>
{
    UIViewController<PSController> * _parentController;
    PSRootController * _rootController;
    PSSpecifier * _specifier;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)didWake;
- (PSSpecifier *)specifier;
- (void)setSpecifier:(PSSpecifier *)arg0;
- (void)dealloc;
- (void)suspend;
- (PSRootController *)rootController;
- (void)formSheetViewWillDisappear;
- (void)popupViewWillDisappear;
- (void)setRootController:(PSRootController *)arg0;
- (void)setParentController:(UIViewController<PSController> *)arg0;
- (void)showController:(BRController *)arg0;
- (void)showController:(BRController *)arg0 animate:(char)arg1;
- (void)handleURL:(NSURL *)arg0;
- (char)canBeShownFromSuspendedState;
- (void)setPreferenceValue:(id)arg0 specifier:(PSSpecifier *)arg1;
- (id)readPreferenceValue:(id)arg0;
- (UIViewController<PSController> *)parentController;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)statusBarWillAnimateByHeight:(float)arg0;
- (void)pushController:(BRController *)arg0;
- (void)pushController:(BRController *)arg0 animate:(char)arg1;
- (void)popupViewDidDisappear;
- (void)formSheetViewDidDisappear;

@end
