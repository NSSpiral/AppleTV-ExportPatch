/* Runtime dump - GKLeaderboardScoreRangeRequest
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardScoreRangeRequest : GKLeaderboardScoreRequest
{
    struct _NSRange _range;
}

@property (nonatomic) struct _NSRange range;

+ (char)supportsSecureCoding;

- (GKLeaderboardScoreRangeRequest *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (struct _NSRange)range;
- (void)setRange:(struct _NSRange)arg0;

@end
