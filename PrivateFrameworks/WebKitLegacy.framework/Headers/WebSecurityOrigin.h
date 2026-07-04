/* Runtime dump - WebSecurityOrigin
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebSecurityOrigin : NSObject
{
    WebSecurityOriginPrivate * _private;
    <WebQuotaManager> * _applicationCacheQuotaManager;
    <WebQuotaManager> * _databaseQuotaManager;
}

+ (WebSecurityOrigin *)webSecurityOriginFromDatabaseIdentifier:(NSString *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (WebSecurityOrigin *)initWithURL:(NSString *)arg0;
- (NSString *)host;
- (NSString *)stringValue;
- (<WebQuotaManager> *)databaseQuotaManager;
- (void)setQuota:(unsigned long long)arg0;
- (<WebQuotaManager> *)applicationCacheQuotaManager;
- (NEVPNProtocol *)protocol;
- (unsigned short)port;
- (WebSecurityOrigin *)_initWithWebCoreSecurityOrigin:(struct SecurityOrigin *)arg0;
- (void)finalize;
- (NSString *)toString;
- (struct SecurityOrigin *)_core;
- (unsigned long long)usage;
- (unsigned long long)quota;
- (NSString *)databaseIdentifier;

@end
