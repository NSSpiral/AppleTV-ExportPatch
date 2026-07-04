/* Runtime dump - SASportsAthleteComparisonSnippetItemDetails
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsAthleteComparisonSnippetItemDetails : AceObject <SAAceSerializable>

@property (retain, nonatomic) SAUIAppPunchOut * leagueAppPunchOut;
@property (retain, nonatomic) SASportsMetadata * metadata;
@property (retain, nonatomic) SAUIAppPunchOut * providerPunchOut;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SASportsAthleteComparisonSnippetItemDetails *)athleteComparisonSnippetItemDetails;
+ (NSDictionary *)athleteComparisonSnippetItemDetailsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setMetadata:(SASportsMetadata *)arg0;
- (SASportsMetadata *)metadata;
- (NSString *)encodedClassName;
- (SAUIAppPunchOut *)leagueAppPunchOut;
- (void)setLeagueAppPunchOut:(SAUIAppPunchOut *)arg0;
- (SAUIAppPunchOut *)providerPunchOut;
- (void)setProviderPunchOut:(SAUIAppPunchOut *)arg0;

@end
