/* Runtime dump - SAUIAppPunchOut
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAppPunchOut : SABaseClientBoundCommand

@property (retain, nonatomic) SAUIAddViews * alternativePunchOut;
@property (nonatomic) char appAvailableInStorefront;
@property (copy, nonatomic) NSString * appDisplayName;
@property (retain, nonatomic) SAUIImageResource * appIcon;
@property (copy, nonatomic) NSDictionary * appIconMap;
@property (nonatomic) char appInstalled;
@property (copy, nonatomic) NSURL * appStoreUri;
@property (copy, nonatomic) NSString * bundleId;
@property (copy, nonatomic) NSString * providerId;
@property (copy, nonatomic) NSString * punchOutName;
@property (copy, nonatomic) NSURL * punchOutUri;

+ (SAUIAppPunchOut *)appPunchOut;
+ (NSDictionary *)appPunchOutWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)bundleId;
- (void)setProviderId:(NSString *)arg0;
- (NSString *)providerId;
- (NSString *)encodedClassName;
- (char)requiresResponse;
- (SAUIAddViews *)alternativePunchOut;
- (void)setAlternativePunchOut:(SAUIAddViews *)arg0;
- (char)appAvailableInStorefront;
- (void)setAppAvailableInStorefront:(char)arg0;
- (NSString *)appDisplayName;
- (void)setAppDisplayName:(NSString *)arg0;
- (SAUIImageResource *)appIcon;
- (void)setAppIcon:(SAUIImageResource *)arg0;
- (NSDictionary *)appIconMap;
- (void)setAppIconMap:(NSDictionary *)arg0;
- (char)appInstalled;
- (void)setAppInstalled:(char)arg0;
- (NSURL *)appStoreUri;
- (void)setAppStoreUri:(NSURL *)arg0;
- (void)setBundleId:(NSString *)arg0;
- (NSString *)punchOutName;
- (void)setPunchOutName:(NSString *)arg0;
- (NSURL *)punchOutUri;
- (void)setPunchOutUri:(NSURL *)arg0;

@end
