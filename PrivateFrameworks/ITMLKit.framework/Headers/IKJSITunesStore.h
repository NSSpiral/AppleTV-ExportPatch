/* Runtime dump - IKJSITunesStore
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKJSITunesStore : IKJSObject <IKJSITunesStore>
{
    NSNumber * _lastAccountDSID;
    SSMetricsController * _metricsController;
    int _bagOperationLock;
    NSString * _storeFrontSuffix;
    id _ssAccountStoreChangedToken;
    id _isURLBagDidLoadToken;
    NSString * _cookieURL;
    ISLoadURLBagOperation * _pendingBagOperation;
}

@property (weak, nonatomic) ISLoadURLBagOperation * pendingBagOperation;
@property (readonly, nonatomic) NSString * DSID;
@property (readonly, nonatomic) NSDictionary * accountInfo;
@property (readonly, nonatomic) NSString * userAgent;
@property (readonly, nonatomic) NSString * networkConnectionType;
@property (retain, nonatomic) NSString * storefront;
@property (retain, nonatomic) NSString * cookieURL;
@property (retain, nonatomic) id cookie;

+ (void)setITunesStoreHeaders:(NSDictionary *)arg0;
+ (void)setHeadersForURL:(NSURL *)arg0 inRequestProperties:(NSDictionary *)arg1;
+ (NSString *)_URLBagContext;

- (void)dealloc;
- (void).cxx_destruct;
- (void)signOut;
- (void)_accountStoreChanged;
- (NSString *)userAgent;
- (NSDictionary *)accountInfo;
- (IKJSITunesStore *)initWithAppContext:(<IKApplication> *)arg0;
- (void)_bagDidLoadNotification:(NSNotification *)arg0;
- (void)_updateWithBag:(id)arg0;
- (void)_updateBag:(char)arg0;
- (id)_subscriptionStatusDictionaryWithStatus:(id)arg0 isFinal:(char)arg1;
- (void)clearCookies;
- (ISLoadURLBagOperation *)pendingBagOperation;
- (void)setPendingBagOperation:(ISLoadURLBagOperation *)arg0;
- (id)getBag;
- (void)invalidateBag;
- (NSURLRequest *)makeStoreXMLHttpRequest;
- (void)recordEvent:(NSObject *)arg0 :(id)arg1;
- (void)flushUnreportedEvents;
- (void)getServiceEligibility:(id)arg0 :(id)arg1;
- (void)loadStoreContent:(NSObject *)arg0 :(id)arg1;
- (void)evaluateScripts:(id)arg0 :(id)arg1;
- (void)authenticate:(AWDIDSRegistrationAuthenticate *)arg0 :(id)arg1;
- (void)updateServiceEligibility:(id)arg0;
- (NSString *)DSID;
- (NSString *)networkConnectionType;
- (NSString *)cookieURL;
- (void)setCookieURL:(NSString *)arg0;
- (NSString *)storefront;
- (void)setStorefront:(NSString *)arg0;
- (NSObject *)eligibilityForService:(NSObject *)arg0;
- (NSString *)cookie;
- (void)setCookie:(NSString *)arg0;

@end
