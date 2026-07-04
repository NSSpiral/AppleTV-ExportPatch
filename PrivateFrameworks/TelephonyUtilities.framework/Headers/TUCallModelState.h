/* Runtime dump - TUCallModelState
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallModelState : NSObject <NSSecureCoding>
{
    char _ambiguous;
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

@property (readonly, nonatomic) char ambiguous;
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

+ (char)supportsSecureCoding;

- (TUCallModelState *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (char)isAmbiguous;
- (void)handlePossibleStateChange;
- (char)updateInternalState;
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
- (TUCallModelState *)initWithAllPropertiesAllowed;

@end
