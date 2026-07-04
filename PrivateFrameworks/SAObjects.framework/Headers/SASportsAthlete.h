/* Runtime dump - SASportsAthlete
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsAthlete : SASportsEntity

@property (retain, nonatomic) SASportsTeam * activeTeam;
@property (copy, nonatomic) NSArray * athleteMetadata;
@property (copy, nonatomic) NSArray * careerStatistics;
@property (copy, nonatomic) NSString * firstName;
@property (copy, nonatomic) NSArray * formattedMetadata;
@property (copy, nonatomic) NSArray * formattedMetadataTypes;
@property (copy, nonatomic) NSString * gender;
@property (copy, nonatomic) NSString * height;
@property (copy, nonatomic) NSNumber * injured;
@property (copy, nonatomic) NSString * jerseyNumber;
@property (copy, nonatomic) NSArray * lastGameStatistics;
@property (copy, nonatomic) NSString * lastName;
@property (copy, nonatomic) NSString * nickname;
@property (copy, nonatomic) NSString * position;
@property (copy, nonatomic) NSArray * previousTeams;
@property (copy, nonatomic) NSArray * statistics;
@property (copy, nonatomic) NSString * weight;

+ (SASportsAthlete *)athlete;
+ (NSDictionary *)athleteWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)nickname;
- (void)setNickname:(NSString *)arg0;
- (NSString *)groupIdentifier;
- (void)setPosition:(NSString *)arg0;
- (NSString *)position;
- (NSString *)height;
- (void)setHeight:(NSString *)arg0;
- (NSString *)weight;
- (void)setWeight:(NSString *)arg0;
- (void)setFirstName:(NSString *)arg0;
- (void)setLastName:(NSString *)arg0;
- (NSString *)firstName;
- (NSString *)lastName;
- (NSArray *)statistics;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSString *)gender;
- (void)setGender:(NSString *)arg0;
- (SASportsTeam *)activeTeam;
- (void)setActiveTeam:(SASportsTeam *)arg0;
- (NSArray *)athleteMetadata;
- (void)setAthleteMetadata:(NSArray *)arg0;
- (NSArray *)careerStatistics;
- (void)setCareerStatistics:(NSArray *)arg0;
- (NSArray *)formattedMetadata;
- (void)setFormattedMetadata:(NSArray *)arg0;
- (NSArray *)formattedMetadataTypes;
- (void)setFormattedMetadataTypes:(NSArray *)arg0;
- (NSNumber *)injured;
- (void)setInjured:(NSNumber *)arg0;
- (NSString *)jerseyNumber;
- (void)setJerseyNumber:(NSString *)arg0;
- (NSArray *)lastGameStatistics;
- (void)setLastGameStatistics:(NSArray *)arg0;
- (NSArray *)previousTeams;
- (void)setPreviousTeams:(NSArray *)arg0;
- (void)setStatistics:(NSArray *)arg0;

@end
