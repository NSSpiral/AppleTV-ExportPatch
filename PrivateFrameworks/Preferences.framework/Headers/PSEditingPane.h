/* Runtime dump - PSEditingPane
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSEditingPane : UIView
{
    PSSpecifier * _specifier;
    id _delegate;
    id _requiresKeyboard;
    UIViewController * _viewController;
}

@property (nonatomic) UIViewController * viewController;

+ (float)preferredHeight;
+ (PSEditingPane *)defaultBackgroundColor;

- (PSEditingPane *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (void)setViewController:(UIViewController *)arg0;
- (UIViewController *)viewController;
- (void)willRotateToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (struct CGRect)contentRect;
- (char)changed;
- (NSObject *)childViewControllerForHostingViewController;
- (char)shouldInsetContent;
- (void)insetContent;
- (char)requiresKeyboard;
- (void)layoutInsetContent:(struct CGRect)arg0;
- (void)setPreferenceSpecifier:(id)arg0;
- (void)setPreferenceValue:(id)arg0;
- (void)viewDidBecomeVisible;
- (id)preferenceSpecifier;
- (id)preferenceValue;
- (char)handlesDoneButton;
- (id)scrollViewToBeInsetted;
- (NSString *)specifierLabel;
- (char)wantsNewButton;
- (void)addNewValue;
- (void)editMode;
- (void)doneEditing;

@end
