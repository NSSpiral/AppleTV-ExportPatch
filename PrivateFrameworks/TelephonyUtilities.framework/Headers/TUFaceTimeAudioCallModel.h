/* Runtime dump - TUFaceTimeAudioCallModel
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUFaceTimeAudioCallModel : TUCallModel

+ (TUFaceTimeAudioCallModel *)sharedInstance;

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
