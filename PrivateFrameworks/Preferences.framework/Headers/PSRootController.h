/* Runtime dump - PSRootController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSRootController : UINavigationController <PSController, UINavigationControllerDelegate>
{
    PSSpecifier * _specifier;
    NSMutableSet * _tasks;
    char _deallocating;
    PSStackPushAnimationController * _stackAnimationController;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)setPreferenceValue:(id)arg0 specifier:(PSSpecifier *)arg1;
+ (PSRootController *)readPreferenceValue:(id)arg0;
+ (void)writePreference:(NSObject *)arg0;
+ (char)processedBundle:(NSObject *)arg0 parentController:(BRController *)arg1 parentSpecifier:(id)arg2 bundleControllers:(id *)arg3 settings:(NSDictionary *)arg4;

- (void)didWake;
- (PSSpecifier *)specifier;
- (void)setSpecifier:(PSSpecifier *)arg0;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (id)popViewControllerAnimated:(char)arg0;
- (unsigned int)supportedInterfaceOrientations;
- (void)suspend;
- (void)showLeftButton:(id)arg0 withStyle:(int)arg1 rightButton:(id)arg2 withStyle:(int)arg3;
- (void)viewDidDisappear:(char)arg0;
- (void)navigationController:(UINavigationController *)arg0 willShowViewController:(BRController *)arg1 animated:(char)arg2;
- (NSObject *)navigationController:(UINavigationController *)arg0 animationControllerForOperation:(int)arg1 fromViewController:(BRController *)arg2 toViewController:(BRController *)arg3;
- (void)setViewControllers:(NSArray *)arg0 animated:(char)arg1;
- (void)_setNavigationBarHidden:(char)arg0 edge:(unsigned int)arg1 duration:(double)arg2;
- (NSObject *)popToViewController:(BRController *)arg0 animated:(char)arg1;
- (id)popToRootViewControllerAnimated:(char)arg0;
- (void)addTask:(NSObject *)arg0;
- (NSArray *)specifiers;
- (PSRootController *)rootController;
- (NSString *)aggregateDictionaryPath;
- (void)setRootController:(PSRootController *)arg0;
- (void)setParentController:(BRController *)arg0;
- (void)showController:(BRController *)arg0;
- (void)showController:(BRController *)arg0 animate:(char)arg1;
- (void)handleURL:(NSURL *)arg0;
- (char)canBeShownFromSuspendedState;
- (void)pushControllersAsStack:(id)arg0;
- (void)setPreferenceValue:(id)arg0 specifier:(PSSpecifier *)arg1;
- (id)readPreferenceValue:(id)arg0;
- (BRController *)parentController;
- (void)didLock;
- (void)willUnlock;
- (void)didUnlock;
- (void)willResignActive;
- (void)willBecomeActive;
- (void)statusBarWillAnimateByHeight:(float)arg0;
- (void)pushController:(BRController *)arg0;
- (void)pushController:(BRController *)arg0 animate:(char)arg1;
- (void)sendWillBecomeActive;
- (void)sendWillResignActive;
- (void)statusBarWillChangeHeight:(id)arg0;
- (char)busy;
- (void)_delayedControllerReleaseAfterPop:(id)arg0;
- (PSRootController *)initWithTitle:(NSString *)arg0 identifier:(NSString *)arg1;
- (NSString *)tasksDescription;
- (char)taskIsRunning:(id)arg0;
- (void)taskFinished:(id)arg0;
- (NSObject *)contentViewForTopController;
- (char)deallocating;
- (void)willDismissPopupView;
- (void)didDismissPopupView;
- (void)willDismissFormSheetView;
- (void)didDismissFormSheetView;

@end
