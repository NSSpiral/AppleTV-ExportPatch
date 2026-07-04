/* Runtime dump - TPStarkInCallViewController
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPStarkInCallViewController : UIViewController <TPStarkPhoneCallGalleryViewDelegate, TPStarkHardPauseButtonDelegate, TPStarkInCallButtonsViewDelegate, UIActionSheetDelegate>
{
    TUReplyWithMessageStore * _replyWithMessageStore;
    unsigned short _currentMode;
    <TPStarkInCallViewControllerDelegate> * _delegate;
    NSArray * _primaryPhoneCalls;
    NSArray * _conferenceParticipants;
    TUCall * _incomingPhoneCall;
    UIView * _flippyView;
    TPStarkPhoneCallGalleryView * _galleryView;
    TPStarkInCallButtonsView * _buttonsView;
    TPStarkInCallHardPauseButton * _hardPauseButton;
    NSTimer * _viewUpdateClockTickTimer;
    TUCall * _callToDecline;
    TUCall * _failedCall;
}

@property <TPStarkInCallViewControllerDelegate> * delegate;
@property (readonly) char isDismissable;
@property (copy) NSArray * primaryPhoneCalls;
@property (copy) NSArray * conferenceParticipants;
@property (retain) TUCall * incomingPhoneCall;
@property (retain) UIView * flippyView;
@property (retain) TPStarkPhoneCallGalleryView * galleryView;
@property (retain) TPStarkInCallButtonsView * buttonsView;
@property (retain) TPStarkInCallHardPauseButton * hardPauseButton;
@property (retain) NSTimer * viewUpdateClockTickTimer;
@property (retain) TUCall * callToDecline;
@property unsigned short currentMode;
@property (retain) TUCall * failedCall;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<TPStarkInCallViewControllerDelegate> *)arg0;
- (<TPStarkInCallViewControllerDelegate> *)delegate;
- (void)_physicalButtonsBegan:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsEnded:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_physicalButtonsCancelled:(NSSet *)arg0 withEvent:(Event *)arg1;
- (void)_wheelChangedWithEvent:(NSObject *)arg0;
- (void)traitCollectionDidChange:(NSDictionary *)arg0;
- (unsigned short)currentMode;
- (TPStarkInCallViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)loadView;
- (void)viewWillAppear:(char)arg0;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (void)setCurrentMode:(unsigned short)arg0;
- (char)isMuted;
- (void)setIsMuted:(char)arg0;
- (id)allConferenceParticipantCalls;
- (NSObject *)primaryPhoneCallsForGalleryView:(NSObject *)arg0;
- (NSObject *)representativePhoneCallForConferenceForGalleryView:(NSObject *)arg0;
- (void)muteStateChangedNotification:(NSNotification *)arg0;
- (void)callFailedNotification:(NSNotification *)arg0;
- (void)setFlippyView:(UIView *)arg0;
- (UIView *)flippyView;
- (void)setGalleryView:(TPStarkPhoneCallGalleryView *)arg0;
- (TPStarkPhoneCallGalleryView *)galleryView;
- (void)setButtonsView:(TPStarkInCallButtonsView *)arg0;
- (TPStarkInCallButtonsView *)buttonsView;
- (void)setHardPauseButton:(TPStarkInCallHardPauseButton *)arg0;
- (TPStarkInCallHardPauseButton *)hardPauseButton;
- (NSTimer *)viewUpdateClockTickTimer;
- (void)setViewUpdateClockTickTimer:(NSTimer *)arg0;
- (void)viewUpdateClockTickTimerFired:(id)arg0;
- (NSArray *)primaryPhoneCalls;
- (NSArray *)conferenceParticipants;
- (TUCall *)incomingPhoneCall;
- (id)__sanitizedPrimaryPhoneCallOrdering:(id)arg0;
- (void)setPrimaryPhoneCalls:(NSArray *)arg0;
- (void)setConferenceParticipants:(NSArray *)arg0;
- (void)setIncomingPhoneCall:(TUCall *)arg0;
- (char)currentCallStateWarrantsCallWaitingMode;
- (void)updateButtonsViewState;
- (TUCall *)failedCall;
- (TUCall *)callToDecline;
- (void)_invalidateIntrinsicContentSizeForLabelsInView:(NSObject *)arg0;
- (char)canSendMessageToCall:(id)arg0;
- (void)setCallToDecline:(TUCall *)arg0;
- (TUReplyWithMessageStore *)replyWithMessageStore;
- (void)handleAlertControllerSendMessageResponse:(NSURLResponse *)arg0;
- (void)setFailedCall:(TUCall *)arg0;
- (void)_sendMessageResponse:(NSURLResponse *)arg0 toCall:(CTCall *)arg1;
- (char)areIncomingCallOptionsAllowed;
- (char)isSpringBoardPasscodeLocked;
- (void)selectNextHighlightableControlAscending:(char)arg0;
- (void)highlightHardPauseButton;
- (id)conferenceParticipantCallsForPhoneCall:(id)arg0;
- (void)hardPauseButtonDidChangeVisibility:(id)arg0;
- (void)inCallButtonWasTapped:(id)arg0;
- (char)isMergeCallsAllowed;
- (char)isSwapCallsAllowed;
- (char)isKeypadAllowed;
- (char)canSendMessage;
- (void)setPrimaryPhoneCalls:(NSArray *)arg0 conferencePhoneCalls:(id)arg1 incomingPhoneCall:(TUCall *)arg2;
- (id)currentActivePhoneCall;
- (char)isDismissable;
- (char)isAddCallAllowed;

@end
