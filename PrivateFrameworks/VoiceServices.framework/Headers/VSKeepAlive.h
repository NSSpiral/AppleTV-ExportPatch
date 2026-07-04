/* Runtime dump - VSKeepAlive
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSKeepAlive : NSObject
{
    NSXPCConnection * _serverConnection;
    int _audioType;
    char _active;
    char _keepAudioSessionActive;
}

@property (nonatomic) int audioType;
@property (nonatomic) char active;
@property (nonatomic) char keepAudioSessionActive;

- (void)dealloc;
- (char)active;
- (void)setActive:(char)arg0;
- (void).cxx_destruct;
- (NSURLConnection *)_serverConnection;
- (void)setAudioType:(int)arg0;
- (void)setKeepAudioSessionActive:(char)arg0;
- (void)_ensureKeepAliveMaintenance;
- (id)_remoteKeepAlive;
- (int)audioType;
- (char)keepAudioSessionActive;

@end
