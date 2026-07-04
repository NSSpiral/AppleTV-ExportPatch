/* Runtime dump - SASportsMatchup
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMatchup : SADomainObject

@property (retain, nonatomic) SASportsEntity * awayEntity;
@property (copy, nonatomic) NSArray * awayLineScores;
@property (copy, nonatomic) NSString * awayScore;
@property (copy, nonatomic) NSNumber * awayShootoutPoints;
@property (copy, nonatomic) NSString * currentPeriod;
@property (copy, nonatomic) NSNumber * expectedLineScoreCount;
@property (copy, nonatomic) NSString * favoredEntity;
@property (retain, nonatomic) SASportsEntity * homeEntity;
@property (copy, nonatomic) NSArray * homeLineScores;
@property (copy, nonatomic) NSString * homeScore;
@property (copy, nonatomic) NSNumber * homeShootoutPoints;
@property (copy, nonatomic) NSString * line;
@property (copy, nonatomic) NSString * location;
@property (copy, nonatomic) NSString * locationName;
@property (copy, nonatomic) NSString * matchupOrder;
@property (copy, nonatomic) NSString * overUnder;
@property (copy, nonatomic) NSString * periodDescription;
@property (copy, nonatomic) NSArray * playSummaries;
@property (retain, nonatomic) SAUIAppPunchOut * punchout;
@property (copy, nonatomic) NSDate * startTime;
@property (copy, nonatomic) NSString * status;
@property (copy, nonatomic) NSString * timeRemaining;
@property (copy, nonatomic) NSNumber * timeTBD;
@property (copy, nonatomic) NSString * title;
@property (copy, nonatomic) NSString * tournamentSeriesDescription;
@property (copy, nonatomic) NSArray * tvChannels;
@property (copy, nonatomic) NSString * winningEntity;

+ (SASportsMatchup *)matchup;
+ (NSDictionary *)matchupWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTitle:(NSString *)arg0;
- (void)setStartTime:(NSDate *)arg0;
- (NSString *)title;
- (NSString *)location;
- (void)setLine:(NSString *)arg0;
- (NSString *)line;
- (NSDate *)startTime;
- (NSString *)status;
- (void)setStatus:(NSString *)arg0;
- (NSString *)timeRemaining;
- (void)setLocation:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (SAUIAppPunchOut *)punchout;
- (void)setPunchout:(SAUIAppPunchOut *)arg0;
- (SASportsEntity *)awayEntity;
- (void)setAwayEntity:(SASportsEntity *)arg0;
- (NSArray *)awayLineScores;
- (void)setAwayLineScores:(NSArray *)arg0;
- (NSString *)awayScore;
- (void)setAwayScore:(NSString *)arg0;
- (NSNumber *)awayShootoutPoints;
- (void)setAwayShootoutPoints:(NSNumber *)arg0;
- (NSString *)currentPeriod;
- (void)setCurrentPeriod:(NSString *)arg0;
- (NSNumber *)expectedLineScoreCount;
- (void)setExpectedLineScoreCount:(NSNumber *)arg0;
- (NSString *)favoredEntity;
- (void)setFavoredEntity:(NSString *)arg0;
- (SASportsEntity *)homeEntity;
- (void)setHomeEntity:(SASportsEntity *)arg0;
- (NSArray *)homeLineScores;
- (void)setHomeLineScores:(NSArray *)arg0;
- (NSString *)homeScore;
- (void)setHomeScore:(NSString *)arg0;
- (NSNumber *)homeShootoutPoints;
- (void)setHomeShootoutPoints:(NSNumber *)arg0;
- (NSString *)locationName;
- (void)setLocationName:(NSString *)arg0;
- (NSString *)matchupOrder;
- (void)setMatchupOrder:(NSString *)arg0;
- (NSString *)overUnder;
- (void)setOverUnder:(NSString *)arg0;
- (NSString *)periodDescription;
- (void)setPeriodDescription:(NSString *)arg0;
- (NSArray *)playSummaries;
- (void)setPlaySummaries:(NSArray *)arg0;
- (void)setTimeRemaining:(NSString *)arg0;
- (NSNumber *)timeTBD;
- (void)setTimeTBD:(NSNumber *)arg0;
- (NSString *)tournamentSeriesDescription;
- (void)setTournamentSeriesDescription:(NSString *)arg0;
- (NSArray *)tvChannels;
- (void)setTvChannels:(NSArray *)arg0;
- (NSString *)winningEntity;
- (void)setWinningEntity:(NSString *)arg0;

@end
