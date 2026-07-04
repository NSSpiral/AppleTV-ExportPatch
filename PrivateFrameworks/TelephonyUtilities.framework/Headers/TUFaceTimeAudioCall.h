/* Runtime dump - TUFaceTimeAudioCall
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUFaceTimeAudioCall : TUFaceTimeCall

- (void)dealloc;
- (NSString *)audioCategory;
- (int)service;
- (int)callStatus;
- (int)supportedModelType;
- (NSString *)audioMode;
- (void)hold;
- (void)unhold;
- (void)handleCallConnected:(id)arg0;
- (void)addCallConnectedObserver;
- (void)removeCallConnectedObserver;
- (char)shouldIgnoreStatusChange;

@end
