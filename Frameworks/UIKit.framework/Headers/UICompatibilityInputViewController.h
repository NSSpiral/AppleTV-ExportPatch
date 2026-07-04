/* Runtime dump - UICompatibilityInputViewController
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UICompatibilityInputViewController : UIInputViewController
{
    UIKeyboardInputMode * _inputMode;
    UIKeyboard * _deferredSystemView;
    UIKeyboardInputMode * _incomingExtensionInputMode;
    char _shouldRegenerateSizingConstraints;
    char _shouldSuppressRemoteInputController;
    UIViewController * _inputController;
    UIView * _inputControllerSnapshot;
}

@property (retain, nonatomic) UIViewController * inputController;
@property (retain, nonatomic) UIView * inputControllerSnapshot;

+ (char)_shouldForwardViewWillTransitionToSize;
+ (UICompatibilityInputViewController *)deferredInputModeControllerWithKeyboard:(id)arg0;
+ (NSObject *)inputViewControllerWithView:(NSObject *)arg0;
+ (char)_requiresProxyInterface;

- (void)dealloc;
- (UIViewController *)inputController;
- (void)setInputController:(UIViewController *)arg0;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)didMoveToParentViewController:(BRController *)arg0;
- (void)viewWillAppear:(char)arg0;
- (char)shouldAutomaticallyForwardRotationMethods;
- (char)shouldAutomaticallyForwardAppearanceMethods;
- (void)willRotateToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg0 duration:(double)arg1;
- (void)didRotateFromInterfaceOrientation:(int)arg0;
- (void)setInputMode:(UIKeyboardInputMode *)arg0;
- (UIKeyboard *)_keyboard;
- (NSObject *)_compatibilityController;
- (void)willResume:(SATimerResume *)arg0;
- (void)didSuspend:(id)arg0;
- (void)rebuildChildConstraints;
- (void)generateCompatibleSizeConstraintsIfNecessary;
- (UICompatibilityInputViewController *)_initAsDeferredController;
- (void)shouldUpdateInputMode:(id)arg0;
- (void)tearDownInputController;
- (void)removeSnapshotView;
- (NSObject *)_compatView;
- (UIView *)inputControllerSnapshot;
- (void)setInputControllerSnapshot:(UIView *)arg0;
- (void)snapshotCurrentDisplay;
- (NSObject *)childCompatibilityController;
- (void)willBeginTranslation;
- (void)finishSplitTransition:(char)arg0;
- (void)didFinishTranslation;

@end
