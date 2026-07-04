/* Runtime dump - GKAchievementChallenge
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAchievementChallenge : GKChallenge
{
    GKAchievement * _achievement;
}

@property (retain, nonatomic) GKAchievement * achievement;

+ (char)instancesRespondToSelector:(SEL)arg0;

- (void)dealloc;
- (NSString *)description;
- (GKAchievementChallenge *)initWithInternalRepresentation:(NSDictionary *)arg0;
- (void)setInternal:(GKChallengeInternal *)arg0;
- (void)setAchievement:(GKAchievement *)arg0;
- (char)detailsLoaded;
- (void)loadDetailsWithCompletionHandler:(id /* block */)arg0;
- (GKAchievement *)achievement;
- (CALayer *)detailGoalTextForPlayer:(id)arg0 withAchievement:(GKAchievement *)arg1;
- (NSString *)titleText;

@end
