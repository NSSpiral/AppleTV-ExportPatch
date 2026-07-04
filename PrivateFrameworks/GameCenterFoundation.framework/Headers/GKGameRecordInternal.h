/* Runtime dump - GKGameRecordInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKGameRecordInternal : GKGameInternal
{
    GKScoreInternal * _score;
    NSDate * _lastPlayedDate;
    NSDate * _purchaseDate;
    unsigned short _achievements;
    short _achievementPoints;
    unsigned short _friendRank;
    unsigned short _maxFriendRank;
    unsigned int _rank;
    unsigned int _maxRank;
}

@property (retain, nonatomic) GKScoreInternal * score;
@property (retain, nonatomic) NSDate * lastPlayedDate;
@property (retain, nonatomic) NSDate * purchaseDate;
@property (nonatomic) unsigned short achievements;
@property (nonatomic) short achievementPoints;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short maxFriendRank;
@property (nonatomic) unsigned int rank;
@property (nonatomic) unsigned int maxRank;

+ (GKGameRecordInternal *)gameRecordForGame:(id)arg0;
+ (NSArray *)secureCodedPropertyKeys;

- (NSDate *)lastPlayedDate;
- (void)setLastPlayedDate:(NSDate *)arg0;
- (void)dealloc;
- (unsigned int)rank;
- (void)updateWithGame:(id)arg0;
- (unsigned short)achievements;
- (void)setAchievements:(unsigned short)arg0;
- (short)achievementPoints;
- (void)setAchievementPoints:(short)arg0;
- (unsigned short)friendRank;
- (void)setFriendRank:(unsigned short)arg0;
- (unsigned short)maxFriendRank;
- (void)setMaxFriendRank:(unsigned short)arg0;
- (unsigned int)maxRank;
- (void)setMaxRank:(unsigned int)arg0;
- (void)setRank:(unsigned int)arg0;
- (NSDate *)purchaseDate;
- (void)setPurchaseDate:(NSDate *)arg0;
- (GKScoreInternal *)score;
- (void)setScore:(GKScoreInternal *)arg0;

@end
