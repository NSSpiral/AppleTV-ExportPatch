/* Runtime dump - WebDatabaseQuotaManager
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebDatabaseQuotaManager : NSObject <WebQuotaManager>
{
    WebSecurityOrigin * _origin;
}

- (WebSecurityOrigin *)origin;
- (void)setQuota:(unsigned long long)arg0;
- (WebDatabaseQuotaManager *)initWithOrigin:(WebSecurityOrigin *)arg0;
- (unsigned long long)usage;
- (unsigned long long)quota;

@end
