/* Runtime dump - NSHTTPCookieStorage
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPCookieStorage : NSObject
{
    NSHTTPCookieStorageInternal * _internal;
}

@property (readonly, copy) NSArray * cookies;
@property unsigned int cookieAcceptPolicy;

+ (NSHTTPCookieStorage *)aa_icloudCookies;
+ (NSHTTPCookieStorage *)sharedHTTPCookieStorage;

- (void)atv_deleteDownloadKeyCookieForURL:(NSURL *)arg0;
- (void)atv_setDownloadKeyCookieWithURL:(NSString *)arg0 downloadKey:(NSString *)arg1;
- (void)atv_deleteDownloadKeyCookies;
- (struct OpaqueCFHTTPCookieStorage *)_cookieStorage;
- (void)setCookies:(NSArray *)arg0 forURL:(NSURL *)arg1 mainDocumentURL:(NSURL *)arg2;
- (unsigned int)cookieAcceptPolicy;
- (void)setCookieAcceptPolicy:(unsigned int)arg0;
- (NSArray *)sortedCookiesUsingDescriptors:(NSArray *)arg0;
- (void)removeCookiesSinceDate:(NSDate *)arg0;
- (void)storeCookies:(id)arg0 forTask:(NSObject *)arg1;
- (void)getCookiesForTask:(NSObject *)arg0 completionHandler:(id /* block */)arg1;
- (NSString *)_initWithIdentifier:(NSString *)arg0 private:(BOOL)arg1;
- (void)_setPrivateBrowsingEnabled:(char)arg0;
- (NSURL *)_cookiesForURL:(NSURL *)arg0 mainDocumentURL:(NSURL *)arg1;
- (struct OpaqueCFHTTPCookieStorage *)_CFHTTPCookieStorage;
- (NSURL *)cookieRequestHeaderFieldsForURL:(NSURL *)arg0;
- (void)setCookiesFromResponseHeader:(NSString *)arg0 forURL:(NSURL *)arg1 policyBaseURL:(NSURL *)arg2;
- (void)_saveCookies;
- (void)dealloc;
- (NSHTTPCookieStorage *)init;
- (NSString *)description;
- (NSURL *)cookiesForURL:(NSURL *)arg0;
- (void)deleteCookie:(id)arg0;
- (NSArray *)cookies;
- (NSHTTPCookieStorage *)_initWithCFHTTPCookieStorage:(struct OpaqueCFHTTPCookieStorage *)arg0;
- (void)setCookie:(NSString *)arg0;

@end
