/* Runtime dump - GKAchievement
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKAchievement : NSObject <NSCopying, NSCoding, NSSecureCoding>
{
    char _showsCompletionBanner;
    char _hidden;
    GKAchievementInternal * _internal;
    GKGame * _game;
    GKPlayer * _player;
}

@property (copy, nonatomic) NSString * identifier;
@property (nonatomic) double percentComplete;
@property (readonly, nonatomic) char completed;
@property (copy, nonatomic) NSDate * lastReportedDate;
@property (nonatomic) char showsCompletionBanner;
@property (readonly, retain, nonatomic) GKPlayer * player;
@property (nonatomic) char hidden;
@property (readonly, copy, nonatomic) NSString * groupIdentifier;
@property (nonatomic) GKGame * game;
@property (retain) GKAchievementInternal * internal;
@property (copy, nonatomic) NSString * playerID;

+ (char)supportsSecureCoding;
+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKAchievement *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (void)loadAchievementsForGameV2:(id)arg0 player:(GKPlayer *)arg1 includeUnreported:(char)arg2 includeHidden:(char)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)loadAchievementsForGameV2:(id)arg0 players:(NSArray *)arg1 includeUnreported:(char)arg2 includeHidden:(char)arg3 withCompletionHandler:(id /* block */)arg4;
+ (void)reportAchievements:(id)arg0 whileScreeningChallenges:(char)arg1 withEligibleChallenges:(char)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)reportAchievements:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)loadAchievementsWithCompletionHandler:(id /* block */)arg0;
+ (void)loadAchievementWithID:(int)arg0 forGame:(GKGame *)arg1 players:(NSArray *)arg2 complete:(char)arg3;
+ (void)resetAchievementsWithCompletionHandler:(id /* block */)arg0;

- (GKAchievementInternal *)internal;
- (char)isCompleted;
- (void)dealloc;
- (GKAchievement *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isHidden;
- (char)respondsToSelector:(SEL)arg0;
- (void)setHidden:(char)arg0;
- (GKAchievement *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (GKAchievement *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (GKAchievement *)initWithIdentifier:(NSString *)arg0;
- (GKAchievement *)initWithInternalRepresentation:(GKAchievementInternal *)arg0;
- (void)setInternal:(GKAchievementInternal *)arg0;
- (GKGame *)game;
- (GKAchievement *)initWithInternalRepresentation:(GKAchievementInternal *)arg0 playerID:(NSString *)arg1;
- (void)setShowsCompletionBanner:(char)arg0;
- (char)showsCompletionBanner;
- (void)setGame:(GKGame *)arg0;
- (GKAchievement *)initWithIdentifier:(NSString *)arg0 player:(GKPlayer *)arg1;
- (GKAchievement *)initWithIdentifier:(NSString *)arg0 forPlayer:(ATVPlayer *)arg1;
- (void)reportAchievementWithCompletionHandler:(id /* block */)arg0;
- (NSString *)playerID;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;
- (GKPlayer *)player;

@end
