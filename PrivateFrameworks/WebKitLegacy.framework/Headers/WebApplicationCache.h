/* Runtime dump - WebApplicationCache
 * Image: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebApplicationCache : NSObject

+ (long long)maximumSize;
+ (void)setMaximumSize:(long long)arg0;
+ (void)deleteAllApplicationCaches;
+ (void)initializeWithBundleIdentifier:(NSString *)arg0;
+ (long long)defaultOriginQuota;
+ (void)setDefaultOriginQuota:(long long)arg0;
+ (long long)diskUsageForOrigin:(id)arg0;
+ (void)deleteCacheForOrigin:(id)arg0;
+ (NSCache *)originsWithCache;

@end
