/* Runtime dump - GKScoreChallenge
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKScoreChallenge : GKChallenge
{
    GKScore * _score;
}

@property (retain, nonatomic) GKScore * score;
@property (readonly, nonatomic) GKLeaderboard * leaderboard;

+ (char)instancesRespondToSelector:(SEL)arg0;

- (void)dealloc;
- (NSString *)description;
- (GKScoreChallenge *)initWithInternalRepresentation:(NSDictionary *)arg0;
- (void)setInternal:(GKChallengeInternal *)arg0;
- (char)detailsLoaded;
- (void)loadDetailsWithCompletionHandler:(id /* block */)arg0;
- (GKLeaderboard *)leaderboard;
- (CALayer *)detailGoalTextForPlayer:(id)arg0 withLeaderboard:(GKLeaderboard *)arg1;
- (NSString *)titleText;
- (GKScore *)score;
- (void)setScore:(GKScore *)arg0;

@end
