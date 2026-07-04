/* Runtime dump - GKScore
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKScore : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    char _shouldSetDefaultLeaderboard;
    GKScoreInternal * _internal;
    GKGame * _game;
}

@property (nonatomic) long long value;
@property (copy, nonatomic) NSString * formattedValue;
@property (copy, nonatomic) NSString * leaderboardIdentifier;
@property (nonatomic) unsigned long long context;
@property (readonly, retain, nonatomic) NSDate * date;
@property (readonly, retain, nonatomic) GKPlayer * player;
@property (nonatomic) int rank;
@property (nonatomic) char shouldSetDefaultLeaderboard;
@property (retain) GKScoreInternal * internal;
@property (readonly, retain) NSString * playerID;
@property (retain, nonatomic) NSString * groupLeaderboardIdentifier;
@property char valueSet;
@property (retain, nonatomic) GKGame * game;
@property (copy, nonatomic) NSString * category;

+ (char)supportsSecureCoding;
+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKScore *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (void)reportScores:(id)arg0 whileScreeningChallenges:(char)arg1 withEligibleChallenges:(char)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)reportScores:(id)arg0 withCompletionHandler:(id /* block */)arg1;

- (GKScoreInternal *)internal;
- (void)dealloc;
- (GKScore *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (GKScore *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (GKScore *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (GKScore *)initWithInternalRepresentation:(GKScoreInternal *)arg0;
- (void)setInternal:(GKScoreInternal *)arg0;
- (GKGame *)game;
- (GKScore *)initWithInternalRepresentation:(GKScoreInternal *)arg0 playerID:(NSString *)arg1;
- (void)setGame:(GKGame *)arg0;
- (GKScore *)initWithInternalRepresentation:(GKScoreInternal *)arg0 playerInternal:(GKPlayerInternal *)arg1;
- (GKScore *)initWithLeaderboardIdentifier:(NSString *)arg0;
- (char)shouldSetDefaultLeaderboard;
- (GKScore *)initWithLeaderboardIdentifier:(NSString *)arg0 player:(GKPlayer *)arg1;
- (GKScore *)initWithLeaderboardIdentifier:(NSString *)arg0 forPlayer:(ATVPlayer *)arg1;
- (GKScore *)initWithCategory:(NSString *)arg0;
- (void)reportScoreWithCompletionHandler:(id /* block */)arg0;
- (void)setShouldSetDefaultLeaderboard:(char)arg0;
- (NSString *)playerID;
- (void)setValue:(long long)arg0 forUndefinedKey:(NSString *)arg1;
- (GKPlayer *)player;

@end
