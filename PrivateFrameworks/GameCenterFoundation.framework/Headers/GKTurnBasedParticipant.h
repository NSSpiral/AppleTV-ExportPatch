/* Runtime dump - GKTurnBasedParticipant
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedParticipant : NSObject
{
    GKTurnBasedParticipantInternal * _internal;
}

@property (readonly, retain, nonatomic) GKPlayer * player;
@property (copy, nonatomic) NSDate * lastTurnDate;
@property (readonly, nonatomic) int status;
@property (nonatomic) int matchOutcome;
@property (copy, nonatomic) NSDate * timeoutDate;
@property (readonly, copy, nonatomic) NSString * playerID;
@property (readonly, nonatomic) NSString * matchStatusString;
@property (readonly, nonatomic) NSString * matchOutcomeString;
@property (readonly, nonatomic) char isWinner;
@property (readonly, nonatomic) GKPlayer * invitedBy;
@property (readonly, nonatomic) NSString * inviteMessage;
@property (readonly, nonatomic) char isLocalPlayer;
@property (readonly, retain) GKTurnBasedParticipantInternal * internal;

+ (GKTurnBasedParticipant *)keyPathsForValuesAffectingStatus;
+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKTurnBasedParticipant *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (GKTurnBasedParticipant *)stringForMatchOutcome:(int)arg0;
+ (NSString *)keyPathsForValuesAffectingBasicMatchOutcomeString;
+ (NSString *)keyPathsForValuesAffectingMatchOutcomeString;
+ (char)matchOutcomeIsValidForDoneState:(int)arg0;

- (GKTurnBasedParticipantInternal *)internal;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (GKTurnBasedParticipant *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (int)status;
- (void)setStatus:(int)arg0;
- (GKTurnBasedParticipant *)initWithInternalRepresentation:(GKTurnBasedParticipantInternal *)arg0;
- (char)isLocalPlayer;
- (NSDate *)lastTurnDate;
- (NSString *)basicMatchOutcomeString;
- (NSString *)matchStatusString;
- (GKPlayer *)invitedBy;
- (NSString *)matchOutcomeString;
- (char)isWinner;
- (NSString *)playerID;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;
- (GKPlayer *)player;

@end
