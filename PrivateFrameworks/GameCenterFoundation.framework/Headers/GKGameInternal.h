/* Runtime dump - GKGameInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameInternal : GKGameDescriptor
{
    NSString * _name;
    NSDictionary * _icons;
    NSString * _defaultLeaderboardIdentifier;
    GKStoreItemInternal * _storeItem;
    id _flags;
    unsigned short _numberOfLeaderboards;
    unsigned short _numberOfLeaderboardSets;
    unsigned short _numberOfAchievements;
    unsigned short _maxAchievementPoints;
}

@property (retain, nonatomic) NSString * name;
@property (retain, nonatomic) NSDictionary * icons;
@property (nonatomic) unsigned char platform;
@property (nonatomic) char prerendered;
@property (nonatomic) char supportsLeaderboards;
@property (nonatomic) char hasAggregateLeaderboard;
@property (nonatomic) unsigned short numberOfLeaderboards;
@property (retain, nonatomic) NSString * defaultLeaderboardIdentifier;
@property (nonatomic) char supportsLeaderboardSets;
@property (nonatomic) unsigned short numberOfLeaderboardSets;
@property (nonatomic) char supportsAchievements;
@property (nonatomic) unsigned short numberOfAchievements;
@property (nonatomic) unsigned short maxAchievementPoints;
@property (nonatomic) char supportsMultiplayer;
@property (nonatomic) char supportsTurnBasedMultiplayer;
@property (nonatomic) char valid;
@property (retain, nonatomic) GKStoreItemInternal * storeItem;
@property (nonatomic) unsigned int flags;

+ (NSArray *)secureCodedPropertyKeys;

- (void)setFlags:(unsigned int)arg0;
- (GKStoreItemInternal *)storeItem;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (unsigned short)numberOfCategories;
- (char)isValid;
- (NSDictionary *)icons;
- (void)setIcons:(NSDictionary *)arg0;
- (void)setValid:(char)arg0;
- (void)setPlatform:(unsigned char)arg0;
- (NSDictionary *)serverRepresentation;
- (char)supportsLeaderboards;
- (char)supportsLeaderboardSets;
- (char)supportsAchievements;
- (char)supportsMultiplayer;
- (char)hasAggregateLeaderboard;
- (unsigned short)numberOfLeaderboardSets;
- (unsigned short)numberOfAchievements;
- (unsigned short)maxAchievementPoints;
- (char)supportsTurnBasedMultiplayer;
- (NSString *)defaultCategory;
- (void)setPrerendered:(char)arg0;
- (void)setSupportsLeaderboards:(char)arg0;
- (void)setSupportsLeaderboardSets:(char)arg0;
- (void)setHasAggregateLeaderboard:(char)arg0;
- (void)setSupportsAchievements:(char)arg0;
- (void)setSupportsMultiplayer:(char)arg0;
- (void)setSupportsTurnBasedMultiplayer:(char)arg0;
- (NSString *)defaultLeaderboardIdentifier;
- (void)setDefaultLeaderboardIdentifier:(NSString *)arg0;
- (unsigned short)numberOfLeaderboards;
- (void)setNumberOfLeaderboards:(unsigned short)arg0;
- (void)setNumberOfLeaderboardSets:(unsigned short)arg0;
- (void)setNumberOfAchievements:(unsigned short)arg0;
- (void)setMaxAchievementPoints:(unsigned short)arg0;
- (void)setStoreItem:(GKStoreItemInternal *)arg0;
- (unsigned int)flags;
- (unsigned char)platform;
- (char)isPrerendered;

@end
