/* Runtime dump - SBAlertItem
 * Image: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

@interface SBAlertItem : NSObject <UIAlertViewDelegate>
{
    UIAlertView * _alertSheet;
    char _orderOverSBAlert;
    char _preventLockOver;
    char _didEverActivate;
    char _ignoreIfAlreadyDisplaying;
    char _didPlayPresentationSound;
    char _allowInSetup;
    char _pendInSetupIfNotAllowed;
    char _pendWhileKeyBagLocked;
    NSArray * _allowedBundleIDs;
    char _allowInCar;
    char _allowMessageInCar;
}

@property (nonatomic) char ignoreIfAlreadyDisplaying;
@property (nonatomic) char allowInSetup;
@property (nonatomic) char pendInSetupIfNotAllowed;
@property (nonatomic) char pendWhileKeyBagLocked;
@property (retain, nonatomic) NSArray * allowedBundleIDs;
@property (nonatomic) char allowInCar;
@property (nonatomic) char allowMessageInCar;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)_alertItemsController;
+ (void)activateAlertItem:(NSObject *)arg0;

- (void)dismiss:(int)arg0;
- (void)dealloc;
- (SBAlertItem *)init;
- (void)alertView:(UIAlertView *)arg0 clickedButtonAtIndex:(int)arg1;
- (void)dismiss;
- (UIAlertController *)alertController;
- (NSURL *)sound;
- (Class)alertSheetClass;
- (UIAlertView *)alertSheet;
- (void)setAllowInSetup:(char)arg0;
- (void)setPendInSetupIfNotAllowed:(char)arg0;
- (void)setAllowMessageInCar:(char)arg0;
- (char)didPlayPresentationSound;
- (void)_playPresentationSound;
- (char)hasActiveKeyboardOnScreen;
- (void)buttonDismissed;
- (void)cleanPreviousConfiguration;
- (void)configure:(char)arg0 requirePasscodeForActions:(char)arg1;
- (char)allowMenuButtonDismissal;
- (char)allowLockScreenDismissal;
- (char)allowAutoUnlock;
- (char)shouldShowInLockScreen;
- (char)shouldShowInEmergencyCall;
- (char)undimsScreen;
- (char)unlocksScreen;
- (int)unlockSource;
- (char)togglesMediaControls;
- (char)dismissOnModalDisplayActivation;
- (char)isCriticalAlert;
- (void)playPresentationSound;
- (NSString *)lockLabel;
- (NSString *)shortLockLabel;
- (double)autoDismissInterval;
- (void)performUnlockAction;
- (void)setOrderOverSBAlert:(char)arg0;
- (char)preventLockOver;
- (void)setPreventLockOver:(char)arg0;
- (char)_didEverActivate;
- (void)willActivate;
- (void)didActivate;
- (void)willRelockForButtonPress:(char)arg0;
- (void)screenWillUndim;
- (void)didFailToActivate;
- (void)willDeactivateForReason:(int)arg0;
- (void)didDeactivateForReason:(int)arg0;
- (void)noteVolumeOrLockPressed;
- (int)alertItemNotificationType;
- (NSDate *)alertItemNotificationDate;
- (NSObject *)alertItemNotificationSender;
- (char)forcesModalAlertAppearance;
- (char)behavesSuperModally;
- (char)reappearsAfterLock;
- (char)reappearsAfterUnlock;
- (char)preventInterruption;
- (int)alertPriority;
- (char)displayActionButtonOnLockScreen;
- (NSObject *)prepareNewAlertSheetWithLockedState:(char)arg0 requirePasscodeForActions:(char)arg1;
- (char)dismissesAutomatically;
- (char)_dismissesOverlaysOnLockScreen;
- (char)ignoreIfAlreadyDisplaying;
- (void)setIgnoreIfAlreadyDisplaying:(char)arg0;
- (char)allowInSetup;
- (char)pendInSetupIfNotAllowed;
- (char)pendWhileKeyBagLocked;
- (void)setPendWhileKeyBagLocked:(char)arg0;
- (NSArray *)allowedBundleIDs;
- (void)setAllowedBundleIDs:(NSArray *)arg0;
- (char)allowInCar;
- (void)setAllowInCar:(char)arg0;
- (char)allowMessageInCar;
- (char)dismissOnLock;

@end
