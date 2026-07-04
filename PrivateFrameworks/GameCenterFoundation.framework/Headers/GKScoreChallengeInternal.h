/* Runtime dump - GKScoreChallengeInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKScoreChallengeInternal : GKChallengeInternal
{
    GKScoreInternal * _score;
    GKLeaderboardInternal * _leaderboard;
}

@property (copy, nonatomic) GKScoreInternal * score;
@property (retain, nonatomic) GKLeaderboardInternal * leaderboard;

+ (NSDictionary *)internalRepresentation;
+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (unsigned int)type;
- (GKLeaderboardInternal *)leaderboard;
- (void)setLeaderboard:(GKLeaderboardInternal *)arg0;
- (CALayer *)serverRepresentationForReceivingPlayer:(id)arg0;
- (GKScoreInternal *)score;
- (void)setScore:(GKScoreInternal *)arg0;

@end
