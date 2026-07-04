/* Runtime dump - GKGame
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGame : NSObject <NSCoding, NSSecureCoding>
{
    GKGameInternal * _internal;
    int _environment;
}

@property (retain, nonatomic) NSString * reason;
@property (retain, nonatomic) NSString * engineID;
@property (readonly, nonatomic) char isGameRecommendation;
@property (retain) GKGameInternal * internal;
@property (nonatomic) char prerendered;
@property (nonatomic) int environment;
@property (readonly, nonatomic) NSDictionary * gameDescriptor;
@property (readonly, nonatomic) NSNumber * adamID;
@property (readonly, nonatomic) NSNumber * externalVersion;
@property (readonly, nonatomic) NSString * bundleIdentifier;
@property (readonly, nonatomic) NSString * bundleVersion;
@property (readonly, nonatomic) NSString * cacheKey;
@property (nonatomic) unsigned char platform;
@property (readonly, nonatomic) NSString * name;
@property (readonly, nonatomic) NSString * defaultCategory;
@property (retain, nonatomic) GKStoreItemInternal * storeItem;
@property (readonly, nonatomic) struct GKGameInfo gameInfo;
@property (readonly, nonatomic) char supportsMultiplayer;
@property (readonly, nonatomic) char supportsTurnBasedMultiplayer;
@property (readonly, nonatomic) char installedGame;
@property (readonly, nonatomic) char downloading;

+ (char)supportsSecureCoding;
+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKGame *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (GKGame *)currentGame;
+ (char)isGameCenter;
+ (char)isPreferences;
+ (GKGame *)currentGameIncludingGameCenter:(char)arg0;
+ (void)setCurrentGameFromInternal:(id)arg0 serverEnvironment:(int)arg1;
+ (void)loadGamesWithBundleIDs:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)loadTopGamesWithCompletionHandler:(id /* block */)arg0;
+ (void)updateGames:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)markGameRecommendationsDisplayed:(id)arg0 complete:(char)arg1;
+ (void)markGameRecommendationsViewed:(id)arg0 complete:(char)arg1;

- (GKGameInternal *)internal;
- (char)isInstalled;
- (void)dealloc;
- (GKGame *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (GKGame *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (int)environment;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (GKGame *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (NSString *)cacheKey;
- (void)setEnvironment:(int)arg0;
- (char)isGameCenter;
- (GKGame *)initWithInternalRepresentation:(GKGameInternal *)arg0;
- (void)setInternal:(GKGameInternal *)arg0;
- (NSDictionary *)gameDescriptor;
- (struct GKGameInfo)gameInfo;
- (char)isStoreItemUnexpired;
- (void)loadGameRatingWithCompletionHandler:(id /* block */)arg0;
- (void)submitRating:(float)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)getFriendPlayersIncludingCompatibleGames:(char)arg0 handler:(id /* block */)arg1;
- (void)getFriendPlayersForLeaderboard:(id)arg0 handler:(id /* block */)arg1;
- (void)getFriendPlayersForAchievement:(id)arg0 handler:(id /* block */)arg1;
- (char)isGameRecommendation;
- (void)loadTellAFriendMessageWithCompletionHandler:(id /* block */)arg0;
- (char)isDownloading;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
