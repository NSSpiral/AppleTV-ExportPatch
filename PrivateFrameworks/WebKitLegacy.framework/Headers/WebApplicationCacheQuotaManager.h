/* Runtime dump - WebApplicationCacheQuotaManager
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager>
{
    WebSecurityOrigin * _origin;
}

- (WebSecurityOrigin *)origin;
- (void)setQuota:(unsigned long long)arg0;
- (WebApplicationCacheQuotaManager *)initWithOrigin:(WebSecurityOrigin *)arg0;
- (unsigned long long)usage;
- (unsigned long long)quota;

@end
