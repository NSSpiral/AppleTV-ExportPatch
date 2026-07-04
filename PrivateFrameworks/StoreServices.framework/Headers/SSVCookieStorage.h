/* Runtime dump - SSVCookieStorage
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVCookieStorage : NSObject
{
    SSSQLiteDatabase * _db;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSURL * _storageLocation;
}

@property (readonly) NSURL * storageLocation;

+ (SSVCookieStorage *)sharedInstance;
+ (SSVCookieStorage *)sharedStorage;
+ (char)_setupCookieDatabase:(id)arg0;

- (void)dealloc;
- (SSVCookieStorage *)init;
- (void)setCookiesForHTTPResponse:(NSURLResponse *)arg0 userIdentifier:(NSNumber *)arg1;
- (NSURL *)cookieHeadersForURL:(NSURL *)arg0 userIdentifier:(NSNumber *)arg1;
- (NSString *)allCookiesForUserIdentifier:(NSString *)arg0;
- (SSVCookieStorage *)initWithStorageLocation:(NSURL *)arg0;
- (NSString *)_copyCookiesWithUserIdentifier:(NSNumber *)arg0;
- (NSURL *)_copyCookieDictionaryForURL:(NSURL *)arg0 userIdentifier:(NSNumber *)arg1;
- (NSObject *)_columnNameForCookieProperty:(NSObject *)arg0;
- (char)_bindStatement:(struct sqlite3_stmt *)arg0 withValues:(NSArray *)arg1;
- (void)_insertCookies:(id)arg0 forUserIdentifier:(NSString *)arg1;
- (void)setCookies:(NSMutableArray *)arg0 forUserIdentifier:(NSString *)arg1;
- (NSString *)_allUserIdentifiers;
- (NSURL *)_copyPrivateCookiesForURL:(NSURL *)arg0 userIdentifier:(NSNumber *)arg1;
- (void)_bindInsertStatement:(struct sqlite3_stmt *)arg0 forCookie:(TSWPInteriorCookie *)arg1 userIdentifier:(NSNumber *)arg2;
- (NSURL *)cookiesForURL:(NSURL *)arg0 userIdentifier:(NSNumber *)arg1;
- (void)removeAllCookies;
- (void)removeCookiesWithProperties:(NSDictionary *)arg0;
- (void)setCookiesFromCookieStorage:(id)arg0;
- (NSURL *)storageLocation;
- (void)synchronizeCookies;

@end
