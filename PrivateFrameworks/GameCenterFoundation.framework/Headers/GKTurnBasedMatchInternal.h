/* Runtime dump - GKTurnBasedMatchInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedMatchInternal : GKInternalRepresentation
{
    NSString * _matchID;
    NSString * _status;
    NSString * _message;
    NSDictionary * _localizableMessage;
    NSString * _reason;
    NSDate * _creationDate;
    NSDate * _lastTurnDate;
    NSDate * _deletionDate;
    GKPlayerInternal * _currentPlayer;
    NSString * _lastTurnPlayerID;
    NSData * _matchData;
    NSString * _matchDataVersion;
    NSArray * _participants;
    NSString * _bundleID;
    NSString * _bundleVersion;
    GKGameInternal * _game;
    NSArray * _exchanges;
    unsigned int _turnNumber;
    unsigned char _minPlayers;
    unsigned char _maxPlayers;
    char _currentParticipant;
}

@property (retain, nonatomic) NSString * matchID;
@property (retain, nonatomic) NSString * status;
@property (retain, nonatomic) NSDate * creationDate;
@property (retain, nonatomic) NSDate * lastTurnDate;
@property (retain, nonatomic) NSString * message;
@property (retain, nonatomic) NSDictionary * localizableMessage;
@property (retain, nonatomic) NSString * reason;
@property (nonatomic) unsigned char minPlayers;
@property (nonatomic) unsigned char maxPlayers;
@property (retain, nonatomic) NSDate * deletionDate;
@property (nonatomic) char currentParticipant;
@property (nonatomic) unsigned int turnNumber;
@property (retain, nonatomic) NSString * lastTurnPlayerID;
@property (retain, nonatomic) NSData * matchData;
@property (retain, nonatomic) NSString * matchDataVersion;
@property (retain, nonatomic) NSArray * participants;
@property (retain, nonatomic) NSString * bundleID;
@property (retain, nonatomic) NSString * bundleVersion;
@property (retain, nonatomic) NSArray * exchanges;
@property (retain, nonatomic) GKGameInternal * game;
@property (retain, nonatomic) GKPlayerInternal * currentPlayer;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)reason;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSString *)status;
- (void)setStatus:(NSString *)arg0;
- (NSDate *)creationDate;
- (NSString *)bundleID;
- (void)setBundleID:(NSString *)arg0;
- (NSArray *)participants;
- (void)setParticipants:(NSArray *)arg0;
- (GKGameInternal *)game;
- (void)setGame:(GKGameInternal *)arg0;
- (unsigned char)minPlayers;
- (unsigned char)maxPlayers;
- (void)setMaxPlayers:(unsigned char)arg0;
- (void)setMinPlayers:(unsigned char)arg0;
- (NSDate *)lastTurnDate;
- (NSString *)matchID;
- (NSArray *)exchanges;
- (GKPlayerInternal *)currentPlayer;
- (NSDictionary *)localizableMessage;
- (void)setLocalizableMessage:(NSDictionary *)arg0;
- (char)currentParticipant;
- (NSData *)matchData;
- (void)setCurrentParticipant:(char)arg0;
- (void)setMatchData:(NSData *)arg0;
- (void)setMatchID:(NSString *)arg0;
- (void)setCurrentPlayer:(GKPlayerInternal *)arg0;
- (void)setLastTurnDate:(NSDate *)arg0;
- (unsigned int)turnNumber;
- (void)setTurnNumber:(unsigned int)arg0;
- (NSString *)lastTurnPlayerID;
- (void)setLastTurnPlayerID:(NSString *)arg0;
- (NSString *)matchDataVersion;
- (void)setMatchDataVersion:(NSString *)arg0;
- (void)setExchanges:(NSArray *)arg0;
- (NSString *)bundleVersion;
- (void)setBundleVersion:(NSString *)arg0;
- (void)setDeletionDate:(NSDate *)arg0;
- (NSDate *)deletionDate;
- (void)setReason:(NSString *)arg0;
- (void)setCreationDate:(NSDate *)arg0;

@end
