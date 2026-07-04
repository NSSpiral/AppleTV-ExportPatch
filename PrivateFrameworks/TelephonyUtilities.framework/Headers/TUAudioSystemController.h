/* Runtime dump - TUAudioSystemController
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAudioSystemController : TUAudioController
{
    NSObject<OS_dispatch_queue> * _uplinkMutedQueue;
    NSObject<OS_dispatch_queue> * _downlinkMutedQueue;
    NSObject<OS_dispatch_queue> * _ttyQueue;
    NSObject<OS_dispatch_queue> * _pickableRoutesQueue;
    NSNumber * _isUplinkMutedCached;
    NSNumber * _isDownlinkMutedCached;
    NSNumber * _isTTYCached;
    NSArray * _pickableRoutesForTTY;
    NSArray * _pickableRoutesForPhoneCall;
    NSArray * _pickableRoutesForPlayAndRecordVideo;
    NSArray * _pickableRoutesForPlayAndRecordVoice;
    NSArray * _pickableRoutesForPlayAndRecordRemoteVoice;
    char _isRequestingUplinkMuted;
    char _isRequestingDownlinkMuted;
    char _isRequestingTTY;
    char _isRequestingPickableRoutesForTTY;
    char _isRequestingPickableRoutesForPhoneCall;
    char _isRequestingPickableRoutesForPlayAndRecordVideo;
    char _isRequestingPickableRoutesForPlayAndRecordVoice;
    char _isRequestingPickableRoutesForPlayAndRecordRemoteVoice;
    unsigned long long _lastUplinkMutedRequestScheduleTime;
    unsigned long long _lastDownlinkMutedRequestScheduleTime;
    unsigned long long _lastTTYRequestScheduleTime;
    unsigned long long _lastTTYPickableRoutesScheduleTime;
    unsigned long long _lastPhoneCallCategoryRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVideoRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordVoiceRoutesScheduleTime;
    unsigned long long _lastPlayAndRecordRemoteVoiceRoutesScheduleTime;
}

+ (TUAudioSystemController *)sharedAudioSystemController;
+ (TUAudioSystemController *)sharedSystemController;

- (void)_pickableRoutesDidChangeNotification:(NSNotification *)arg0;
- (void)dealloc;
- (TUAudioSystemController *)init;
- (NSString *)pickableRoutesForCategory:(NSString *)arg0 andMode:(id)arg1;
- (char)isUplinkMuted;
- (char)setUplinkMuted:(char)arg0;
- (char)isDownlinkMuted;
- (char)setDownlinkMuted:(char)arg0;
- (char)isTTY;
- (void)_handleUplinkMuteDidChangeNotification:(NSNotification *)arg0;
- (void)_handleCallStatusChanged;
- (NSArray *)pickableRoutesForTTY;
- (NSURLRequest *)_pickableRoutesForPhoneCallWithForceNewRequest:(char)arg0;
- (NSURLRequest *)_pickableRoutesForPlayAndRecordVideoWithForceNewRequest:(char)arg0;
- (NSURLRequest *)_pickableRoutesForPlayAndRecordVoiceWithForceNewRequest:(char)arg0;
- (NSURLRequest *)_pickableRoutesForPlayAndRecordRemoteVoiceWithForceNewRequest:(char)arg0;
- (NSURLRequest *)_pickableRoutesForTTYWithForceNewRequest:(char)arg0;
- (void)_handleDownlinkMuteDidChangeNotification:(NSNotification *)arg0;
- (NSString *)pickableRoutesForPhoneCallCategory;
- (NSString *)pickableRoutesForFaceTimeAudioCategory;
- (NSString *)pickableRoutesForFaceTimeVideoCategory;

@end
