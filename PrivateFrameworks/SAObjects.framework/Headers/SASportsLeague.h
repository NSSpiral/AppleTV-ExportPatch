/* Runtime dump - SASportsLeague
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsLeague : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSString * diplayedText;
@property (copy, nonatomic) NSNumber * displayTeamLocationOverName;
@property (copy, nonatomic) NSString * displayedText;
@property (copy, nonatomic) NSString * identifier;
@property (retain, nonatomic) SASportsSeason * season;
@property (copy, nonatomic) NSString * sport;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASportsLeague *)league;
+ (NSDictionary *)leagueWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)identifier;
- (void)setIdentifier:(NSString *)arg0;
- (NSString *)encodedClassName;
- (NSString *)diplayedText;
- (void)setDiplayedText:(NSString *)arg0;
- (NSNumber *)displayTeamLocationOverName;
- (void)setDisplayTeamLocationOverName:(NSNumber *)arg0;
- (NSString *)displayedText;
- (void)setDisplayedText:(NSString *)arg0;
- (SASportsSeason *)season;
- (void)setSeason:(SASportsSeason *)arg0;
- (NSString *)sport;
- (void)setSport:(NSString *)arg0;

@end
