/* Runtime dump - GKLeaderboardScorePlayersRequest
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardScorePlayersRequest : GKLeaderboardScoreRequest
{
    NSArray * _playerInternals;
}

@property (copy, nonatomic) NSArray * playerInternals;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (GKLeaderboardScorePlayersRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (void)setPlayerInternals:(NSArray *)arg0;
- (NSArray *)playerInternals;

@end
