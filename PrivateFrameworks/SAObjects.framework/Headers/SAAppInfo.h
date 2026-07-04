/* Runtime dump - SAAppInfo
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAAppInfo : SADomainObject

@property (copy, nonatomic) NSString * appId;
@property (copy, nonatomic) NSString * appName;
@property (copy, nonatomic) NSDictionary * appNameMap;
@property (copy, nonatomic) NSString * appVersion;
@property (copy, nonatomic) NSString * carPlayAlternativeDisplayName;
@property (copy, nonatomic) NSDictionary * carPlayAlternativeDisplayNameMap;
@property (copy, nonatomic) NSString * displayAppName;
@property (copy, nonatomic) NSDictionary * displayAppNameMap;
@property (copy, nonatomic) NSNumber * isNanoApp;
@property (copy, nonatomic) NSNumber * nowPlayingAppWithBrowsableContent;
@property (copy, nonatomic) NSString * providerName;
@property (retain, nonatomic) SASiriSupport * siriSupport;
@property (copy, nonatomic) NSString * spotlightName;
@property (copy, nonatomic) NSDictionary * spotlightNameMap;
@property (retain, nonatomic) SAStarkSupport * starkSupport;
@property (copy, nonatomic) NSArray * supportedCommands;
@property (copy, nonatomic) NSArray * supportedSchemes;

+ (NSDictionary *)appInfo;
+ (NSDictionary *)appInfoWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)appName;
- (NSString *)providerName;
- (NSString *)encodedClassName;
- (NSString *)appId;
- (void)setAppId:(NSString *)arg0;
- (SAStarkSupport *)starkSupport;
- (void)setAppName:(NSString *)arg0;
- (NSDictionary *)appNameMap;
- (void)setAppNameMap:(NSDictionary *)arg0;
- (NSString *)appVersion;
- (void)setAppVersion:(NSString *)arg0;
- (NSString *)carPlayAlternativeDisplayName;
- (void)setCarPlayAlternativeDisplayName:(NSString *)arg0;
- (NSDictionary *)carPlayAlternativeDisplayNameMap;
- (void)setCarPlayAlternativeDisplayNameMap:(NSDictionary *)arg0;
- (NSString *)displayAppName;
- (void)setDisplayAppName:(NSString *)arg0;
- (NSDictionary *)displayAppNameMap;
- (void)setDisplayAppNameMap:(NSDictionary *)arg0;
- (NSNumber *)isNanoApp;
- (void)setIsNanoApp:(NSNumber *)arg0;
- (NSNumber *)nowPlayingAppWithBrowsableContent;
- (void)setNowPlayingAppWithBrowsableContent:(NSNumber *)arg0;
- (SASiriSupport *)siriSupport;
- (void)setSiriSupport:(SASiriSupport *)arg0;
- (NSString *)spotlightName;
- (void)setSpotlightName:(NSString *)arg0;
- (NSDictionary *)spotlightNameMap;
- (void)setSpotlightNameMap:(NSDictionary *)arg0;
- (void)setStarkSupport:(SAStarkSupport *)arg0;
- (NSArray *)supportedCommands;
- (void)setSupportedCommands:(NSArray *)arg0;
- (NSArray *)supportedSchemes;
- (void)setSupportedSchemes:(NSArray *)arg0;
- (void)setProviderName:(NSString *)arg0;

@end
