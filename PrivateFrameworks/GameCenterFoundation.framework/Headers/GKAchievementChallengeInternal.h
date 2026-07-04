/* Runtime dump - GKAchievementChallengeInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAchievementChallengeInternal : GKChallengeInternal
{
    GKAchievementInternal * _achievement;
}

@property (copy, nonatomic) GKAchievementInternal * achievement;

+ (NSDictionary *)internalRepresentation;
+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (unsigned int)type;
- (void)setAchievement:(GKAchievementInternal *)arg0;
- (GKAchievementInternal *)achievement;
- (CALayer *)serverRepresentationForReceivingPlayer:(id)arg0;

@end
