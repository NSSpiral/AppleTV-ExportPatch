/* Runtime dump - GKLeaderboardInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardInternal : GKInternalRepresentation
{
    NSString * _identifier;
    NSString * _groupIdentifier;
    NSString * _title;
    NSString * _leaderboardSetIdentifier;
    NSDate * _lastSubmittedDate;
    NSDictionary * _icons;
    unsigned int _overallRank;
    unsigned int _overallRankCount;
    unsigned short _friendRank;
    unsigned short _friendRankCount;
    unsigned int _maxRank;
    NSArray * _scores;
    GKScoreInternal * _playerScore;
}

@property (retain, nonatomic) NSString * localizedTitle;
@property (retain, nonatomic) NSString * category;
@property (readonly, nonatomic) unsigned int maxRange;
@property (retain, nonatomic) NSString * identifier;
@property (retain, nonatomic) NSString * groupIdentifier;
@property (retain, nonatomic) NSString * leaderboardSetIdentifier;
@property (retain, nonatomic) NSString * title;
@property (retain, nonatomic) NSDate * lastSubmittedDate;
@property (retain, nonatomic) NSDictionary * icons;
@property (nonatomic) unsigned int overallRank;
@property (nonatomic) unsigned int overallRankCount;
@property (nonatomic) unsigned short friendRank;
@property (nonatomic) unsigned short friendRankCount;
@property (nonatomic) unsigned int maxRank;
@property (retain, nonatomic) NSArray * scores;
@property (retain, nonatomic) GKScoreInternal * playerScore;

+ (NSArray *)secureCodedPropertyKeys;

- (NSString *)groupIdentifier;
- (void)setGroupIdentifier:(NSString *)arg0;
- (void)setLocalizedTitle:(NSString *)arg0;
- (void)dealloc;
- (void)setTitle:(NSString *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setCategory:(NSString *)arg0;
- (NSString *)category;
- (NSString *)identifier;
- (NSString *)title;
- (void)setIdentifier:(NSString *)arg0;
- (NSDictionary *)icons;
- (void)setIcons:(NSDictionary *)arg0;
- (NSString *)localizedTitle;
- (NSArray *)scores;
- (void)setScores:(NSArray *)arg0;
- (GKScoreInternal *)playerScore;
- (unsigned short)friendRank;
- (void)setFriendRank:(unsigned short)arg0;
- (unsigned int)maxRank;
- (void)setMaxRank:(unsigned int)arg0;
- (NSString *)leaderboardSetIdentifier;
- (void)setLeaderboardSetIdentifier:(NSString *)arg0;
- (NSDate *)lastSubmittedDate;
- (void)setLastSubmittedDate:(NSDate *)arg0;
- (void)setPlayerScore:(GKScoreInternal *)arg0;
- (unsigned int)overallRank;
- (void)setOverallRank:(unsigned int)arg0;
- (unsigned int)overallRankCount;
- (void)setOverallRankCount:(unsigned int)arg0;
- (unsigned short)friendRankCount;
- (void)setFriendRankCount:(unsigned short)arg0;
- (unsigned int)maxRange;

@end
