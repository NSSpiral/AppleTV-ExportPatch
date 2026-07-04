/* Runtime dump - ISStoreURLOperation
 * Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISStoreURLOperation : ISURLOperation
{
    int _activeMachineDataStyle;
    NSNumber * _authenticatedDSID;
    char _canSendGUIDParameter;
    char _ignorePreexistingSecureToken;
    char _isURLBagRequest;
    int _machineDataStyle;
    char _needsAuthentication;
    char _needsURLBag;
    SSVFairPlaySAPSession * _sapSession;
    char _shouldSendXTokenHeader;
    char _urlKnownToBeTrusted;
    char _useUserSpecificURLBag;
}

@property <ISStoreURLOperationDelegate> * delegate;
@property char canSendGUIDParameter;
@property int machineDataStyle;
@property char needsURLBag;
@property char needsAuthentication;
@property char performsMachineDataActions;
@property (retain) SSVFairPlaySAPSession * SAPSession;
@property char shouldSendXTokenHeader;
@property char useUserSpecificURLBag;
@property char urlKnownToBeTrusted;
@property (readonly) SSURLBagContext * URLBagContext;
@property (nonatomic) char ignorePreexistingSecureToken;
@property (nonatomic) char URLBagRequest;
@property (retain) NSNumber * authenticatedDSID;

+ (NSURL *)pingOperationWithUrl:(NSURL *)arg0;
+ (void)_addITunesStoreHeadersToRequest:(NSURLRequest *)arg0 withURLBag:(NSString *)arg1 accountIdentifier:(NSString *)arg2;
+ (void)_addITunesStoreHeadersToRequest:(NSURLRequest *)arg0 withURLBag:(NSString *)arg1 account:(NSObject *)arg2;
+ (ISStoreURLOperation *)_restrictionsHeaderValue;
+ (void)addITunesStoreHeadersToRequest:(NSURLRequest *)arg0 withAccountIdentifier:(NSString *)arg1;
+ (void)handleITunesStoreResponseHeaders:(NSDictionary *)arg0 withAccountIdentifier:(NSString *)arg1;
+ (NSString *)itemPingOperationWithIdentifier:(unsigned long long)arg0 urlBagKey:(NSString *)arg1;
+ (NSString *)propertyListOperationWithURLBagKey:(NSString *)arg0;

- (void)dealloc;
- (ISStoreURLOperation *)init;
- (void)run;
- (void)setNeedsAuthentication:(char)arg0;
- (void)setUrlKnownToBeTrusted:(char)arg0;
- (void)setSAPSession:(NSObject *)arg0;
- (void)setMachineDataStyle:(int)arg0;
- (void)handleResponse:(NSURLResponse *)arg0;
- (void)setNeedsURLBag:(char)arg0;
- (char)needsAuthentication;
- (int)machineDataStyle;
- (SSVFairPlaySAPSession *)SAPSession;
- (SSURLBagContext *)URLBagContext;
- (void)_setStoreFrontIdentifier:(NSString *)arg0 isTransient:(char)arg1;
- (NSString *)_copyAuthenticationContext;
- (NSURL *)newRequestWithURL:(NSURL *)arg0;
- (NSNumber *)authenticatedAccountDSID;
- (char)_processResponseData:(NSData *)arg0 error:(id *)arg1;
- (char)handleRedirectFromDataProvider:(NSObject *)arg0 error:(id *)arg1;
- (void)_willSendRequest:(NSURLRequest *)arg0;
- (char)shouldFollowRedirectWithRequest:(NSURLRequest *)arg0 returningError:(id *)arg1;
- (void)setURLBagRequest:(char)arg0;
- (char)useUserSpecificURLBag;
- (NSNumber *)_account;
- (NSNumber *)authenticatedDSID;
- (void)setAuthenticatedDSID:(NSNumber *)arg0;
- (char)_canSendTokenToURL:(NSURL *)arg0;
- (NSString *)_urlBagForContext:(NSObject *)arg0;
- (char)canSendGUIDParameter;
- (char)shouldSendXTokenHeader;
- (NSURLRequest *)_loadURLBagInterpreterWithRequest:(NSURLRequest *)arg0 requestProperties:(NSDictionary *)arg1;
- (char)ignorePreexistingSecureToken;
- (NSNumber *)_copyAuthenticationContextForAttemptNumber:(int)arg0;
- (char)_authenticateWithContext:(NSObject *)arg0 error:(id *)arg1;
- (void)_runURLOperation;
- (char)_performMachineDataRequest:(NSURLRequest *)arg0;
- (char)_isErrorTokenError:(NSError *)arg0;
- (void)setIgnorePreexistingSecureToken:(char)arg0;
- (char)urlKnownToBeTrusted;
- (char)needsURLBag;
- (NSString *)_resolvedURLInBagContext:(NSObject *)arg0 URLBag:(id *)arg1;
- (void)_addStandardQueryParametersForURL:(NSURL *)arg0;
- (char)isURLBagRequest;
- (char)performsMachineDataActions;
- (void)setCanSendGUIDParameter:(char)arg0;
- (void)setPerformsMachineDataActions:(char)arg0;
- (void)setShouldSendXTokenHeader:(char)arg0;
- (void)setUseUserSpecificURLBag:(char)arg0;

@end
