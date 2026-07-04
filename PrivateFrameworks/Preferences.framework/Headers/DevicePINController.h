/* Runtime dump - DevicePINController
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface DevicePINController : PSDetailController
{
    int _mode;
    int _substate;
    NSString * _oldPassword;
    NSString * _lastEntry;
    char _success;
    id _pinDelegate;
    UIBarButtonItem * _cancelButton;
    UIBarButtonItem * _nextButton;
    UIBarButtonItem * _doneButton;
    NSString * _error1;
    NSString * _error2;
    char _hasBeenDismissed;
    char _hidesNavigationButtons;
}

@property (nonatomic) <DevicePINControllerDelegate> * pinDelegate;
@property (nonatomic) char hidesNavigationButtons;

+ (char)settingEnabled;

- (char)success;
- (void)setSpecifier:(PSSpecifier *)arg0;
- (void)dealloc;
- (DevicePINController *)init;
- (NSString *)title;
- (void)suspend;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)setMode:(int)arg0;
- (int)mode;
- (void)_dismiss;
- (void)setSuccess:(char)arg0;
- (char)isBlocked;
- (void)setPane:(PSEditingPane *)arg0;
- (void)setLastEntry:(NSString *)arg0;
- (void)willUnlock;
- (char)requiresKeyboard;
- (char)useProgressiveDelays;
- (struct __CFString *)defaultsID;
- (void)_updateUI;
- (struct CGSize)overallContentSizeForViewInPopover;
- (char)validatePIN:(id)arg0;
- (char)isNumericPIN;
- (int)_getScreenType;
- (struct __CFString *)failedAttemptsKey;
- (struct __CFString *)blockTimeIntervalKey;
- (struct __CFString *)blockedStateKey;
- (double)unblockTime;
- (void)_clearBlockedState;
- (long)numberOfFailedAttempts;
- (void)_setNumberOfFailedAttempts:(long)arg0;
- (void)_setUnblockTime:(double)arg0;
- (NSBundle *)stringsBundle;
- (id)stringsTable;
- (void)_showFailedAttempts;
- (void)_updateErrorTextAndFailureCount:(char)arg0;
- (void)cancelButtonTapped;
- (char)simplePIN;
- (char)showSimplePINCancelButtonOnLeft;
- (void)adjustButtonsForPasswordLength:(unsigned int)arg0;
- (void)_updatePINButtons;
- (char)pinIsAcceptable:(id)arg0 outError:(id *)arg1;
- (void)_slidePasscodeField;
- (void)_showUnacceptablePINError:(NSError *)arg0 password:(NSString *)arg1;
- (char)completedInputIsValid:(id)arg0;
- (void)performActionAfterPINSet;
- (<DevicePINControllerDelegate> *)pinDelegate;
- (char)_asyncSetPinCompatible;
- (void)setPIN:(NSSet *)arg0 completion:(id /* block */)arg1;
- (void)setPIN:(NSSet *)arg0;
- (void)_showPINConfirmationError;
- (char)attemptValidationWithPIN:(id)arg0;
- (void)setOldPassword:(NSString *)arg0;
- (void)performActionAfterPINRemove;
- (void)performActionAfterPINEntry;
- (int)pinLength;
- (void)pinEntered:(id)arg0;
- (NSString *)pinInstructionsPrompt;
- (UIFont *)pinInstructionsPromptFont;
- (void)setPinDelegate:(<DevicePINControllerDelegate> *)arg0;
- (char)hidesNavigationButtons;
- (void)setHidesNavigationButtons:(char)arg0;

@end
