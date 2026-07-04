/* Runtime dump - SASportsMatchupPlaySummary
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsMatchupPlaySummary : AceObject <SAAceSerializable>

@property (nonatomic) char appliesToAwayTeam;
@property (nonatomic) char appliesToHomeTeam;
@property (copy, nonatomic) NSString * summaryDescription;
@property (copy, nonatomic) NSString * time;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASportsMatchupPlaySummary *)matchupPlaySummary;
+ (NSDictionary *)matchupPlaySummaryWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setTime:(NSString *)arg0;
- (NSString *)time;
- (NSString *)summaryDescription;
- (NSString *)encodedClassName;
- (char)appliesToAwayTeam;
- (void)setAppliesToAwayTeam:(char)arg0;
- (char)appliesToHomeTeam;
- (void)setAppliesToHomeTeam:(char)arg0;
- (void)setSummaryDescription:(NSString *)arg0;

@end
