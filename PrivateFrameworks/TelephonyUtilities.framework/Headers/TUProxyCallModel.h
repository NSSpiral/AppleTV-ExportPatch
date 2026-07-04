/* Runtime dump - TUProxyCallModel
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUProxyCallModel : TUCallModel
{
    char _swappable;
    char _mergeable;
    char _holdAllowed;
    char _addCallAllowed;
    char _takingCallsPrivateAllowed;
    char _hardPauseAvailable;
    char _endAndAnswerAllowed;
    char _holdAndAnswerAllowed;
    char _sendToVoicemailAllowed;
    int _ambiguityState;
}

@property (nonatomic) int ambiguityState;
@property (nonatomic) char swappable;
@property (nonatomic) char mergeable;
@property (nonatomic) char holdAllowed;
@property (nonatomic) char addCallAllowed;
@property (nonatomic) char takingCallsPrivateAllowed;
@property (nonatomic) char hardPauseAvailable;
@property (nonatomic) char endAndAnswerAllowed;
@property (nonatomic) char holdAndAnswerAllowed;
@property (nonatomic) char sendToVoicemailAllowed;

+ (TUProxyCallModel *)sharedInstance;

- (char)isSwappable;
- (void)setSwappable:(char)arg0;
- (char)isMergeable;
- (void)setMergeable:(char)arg0;
- (char)isHoldAllowed;
- (void)setHoldAllowed:(char)arg0;
- (char)isAddCallAllowed;
- (void)setAddCallAllowed:(char)arg0;
- (int)ambiguityState;
- (void)setAmbiguityState:(int)arg0;
- (char)isTakingCallsPrivateAllowed;
- (void)setTakingCallsPrivateAllowed:(char)arg0;
- (char)isHardPauseAvailable;
- (void)setHardPauseAvailable:(char)arg0;
- (char)isEndAndAnswerAllowed;
- (void)setEndAndAnswerAllowed:(char)arg0;
- (char)isHoldAndAnswerAllowed;
- (void)setHoldAndAnswerAllowed:(char)arg0;
- (char)isSendToVoicemailAllowed;
- (void)setSendToVoicemailAllowed:(char)arg0;
- (void)updateWithCallModelState:(TUCallModelState *)arg0;

@end
