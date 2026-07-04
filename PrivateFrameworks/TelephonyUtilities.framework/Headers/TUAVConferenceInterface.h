/* Runtime dump - TUAVConferenceInterface
 * Image: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUAVConferenceInterface : NSObject <AVConferenceDelegate>
{
    char _hasActiveConference;
    NSMutableArray * _activeConferenceConnections;
    AVConference * _conference;
    int _callID;
}

@property (retain, nonatomic) NSMutableArray * activeConferenceConnections;
@property (retain, nonatomic) AVConference * conference;
@property (nonatomic) int callID;
@property (nonatomic) char hasActiveConference;

+ (TUAVConferenceInterface *)sharedInstance;

- (void)dealloc;
- (TUAVConferenceInterface *)init;
- (void)conference:(AVConference *)arg0 didStartSession:(char)arg1 withUserInfo:(NSDictionary *)arg2;
- (void)conference:(AVConference *)arg0 didStopWithCallID:(int)arg1 error:(NSError *)arg2;
- (void)conference:(AVConference *)arg0 withCallID:(int)arg1 remoteMediaStalled:(char)arg2;
- (void)conference:(AVConference *)arg0 receivedFirstRemoteFrameForCallID:(int)arg1;
- (void)conference:(AVConference *)arg0 remoteVideoAttributesChanged:(id)arg1 callID:(int)arg2;
- (void)conference:(AVConference *)arg0 remoteAudioPaused:(char)arg1 callID:(int)arg2;
- (void)conference:(AVConference *)arg0 remoteVideoPaused:(char)arg1 callID:(int)arg2;
- (void)conference:(AVConference *)arg0 remoteScreenAttributesChanged:(id)arg1 callID:(int)arg2;
- (void)conference:(AVConference *)arg0 updateInputFrequencyLevel:(NSData *)arg1;
- (void)conference:(AVConference *)arg0 updateOutputFrequencyLevel:(NSData *)arg1;
- (void)conference:(AVConference *)arg0 updateInputMeterLevel:(float)arg1;
- (void)conference:(AVConference *)arg0 updateOutputMeterLevel:(float)arg1;
- (void)conference:(AVConference *)arg0 inititiateRelayRequest:(int)arg1 requestDict:(NSDictionary *)arg2;
- (void)conference:(AVConference *)arg0 sendRelayUpdate:(int)arg1 updateDict:(NSDictionary *)arg2;
- (void)conference:(AVConference *)arg0 cancelRelayRequest:(int)arg1 requestDict:(NSDictionary *)arg2;
- (void)conference:(AVConference *)arg0 videoQualityNotificationForCallID:(int)arg1 isDegraded:(char)arg2 isRemote:(char)arg3;
- (void)conference:(AVConference *)arg0 withCallID:(int)arg1 networkHint:(char)arg2;
- (void)conference:(AVConference *)arg0 closeConnectionForCallID:(int)arg1;
- (void)serverDiedForConference:(id)arg0;
- (int)callID;
- (void)setCallID:(int)arg0;
- (void)setActiveConferenceConnections:(NSMutableArray *)arg0;
- (void)_cleanUpConference;
- (NSString *)_conferenceConnectionForIdentifier:(NSString *)arg0;
- (AVConference *)conference;
- (NSMutableArray *)activeConferenceConnections;
- (char)isMutedForIdentifier:(NSString *)arg0;
- (char)isSendingAudioForIdentifier:(NSString *)arg0;
- (char)hasActiveConference;
- (void)_startConferenceForConferenceConnection:(NSURLConnection *)arg0 withSocket:(int)arg1;
- (void)_cleanUpConferenceConnection:(NSURLConnection *)arg0 error:(NSError *)arg1;
- (void)setConference:(AVConference *)arg0;
- (void)_startAudioSession;
- (void)_setUpDidStartTimeoutForConference:(id)arg0 conferenceConnection:(NSURLConnection *)arg1;
- (void)_cleanUpAllConferenceConnectionsWithError:(NSError *)arg0;
- (void)_endConference:(char)arg0;
- (void)_stopAudioSession;
- (void)setHasActiveConference:(char)arg0;
- (char)_shouldIgnoreAVConferenceError:(NSError *)arg0;
- (void)setMuted:(char)arg0 forIdentifier:(NSString *)arg1;
- (void)setSendingAudio:(char)arg0 forIdentifier:(NSString *)arg1;
- (void)startConferenceForIdentifier:(NSString *)arg0 withSocket:(int)arg1 asHost:(char)arg2 didStartHandler:(id /* block */)arg3 didStopHandler:(/* block */ id)arg4;
- (void)stopConferenceForIdentifier:(NSString *)arg0;

@end
