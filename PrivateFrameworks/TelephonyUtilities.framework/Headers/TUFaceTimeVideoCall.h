/* Runtime dump - TUFaceTimeVideoCall
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUFaceTimeVideoCall : TUFaceTimeCall

- (char)isVideo;
- (NSString *)audioCategory;
- (int)service;
- (int)callStatus;
- (char)isSendingVideo;
- (void)setIsSendingVideo:(char)arg0;
- (char)hasReceivedFirstFrame;
- (int)supportedModelType;
- (NSString *)audioMode;

@end
