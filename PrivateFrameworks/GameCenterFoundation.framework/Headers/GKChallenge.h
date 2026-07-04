/* Runtime dump - GKChallenge
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKChallenge : NSObject <NSCoding, NSSecureCoding>
{
    GKChallengeInternal * _internal;
}

@property (readonly, copy, nonatomic) NSString * issuingPlayerID;
@property (readonly, copy, nonatomic) NSString * receivingPlayerID;
@property (readonly, copy, nonatomic) GKPlayer * issuingPlayer;
@property (readonly, copy, nonatomic) GKPlayer * receivingPlayer;
@property (readonly, nonatomic) int state;
@property (readonly, retain, nonatomic) NSDate * issueDate;
@property (readonly, retain, nonatomic) NSDate * completionDate;
@property (readonly, copy, nonatomic) NSString * message;
@property (retain) GKChallengeInternal * internal;
@property (readonly, copy, nonatomic) NSString * challengeID;
@property (readonly, copy, nonatomic) NSString * bundleID;
@property (readonly, copy, nonatomic) NSOrderedSet * compatibleBundleIDs;
@property (readonly, nonatomic) GKGame * game;
@property (readonly, nonatomic) char detailsLoaded;

+ (char)supportsSecureCoding;
+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKChallenge *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (NSObject *)stringForState:(int)arg0;
+ (GKChallenge *)challengeForInternalRepresentation:(NSDictionary *)arg0;
+ (void)loadChallengesForGame:(id)arg0 receivingPlayer:(GKPlayer *)arg1 withCompletionHandler:(id /* block */)arg2;
+ (GKChallenge *)challengeForGame:(id)arg0 andPlayer:(id)arg1 withScore:(GKScore *)arg2;
+ (GKChallenge *)challengeForGame:(id)arg0 andPlayer:(id)arg1 withAchievement:(GKAchievement *)arg2;
+ (void)getCountOfChallenges:(id)arg0;
+ (void)loadChallengesForReceivingPlayer:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)loadReceivedChallengesWithCompletionHandler:(id /* block */)arg0;

- (GKChallengeInternal *)internal;
- (void)dealloc;
- (GKChallenge *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (GKChallenge *)initWithInternalRepresentation:(GKChallengeInternal *)arg0;
- (void)setInternal:(GKChallengeInternal *)arg0;
- (GKGame *)game;
- (GKPlayer *)receivingPlayer;
- (void)declineWithCompletionHandler:(id /* block */)arg0;
- (GKPlayer *)issuingPlayer;
- (void)issueToPlayers:(id)arg0 message:(NSString *)arg1;
- (void)decline;
- (NSString *)issuingPlayerID;
- (NSString *)receivingPlayerID;
- (char)hasLoadedUIDetails;
- (void)loadUIDetailsWithHandler:(id /* block */)arg0;
- (CALayer *)infoTextForIssuingPlayer:(id)arg0;
- (char)detailsLoaded;
- (void)loadDetailsWithCompletionHandler:(id /* block */)arg0;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
