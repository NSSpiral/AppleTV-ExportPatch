/* Runtime dump - CoreDAVDiscoveryAccountInfo
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider>
{
    NSString * _scheme;
    NSString * _host;
    NSString * _serverRoot;
    int _port;
    NSString * _user;
    NSString * _password;
    NSData * _identityPersist;
    NSURL * _principalURL;
    NSString * _accountID;
    NSDictionary * _serverHeaders;
    NSSet * _serverComplianceClasses;
    NSString * _userAgentHeader;
    char _shouldFailAllTasks;
    char _started;
    char _success;
    NSError * _error;
    <CoreDAVAccountInfoProvider> * _backingAccountInfoProvider;
}

@property (retain, nonatomic) NSString * host;
@property (retain, nonatomic) NSString * serverRoot;
@property (retain, nonatomic) NSString * password;
@property (retain, nonatomic) NSString * user;
@property (nonatomic) int port;
@property (retain, nonatomic) NSData * identityPersist;
@property (retain, nonatomic) NSString * scheme;
@property (retain, nonatomic) NSURL * principalURL;
@property (retain, nonatomic) NSString * accountID;
@property (retain, nonatomic) NSDictionary * serverHeaders;
@property (retain, nonatomic) NSSet * serverComplianceClasses;
@property (retain, nonatomic) NSString * userAgentHeader;
@property (nonatomic) char shouldFailAllTasks;
@property (nonatomic) char started;
@property (nonatomic) char success;
@property (retain, nonatomic) NSError * error;
@property (retain, nonatomic) <CoreDAVAccountInfoProvider> * backingAccountInfoProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (char)success;
- (void)dealloc;
- (NSString *)description;
- (NSURL *)url;
- (NSString *)scheme;
- (NSString *)host;
- (int)port;
- (void)setSuccess:(char)arg0;
- (NSError *)error;
- (NSString *)accountID;
- (void)setScheme:(NSString *)arg0;
- (NSString *)password;
- (char)shouldFailAllTasks;
- (NSDictionary *)additionalHeaderValues;
- (void)setHost:(NSString *)arg0;
- (NSString *)user;
- (void)setPassword:(NSString *)arg0;
- (void)setUser:(NSString *)arg0;
- (NSString *)serverRoot;
- (void)setServerRoot:(NSString *)arg0;
- (NSString *)userAgentHeader;
- (void)setUserAgentHeader:(NSString *)arg0;
- (void)setBackingAccountInfoProvider:(<CoreDAVAccountInfoProvider> *)arg0;
- (NSDictionary *)serverHeaders;
- (NSSet *)serverComplianceClasses;
- (void)setShouldFailAllTasks:(char)arg0;
- (void)clientTokenRequestedByServer;
- (NSString *)clientToken;
- (NSObject *)oauthInfoProvider;
- (char)handleTrustChallenge:(NSObject *)arg0 withConnection:(NSURLConnection *)arg1;
- (char)handleCertificateError:(NSError *)arg0;
- (char)shouldRetryUnauthorizedConnection:(NSURLConnection *)arg0;
- (char)handleAuthenticateAgainstProtectionSpace:(NSObject *)arg0;
- (char)handleAuthenticateAgainstProtectionSpace:(NSObject *)arg0 withConnection:(NSURLConnection *)arg1;
- (char)handleShouldUseCredentialStorage;
- (char)shouldHandleHTTPCookiesForURL:(NSURL *)arg0;
- (char)shouldSendClientInfoHeaderForURL:(NSURL *)arg0;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)arg0;
- (char)shouldTurnModalOnBadPassword;
- (CoreDAVDiscoveryAccountInfo *)initWithAccountInfoProvider:(NSDictionary *)arg0;
- (void)setIdentityPersist:(NSData *)arg0;
- (void)setPrincipalURL:(NSURL *)arg0;
- (<CoreDAVAccountInfoProvider> *)backingAccountInfoProvider;
- (char)started;
- (void)setStarted:(char)arg0;
- (void)setServerHeaders:(NSDictionary *)arg0;
- (void)setServerComplianceClasses:(NSSet *)arg0;
- (void)setPort:(int)arg0;
- (NSData *)identityPersist;
- (struct __CFURLStorageSession *)copyStorageSession;
- (char)shouldUseOpportunisticSockets;
- (char)handleTrustChallenge:(NSObject *)arg0;
- (void)setAccountID:(NSString *)arg0;
- (NSURL *)principalURL;
- (void)setError:(NSError *)arg0;

@end
