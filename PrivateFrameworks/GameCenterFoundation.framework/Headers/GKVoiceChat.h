/* Runtime dump - GKVoiceChat
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKVoiceChat : NSObject <GKVoiceChatSessionDelegate>
{
    NSArray * _players;
    id _playerStateUpdateHandler;
    id _playerVoiceChatStateDidChangeHandler;
    GKSession * _gkSession;
    GKVoiceChatSession * _gkVoiceChatSession;
}

@property (copy, nonatomic) id playerVoiceChatStateDidChangeHandler;
@property (readonly, copy, nonatomic) NSString * name;
@property (nonatomic) char active;
@property (nonatomic) float volume;
@property (retain, nonatomic) NSArray * players;
@property (retain, nonatomic) GKSession * gkSession;
@property (retain, nonatomic) GKVoiceChatSession * gkVoiceChatSession;
@property (copy, nonatomic) id playerStateUpdateHandler;

+ (char)isVoIPAllowed;

- (void)dealloc;
- (char)isActive;
- (NSString *)name;
- (void)stop;
- (void)setActive:(char)arg0;
- (void)start;
- (NSArray *)players;
- (void)setPlayers:(NSArray *)arg0;
- (GKVoiceChat *)initChat:(id)arg0 withSession:(NSObject *)arg1 players:(NSArray *)arg2;
- (id)playerIDs;
- (void)setPlayer:(ATVPlayer *)arg0 muted:(char)arg1;
- (void)setMute:(char)arg0 forPlayer:(ATVPlayer *)arg1;
- (id /* block */)playerStateUpdateHandler;
- (void)setPlayerStateUpdateHandler:(id /* block */)arg0;
- (id /* block */)playerVoiceChatStateDidChangeHandler;
- (void)setPlayerVoiceChatStateDidChangeHandler:(id /* block */)arg0;
- (GKSession *)gkSession;
- (void)setGkSession:(GKSession *)arg0;
- (GKVoiceChatSession *)gkVoiceChatSession;
- (void)setGkVoiceChatSession:(GKVoiceChatSession *)arg0;
- (void)gkVoiceChatSession:(GKVoiceChatSession *)arg0 stateUpdate:(unsigned int)arg1 forPeer:(NSString *)arg2;
- (float)volume;
- (void)setVolume:(float)arg0;

@end
