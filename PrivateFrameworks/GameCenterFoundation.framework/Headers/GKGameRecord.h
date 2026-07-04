/* Runtime dump - GKGameRecord
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameRecord : GKGame
{
    GKPlayer * _player;
}

@property (readonly, retain) GKGameRecordInternal * internal;
@property (retain, nonatomic) GKPlayer * player;
@property (readonly, nonatomic) char played;
@property (readonly, nonatomic) NSDate * lastPlayedDate;
@property (readonly, nonatomic) NSDate * purchaseDate;
@property (readonly, nonatomic) char supportsAchievements;
@property (readonly, nonatomic) unsigned int achievements;
@property (readonly, nonatomic) unsigned int maxAchievements;
@property (readonly, nonatomic) unsigned int achievementPoints;
@property (readonly, nonatomic) unsigned int maxAchievementPoints;
@property (readonly, nonatomic) char supportsLeaderboards;
@property (readonly, nonatomic) unsigned int numberOfLeaderboards;
@property (readonly, nonatomic) unsigned int numberOfCategories;
@property (readonly, nonatomic) unsigned int rank;
@property (readonly, nonatomic) unsigned int maxRank;
@property (readonly, nonatomic) unsigned int friendRank;
@property (readonly, nonatomic) unsigned int maxFriendRank;
@property (readonly, nonatomic) char supportsLeaderboardSets;
@property (readonly, nonatomic) unsigned int numberOfLeaderboardSets;
@property (readonly, nonatomic) NSString * defaultLeaderboardIdentifier;

+ (char)supportsSecureCoding;
+ (NSCache *)internalRepresentationCache;
+ (CALayer *)cacheKeyForPlayer:(id)arg0 game:(id)arg1;
+ (CALayer *)internalRepresentationForPlayer:(id)arg0 game:(id)arg1;
+ (void)loadGameRecordsForPlayer:(id)arg0 games:(id)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)partitionGameRecords:(NSArray *)arg0 returniOS:(id *)arg1 returnMac:(id *)arg2;
+ (CALayer *)cacheKeyForPlayer:(id)arg0 internal:(GKGameRecordInternal *)arg1;
+ (void)invalidateCaches;
+ (GKGameRecord *)gameRecordForPlayer:(id)arg0 game:(id)arg1;
+ (void)loadGameRecordForPlayer:(id)arg0 game:(id)arg1 withCompletionHandler:(id /* block */)arg2;

- (void)dealloc;
- (GKGameRecord *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (GKGameRecord *)initWithInternalRepresentation:(GKGameRecordInternal *)arg0;
- (GKGameRecord *)initWithInternalRepresentation:(GKGameRecordInternal *)arg0 player:(GKPlayer *)arg1;
- (char)played;
- (void)setPlayer:(GKPlayer *)arg0;
- (GKPlayer *)player;

@end
