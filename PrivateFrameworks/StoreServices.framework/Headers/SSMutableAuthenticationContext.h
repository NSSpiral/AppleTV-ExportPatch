/* Runtime dump - SSMutableAuthenticationContext
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSMutableAuthenticationContext : SSAuthenticationContext <SSXPCCoding, NSCopying, NSMutableCopying>

@property (copy, nonatomic) NSString * accountName;
@property int accountScope;
@property (nonatomic) char accountNameEditable;
@property (nonatomic) char allowsRetry;
@property (nonatomic) char canCreateNewAccount;
@property (nonatomic) char canSetActiveAccount;
@property (copy, nonatomic) NSString * initialPassword;
@property (nonatomic) char persistsPasswordFallback;
@property (copy, nonatomic) NSString * preferredITunesStoreClient;
@property (nonatomic) int promptStyle;
@property (copy, nonatomic) NSDictionary * requestParameters;
@property (nonatomic) char shouldCreateNewSession;
@property (nonatomic) char shouldFollowAccountButtons;
@property (nonatomic) char shouldSuppressDialogs;
@property (copy, nonatomic) NSDictionary * signupRequestParameters;
@property (retain, nonatomic) NSNumber * requiredUniqueIdentifier;
@property (copy, nonatomic) NSArray * userAgentComponents;
@property (copy, nonatomic) NSDictionary * HTTPHeaders;
@property (nonatomic) char allowsBioAuthentication;
@property (nonatomic) char allowsBootstrapCellularData;
@property (copy, nonatomic) NSString * clientIdentifierHeader;
@property (nonatomic) char demoAccount;
@property (nonatomic) char displaysOnLockScreen;
@property (nonatomic) char persistsAcrossDeviceLock;
@property (copy, nonatomic) NSString * reasonDescription;
@property (nonatomic) char shouldIgnoreProtocol;
@property (nonatomic) int tokenType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setRequestParameters:(NSDictionary *)arg0;
- (void)setDisplaysOnLockScreen:(char)arg0;
- (SSMutableAuthenticationContext *)copyWithZone:(struct _NSZone *)arg0;
- (SSMutableAuthenticationContext *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)setHTTPHeaders:(NSDictionary *)arg0;
- (void)setAccountName:(NSString *)arg0;
- (void)setInitialPassword:(NSString *)arg0;
- (void)setCanSetActiveAccount:(char)arg0;
- (void)setAccountNameEditable:(char)arg0;
- (void)setPromptStyle:(int)arg0;
- (void)setAllowsRetry:(char)arg0;
- (void)setValue:(NSObject *)arg0 forHTTPHeaderField:(id)arg1;
- (void)setDemoAccount:(char)arg0;
- (void)setAccountScope:(int)arg0;
- (void)setAllowsBootstrapCellularData:(char)arg0;
- (void)setCanCreateNewAccount:(char)arg0;
- (void)setRequiredUniqueIdentifier:(NSNumber *)arg0;
- (void)setPreferredITunesStoreClient:(NSString *)arg0;
- (void)setPersistsPasswordFallback:(char)arg0;
- (void)setShouldCreateNewSession:(char)arg0;
- (void)setShouldFollowAccountButtons:(char)arg0;
- (void)setShouldIgnoreProtocol:(char)arg0;
- (void)setShouldSuppressDialogs:(char)arg0;
- (void)setSignupRequestParameters:(NSDictionary *)arg0;
- (void)setUserAgentComponents:(NSArray *)arg0;
- (void)setAllowsBioAuthentication:(char)arg0;
- (void)setClientIdentifierHeader:(NSString *)arg0;
- (void)setPersistsAcrossDeviceLock:(char)arg0;
- (void)setReasonDescription:(NSString *)arg0;
- (void)setTokenType:(int)arg0;
- (void)setValuesWithAccount:(NSObject *)arg0;

@end
