/* Runtime dump - LTDeviceActivationController
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRController.h>

@protocol ATVDeviceActivationDelegate;

@class ATVDeviceActivationAction, BRAlertControl, BRTextControl, BRWaitPromptControl;
@interface LTDeviceActivationController : BRController <ATVDeviceActivationDelegate>
{
    BRWaitPromptControl * _prompt;
    BRTextControl * _subtext;
    BRAlertControl * _error;
    char _userSkippedActivation;
    ATVDeviceActivationAction * _action;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)_timeChangeNotification:(NSNotification *)arg0;
- (void)layoutSubcontrols;
- (void)wasPushed;
- (void)wasPopped;
- (void)activationSucceeded:(ATVDeviceActivationAction *)arg0;
- (void)activationFailedForAction:(ATVDeviceActivationAction *)arg0 withReason:(int)arg1 error:(BRAlertControl *)arg2;
- (void)_adjustSubtext;
- (LTDeviceActivationController *)init;
- (void).cxx_destruct;
- (void)_networkChanged:(NSNotification *)arg0;

@end
