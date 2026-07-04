/* Runtime dump - TPSetPINViewController
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPSetPINViewController : UIViewController <TPSimpleNumberPadDelegate>
{
    char _confirmPIN;
    <TPSetPINViewControllerDelegate> * _delegate;
    NSString * _promptTextForOldPIN;
    NSString * _promptTextForNewPIN;
    NSString * _promptTextForConfirmingNewPIN;
    NSString * _promptTextForSavingPIN;
    UIView * _customBackgroundView;
    int _initialState;
    int _state;
    unsigned int _minPINLength;
    unsigned int _maxPINLength;
    UILabel * _statusLabel;
    TPPasscodeView * _passcodeView;
    TPSimpleNumberPad * _numberPad;
    NSString * _oldPIN;
    NSString * _unconfirmedPIN;
}

@property <TPSetPINViewControllerDelegate> * delegate;
@property (retain, nonatomic) NSString * promptTextForOldPIN;
@property (retain, nonatomic) NSString * promptTextForNewPIN;
@property (retain, nonatomic) NSString * promptTextForConfirmingNewPIN;
@property (retain, nonatomic) NSString * promptTextForSavingPIN;
@property (retain) UIView * customBackgroundView;
@property int initialState;
@property (nonatomic) int state;
@property unsigned int minPINLength;
@property unsigned int maxPINLength;
@property char confirmPIN;
@property (retain) UILabel * statusLabel;
@property (retain) TPPasscodeView * passcodeView;
@property (retain) TPSimpleNumberPad * numberPad;
@property (retain) NSString * oldPIN;
@property (retain) NSString * unconfirmedPIN;

- (void)dealloc;
- (void)setDelegate:(<TPSetPINViewControllerDelegate> *)arg0;
- (TPSetPINViewController *)init;
- (<TPSetPINViewControllerDelegate> *)delegate;
- (int)state;
- (void)setState:(int)arg0;
- (char)wantsFullScreenLayout;
- (void)loadView;
- (int)initialState;
- (void)setInitialState:(int)arg0;
- (void)_doneButtonTapped;
- (void)_cancelButtonTapped;
- (void)setMinPINLength:(unsigned int)arg0;
- (void)setMaxPINLength:(unsigned int)arg0;
- (void)setConfirmPIN:(char)arg0;
- (TPSetPINViewController *)_initForMinLength:(unsigned int)arg0 maxLength:(unsigned int)arg1 confirmPIN:(char)arg2;
- (void)setNumberPad:(TPSimpleNumberPad *)arg0;
- (UIView *)customBackgroundView;
- (void)setStatusLabel:(UILabel *)arg0;
- (void)setPasscodeView:(TPPasscodeView *)arg0;
- (void)_updateUIForStateChange;
- (void)resetWithErrorPrompt:(NSString *)arg0 title:(NSString *)arg1;
- (void)_setPromptText:(NSString *)arg0 oldPromptTextPointer:(id *)arg1;
- (TPPasscodeView *)passcodeView;
- (void)setOldPIN:(NSString *)arg0;
- (char)confirmPIN;
- (void)setUnconfirmedPIN:(NSString *)arg0;
- (NSString *)oldPIN;
- (NSString *)unconfirmedPIN;
- (unsigned int)maxPINLength;
- (void)_updateDeleteAllowed;
- (void)_updateNavBarButtons;
- (TPSimpleNumberPad *)numberPad;
- (void)_updateStatusLabel;
- (unsigned int)minPINLength;
- (NSString *)promptTextForOldPIN;
- (UILabel *)statusLabel;
- (NSString *)promptTextForNewPIN;
- (NSString *)promptTextForConfirmingNewPIN;
- (NSString *)promptTextForSavingPIN;
- (void)simpleNumberPad:(TPSimpleNumberPad *)arg0 buttonPressedWithCharacter:(unsigned int)arg1;
- (void)simpleNumberPadDeletePressed:(id)arg0;
- (TPSetPINViewController *)initForNewPINWithMinLength:(unsigned int)arg0 maxLength:(unsigned int)arg1 confirmPIN:(char)arg2;
- (TPSetPINViewController *)initForChangePINWithMinLength:(unsigned int)arg0 maxLength:(unsigned int)arg1 confirmPIN:(char)arg2;
- (void)resetWithErrorPrompt:(NSString *)arg0;
- (void)setPromptTextForOldPIN:(NSString *)arg0;
- (void)setPromptTextForNewPIN:(NSString *)arg0;
- (void)setPromptTextForConfirmingNewPIN:(NSString *)arg0;
- (void)setPromptTextForSavingPIN:(NSString *)arg0;
- (void)setCustomBackgroundView:(UIView *)arg0;

@end
