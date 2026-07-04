/* Runtime dump - SASportsSnippet
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASportsSnippet : SAUISnippet

@property (retain, nonatomic) SASportsLeague * league;
@property (retain, nonatomic) SAUIAppPunchOut * leagueAppPunchOut;
@property (retain, nonatomic) SAUIAppPunchOut * punchOut;

+ (NSString *)snippet;
+ (NSDictionary *)snippetWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (SAUIAppPunchOut *)punchOut;
- (void)setPunchOut:(SAUIAppPunchOut *)arg0;
- (SASportsLeague *)league;
- (void)setLeague:(SASportsLeague *)arg0;
- (SAUIAppPunchOut *)leagueAppPunchOut;
- (void)setLeagueAppPunchOut:(SAUIAppPunchOut *)arg0;

@end
