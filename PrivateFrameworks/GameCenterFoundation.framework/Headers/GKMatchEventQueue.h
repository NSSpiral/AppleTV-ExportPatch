/* Runtime dump - GKMatchEventQueue
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchEventQueue : NSObject
{
    GKPlayer * _player;
    NSMutableArray * _events;
    NSMutableDictionary * _connectionInfo;
    int _playerState;
    int _deferedPlayerState;
    unsigned int _sequenceNumber;
    char _counted;
    char _okToSend;
    char _relayInitiated;
    char _hasInitRelayInfo;
    char _hasUpdateRelayInfo;
}

@property (retain, nonatomic) NSMutableArray * events;
@property (retain, nonatomic) GKPlayer * player;
@property (retain, nonatomic) NSMutableDictionary * connectionInfo;
@property (nonatomic) int playerState;
@property (nonatomic) int deferedPlayerState;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) char counted;
@property (nonatomic) char okToSend;
@property (nonatomic) char relayInitiated;
@property (nonatomic) char hasInitRelayInfo;
@property (nonatomic) char hasUpdateRelayInfo;

- (NSMutableArray *)events;
- (void)dealloc;
- (GKMatchEventQueue *)init;
- (int)playerState;
- (void)setPlayerState:(int)arg0;
- (char)counted;
- (void)setCounted:(char)arg0;
- (int)deferedPlayerState;
- (void)setDeferedPlayerState:(int)arg0;
- (void)setEvents:(NSMutableArray *)arg0;
- (char)okToSend;
- (void)setOkToSend:(char)arg0;
- (NSMutableDictionary *)connectionInfo;
- (void)setConnectionInfo:(NSMutableDictionary *)arg0;
- (char)relayInitiated;
- (void)setRelayInitiated:(char)arg0;
- (char)hasInitRelayInfo;
- (void)setHasInitRelayInfo:(char)arg0;
- (char)hasUpdateRelayInfo;
- (void)setHasUpdateRelayInfo:(char)arg0;
- (void)setSequenceNumber:(unsigned int)arg0;
- (unsigned int)sequenceNumber;
- (void)setPlayer:(GKPlayer *)arg0;
- (GKPlayer *)player;

@end
