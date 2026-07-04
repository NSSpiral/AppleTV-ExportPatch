/* Runtime dump - GKTurnBasedParticipantInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedParticipantInternal : GKInternalRepresentation
{
    NSString * _sessionID;
    GKPlayerInternal * _player;
    GKPlayerInternal * _invitedBy;
    NSString * _inviteMessage;
    NSString * _status;
    NSDate * _lastTurnDate;
    NSDate * _timeoutDate;
    unsigned int _matchOutcome;
    unsigned char _slot;
}

@property (readonly, nonatomic) NSString * playerID;
@property (retain, nonatomic) NSString * sessionID;
@property (retain, nonatomic) GKPlayerInternal * player;
@property (retain, nonatomic) GKPlayerInternal * invitedBy;
@property (retain, nonatomic) NSString * inviteMessage;
@property (retain, nonatomic) NSString * status;
@property (retain, nonatomic) NSDate * lastTurnDate;
@property (retain, nonatomic) NSDate * timeoutDate;
@property (nonatomic) unsigned int matchOutcome;
@property (nonatomic) unsigned char slot;

+ (NSArray *)secureCodedPropertyKeys;

- (unsigned char)slot;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)status;
- (void)setStatus:(NSString *)arg0;
- (NSDictionary *)serverRepresentation;
- (NSString *)inviteMessage;
- (unsigned int)matchOutcome;
- (NSDate *)lastTurnDate;
- (NSDate *)timeoutDate;
- (GKPlayerInternal *)invitedBy;
- (void)setMatchOutcome:(unsigned int)arg0;
- (void)setLastTurnDate:(NSDate *)arg0;
- (void)setTimeoutDate:(NSDate *)arg0;
- (void)setInvitedBy:(GKPlayerInternal *)arg0;
- (void)setInviteMessage:(NSString *)arg0;
- (void)setSlot:(unsigned char)arg0;
- (NSString *)sessionID;
- (void)setSessionID:(NSString *)arg0;
- (NSString *)playerID;
- (void)setPlayer:(GKPlayerInternal *)arg0;
- (GKPlayerInternal *)player;

@end
