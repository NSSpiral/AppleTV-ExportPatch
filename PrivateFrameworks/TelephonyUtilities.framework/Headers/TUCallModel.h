/* Runtime dump - TUCallModel
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallModel : NSObject
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
@property (readonly, nonatomic) int ambiguityState;
@property (readonly, nonatomic) char swappable;
@property (readonly, nonatomic) char mergeable;
@property (readonly, nonatomic) char holdAllowed;
@property (readonly, nonatomic) char addCallAllowed;
@property (readonly, nonatomic) char takingCallsPrivateAllowed;
@property (readonly, nonatomic) char hardPauseAvailable;
@property (readonly, nonatomic) char endAndAnswerAllowed;
@property (readonly, nonatomic) char holdAndAnswerAllowed;
@property (readonly, nonatomic) char sendToVoicemailAllowed;

+ (TUCallModel *)sharedInstance;

- (NSString *)description;
- (char)isAmbiguous;
- (char)isSwappable;
- (char)isMergeable;
- (char)isHoldAllowed;
- (char)isAddCallAllowed;
- (int)ambiguityState;
- (char)isTakingCallsPrivateAllowed;
- (char)isHardPauseAvailable;
- (char)isEndAndAnswerAllowed;
- (char)isHoldAndAnswerAllowed;
- (char)isSendToVoicemailAllowed;

@end
