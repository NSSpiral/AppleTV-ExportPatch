/* Runtime dump - GKTurnBasedMatch
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedMatch : NSObject <GKSessionDelegate>
{
    GKTurnBasedMatchInternal * _internal;
    NSArray * _participants;
    NSArray * _exchanges;
    unsigned int _state;
}

@property (readonly, retain, nonatomic) NSString * matchID;
@property (readonly, retain, nonatomic) NSDate * creationDate;
@property (readonly, retain, nonatomic) NSArray * participants;
@property (readonly, nonatomic) int status;
@property (retain, nonatomic) GKTurnBasedParticipant * currentParticipant;
@property (readonly, retain, nonatomic) NSData * matchData;
@property (copy, nonatomic) NSString * message;
@property (nonatomic) unsigned int matchDataMaximumSize;
@property (readonly, retain, nonatomic) NSArray * exchanges;
@property (readonly, retain, nonatomic) NSArray * activeExchanges;
@property (readonly, retain, nonatomic) NSArray * completedExchanges;
@property (readonly, nonatomic) unsigned int exchangeDataMaximumSize;
@property (readonly, nonatomic) unsigned int exchangeMaxInitiatedExchangesPerPlayer;
@property (retain) GKTurnBasedMatchInternal * internal;
@property (copy, nonatomic) NSDate * lastTurnDate;
@property (readonly, nonatomic) int turnNumber;
@property (readonly, nonatomic) NSDate * dateSortKey;
@property (readonly, nonatomic) GKTurnBasedParticipant * previousParticipant;
@property (readonly, nonatomic) GKTurnBasedParticipant * previousParticipantOrFirstKnownPlayer;
@property (readonly, nonatomic) GKTurnBasedParticipant * playingWithParticipantOrFirstKnownPlayer;
@property (readonly, nonatomic) GKTurnBasedParticipant * localPlayerParticipant;
@property (readonly, nonatomic) GKPlayer * showcasePlayer;
@property (readonly, nonatomic) GKTurnBasedParticipant * firstWinnerOrTiedOrLastLoser;
@property (readonly, nonatomic) GKPlayer * currentPlayer;
@property (retain, nonatomic) NSString * bundleID;
@property (retain, nonatomic) NSString * bundleVersion;
@property (nonatomic) unsigned int state;
@property (readonly, nonatomic) char isMyTurn;
@property (readonly, nonatomic) char localPlayerHasRecentTurn;
@property (readonly, nonatomic) GKGame * game;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (GKTurnBasedMatch *)keyPathsForValuesAffectingStatus;
+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKTurnBasedMatch *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (void)findMatchForRequest:(NSURLRequest *)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)loadTurnBasedMatchWithDetailsForMatchID:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)getTurnBasedBadgeCountWithHandler:(id /* block */)arg0;
+ (void)loadMatchesIncludingCompatibleBundleID:(char)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)loadTurnBasedMatchSummariesIncludingCompatibleBundleID:(char)arg0 withCompletionHandler:(id /* block */)arg1;
+ (NSArray *)matchesWithInternalRepresentations:(GKTurnBasedMatchInternal *)arg0;
+ (void)loadTurnBasedMatchDetailsForMatchIDs:(id)arg0 loadGameData:(char)arg1 withCompletionHandler:(id /* block */)arg2;
+ (NSString *)_localizableMessageWithKey:(NSString *)arg0 arguments:(NSDictionary *)arg1 defaultMessage:(NSString *)arg2;
+ (void)loadMatchesWithCompletionHandler:(id /* block */)arg0;
+ (void)loadTurnBasedMatchSummaries:(id)arg0;
+ (void)loadMatchWithID:(int)arg0 withCompletionHandler:(id /* block */)arg1;

- (GKTurnBasedMatchInternal *)internal;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (GKTurnBasedMatch *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (unsigned int)state;
- (void)setState:(unsigned int)arg0;
- (int)compare:(NSObject *)arg0;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (int)status;
- (NSArray *)participants;
- (GKTurnBasedMatch *)initWithInternalRepresentation:(GKTurnBasedMatchInternal *)arg0;
- (void)setInternal:(GKTurnBasedMatchInternal *)arg0;
- (GKGame *)game;
- (unsigned int)exchangeDataMaximumSize;
- (unsigned int)exchangeMaxInitiatedExchangesPerPlayer;
- (void)rematchWithCompletionHandler:(id /* block */)arg0;
- (void)acceptInviteWithCompletionHandler:(id /* block */)arg0;
- (NSObject *)exchangeForID:(NSObject *)arg0;
- (void)_updateWithInternal:(GKTurnBasedMatchInternal *)arg0;
- (NSDictionary *)_participantsForInternalRepresentation:(NSDictionary *)arg0;
- (NSDictionary *)_exchangesForInternalRepresentation:(NSDictionary *)arg0 participants:(NSArray *)arg1;
- (NSArray *)exchanges;
- (GKPlayer *)currentPlayer;
- (void)setLocalizableMessageWithKey:(NSString *)arg0 arguments:(NSDictionary *)arg1;
- (NSArray *)activeExchanges;
- (GKTurnBasedParticipant *)currentParticipant;
- (GKTurnBasedParticipant *)localPlayerParticipant;
- (unsigned int)matchDataMaximumSize;
- (NSDate *)dateSortKey;
- (void)setCurrentParticipant:(GKTurnBasedParticipant *)arg0;
- (GKTurnBasedParticipant *)previousParticipant;
- (GKTurnBasedParticipant *)firstWinnerOrTiedOrLastLoser;
- (GKTurnBasedParticipant *)previousParticipantOrFirstKnownPlayer;
- (GKTurnBasedParticipant *)playingWithParticipantOrFirstKnownPlayer;
- (void)declineInviteWithCompletionHandler:(id /* block */)arg0;
- (void)endTurnWithNextParticipants:(id)arg0 turnTimeout:(double)arg1 matchData:(NSData *)arg2 completionHandler:(id /* block */)arg3;
- (id)indexesForParticipants:(id)arg0;
- (void)participantQuitInTurnWithOutcome:(int)arg0 nextParticipants:(id)arg1 turnTimeout:(double)arg2 matchData:(NSData *)arg3 completionHandler:(id /* block */)arg4;
- (void)endMatchInTurnWithMatchData:(NSData *)arg0 scores:(NSArray *)arg1 achievements:(id)arg2 completionHandler:(id /* block */)arg3;
- (char)isMyTurn;
- (char)localPlayerHasRecentTurn;
- (GKPlayer *)showcasePlayer;
- (NSArray *)completedExchanges;
- (void)removeWithCompletionHandler:(id /* block */)arg0;
- (void)loadMatchDataWithCompletionHandler:(id /* block */)arg0;
- (void)endTurnWithNextParticipant:(id)arg0 matchData:(NSData *)arg1 completionHandler:(id /* block */)arg2;
- (void)participantQuitInTurnWithOutcome:(int)arg0 nextParticipant:(id)arg1 matchData:(NSData *)arg2 completionHandler:(id /* block */)arg3;
- (void)participantQuitOutOfTurnWithOutcome:(int)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)endMatchInTurnWithMatchData:(NSData *)arg0 completionHandler:(id /* block */)arg1;
- (void)saveCurrentTurnWithMatchData:(NSData *)arg0 completionHandler:(id /* block */)arg1;
- (void)saveMergedMatchData:(NSData *)arg0 withResolvedExchanges:(char)arg1 completionHandler:(id /* block */)arg2;
- (void)sendExchangeToParticipants:(id)arg0 data:(NSData *)arg1 localizableMessageKey:(NSString *)arg2 arguments:(NSDictionary *)arg3 timeout:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)sendReminderToParticipants:(id)arg0 localizableMessageKey:(NSString *)arg1 arguments:(NSDictionary *)arg2 completionHandler:(id /* block */)arg3;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
