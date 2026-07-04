/* Runtime dump - TUCallCenterCallModelState
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUCallCenterCallModelState : TUCallModelState

@property (readonly, retain, nonatomic) TUTelephonyCallModel * telephonyCallModel;
@property (readonly, retain, nonatomic) TUFaceTimeAudioCallModel * faceTimeAudioCallModel;
@property (readonly, retain, nonatomic) TUProxyCallModel * proxyCallModel;

- (void)dealloc;
- (TUCallCenterCallModelState *)init;
- (NSString *)description;
- (char)isAmbiguous;
- (void)telephonyCallModelDidChange:(NSDictionary *)arg0;
- (void)faceTimeAudioCallModelDidChange:(NSDictionary *)arg0;
- (void)handlePossibleStateChange;
- (TUProxyCallModel *)proxyCallModel;
- (char)_supportsCallModelType:(int)arg0;
- (char)_onlySupportsCallModelType:(int)arg0;
- (char)updateInternalState;
- (char)_updateAddCallAllowed;
- (char)_updateAmbiguityState;
- (char)_updateEndAndAnswerAllowed;
- (char)_updateHardPauseAvailable;
- (char)_updateHoldAllowed;
- (char)_updateHoldAndAnswerAllowed;
- (char)_updateMergeable;
- (char)_updateSendToVoicemailAllowed;
- (char)_updateSwappable;
- (char)_updateTakingCallsPrivateAllowed;
- (TUTelephonyCallModel *)telephonyCallModel;
- (TUFaceTimeAudioCallModel *)faceTimeAudioCallModel;
- (char)_allCallsSupportCallModelType:(int)arg0;
- (char)_displayedCallSupportsCallModelType:(int)arg0;
- (char)_anyCallsSupportCallModelType:(int)arg0;

@end
