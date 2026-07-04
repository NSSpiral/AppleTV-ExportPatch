/* Runtime dump - SSAuthenticationContext
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSAuthenticationContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying>
{
    NSString * _accountName;
    char _accountNameEditable;
    int _accountScope;
    char _allowsBioAuthentication;
    char _allowsBootstrapCellularData;
    char _allowsRetry;
    char _canCreateNewAccount;
    char _canSetActiveAccount;
    NSString * _clientIdentifierHeader;
    char _demoAccount;
    char _displaysOnLockScreen;
    NSDictionary * _httpHeaders;
    NSString * _initialPassword;
    char _persistsAcrossDeviceLock;
    char _persistsPasswordFallback;
    NSString * _preferredITunesStoreClient;
    int _promptStyle;
    NSString * _reasonDescription;
    NSDictionary * _requestParameters;
    NSNumber * _requiredUniqueIdentifier;
    char _shouldCreateNewSession;
    char _shouldFollowAccountButtons;
    char _shouldIgnoreProtocol;
    char _shouldSuppressDialogs;
    NSDictionary * _signupRequestParameters;
    int _tokenType;
    NSArray * _userAgentComponents;
}

@property (readonly, copy, nonatomic) NSString * accountName;
@property (readonly) int accountScope;
@property (readonly, nonatomic) char accountNameEditable;
@property (readonly, nonatomic) char allowsRetry;
@property (readonly, nonatomic) char canCreateNewAccount;
@property (readonly, nonatomic) char canSetActiveAccount;
@property (readonly, copy, nonatomic) NSDictionary * HTTPHeaders;
@property (readonly, copy, nonatomic) NSString * initialPassword;
@property (readonly, nonatomic) char persistsPasswordFallback;
@property (readonly, copy, nonatomic) NSString * preferredITunesStoreClient;
@property (readonly, nonatomic) int promptStyle;
@property (readonly, copy, nonatomic) NSDictionary * requestParameters;
@property (readonly, retain, nonatomic) NSNumber * requiredUniqueIdentifier;
@property (readonly, nonatomic) char shouldCreateNewSession;
@property (readonly, nonatomic) char shouldFollowAccountButtons;
@property (readonly, nonatomic) char shouldSuppressDialogs;
@property (readonly, copy, nonatomic) NSDictionary * signupRequestParameters;
@property (readonly, copy, nonatomic) NSArray * userAgentComponents;
@property (readonly, nonatomic) char allowsBioAuthentication;
@property (readonly, nonatomic) char allowsBootstrapCellularData;
@property (readonly, copy, nonatomic) NSString * clientIdentifierHeader;
@property (readonly, nonatomic) char displaysOnLockScreen;
@property (readonly, nonatomic) char demoAccount;
@property (readonly, nonatomic) char persistsAcrossDeviceLock;
@property (readonly, copy, nonatomic) NSString * reasonDescription;
@property (readonly, nonatomic) char shouldIgnoreProtocol;
@property (readonly, nonatomic) int tokenType;
@property (readonly, nonatomic) SSURLBagContext * URLBagContext;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (SSAuthenticationContext *)contextForSignIn;

- (SSAuthenticationContext *)initWithAccountIdentifier:(NSString *)arg0;
- (NSDictionary *)copyXPCEncoding;
- (SSAuthenticationContext *)initWithXPCEncoding:(NSString *)arg0;
- (void)dealloc;
- (SSAuthenticationContext *)init;
- (NSString *)description;
- (SSAuthenticationContext *)copyWithZone:(struct _NSZone *)arg0;
- (SSAuthenticationContext *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)HTTPHeaders;
- (NSString *)accountName;
- (int)promptStyle;
- (NSString *)initialPassword;
- (SSAuthenticationContext *)initWithAccount:(ACAccount *)arg0;
- (char)displaysOnLockScreen;
- (char)isDemoAccount;
- (int)accountScope;
- (char)_allowCreateAccount;
- (NSString *)_initSSAuthenticationContext;
- (char)allowsBootstrapCellularData;
- (void)_copyIvarsToCopy:(id)arg0 withZone:(struct _NSZone *)arg1;
- (NSNumber *)requiredUniqueIdentifier;
- (SSURLBagContext *)URLBagContext;
- (char)isAccountNameEditable;
- (char)allowsBioAuthentication;
- (char)allowsRetry;
- (char)canCreateNewAccount;
- (char)canSetActiveAccount;
- (NSString *)clientIdentifierHeader;
- (char)persistsAcrossDeviceLock;
- (char)persistsPasswordFallback;
- (NSString *)preferredITunesStoreClient;
- (NSString *)reasonDescription;
- (NSDictionary *)requestParameters;
- (char)shouldCreateNewSession;
- (char)shouldFollowAccountButtons;
- (char)shouldIgnoreProtocol;
- (char)shouldSuppressDialogs;
- (NSDictionary *)signupRequestParameters;
- (int)tokenType;
- (NSArray *)userAgentComponents;

@end
