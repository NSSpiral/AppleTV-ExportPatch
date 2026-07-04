/* Runtime dump - MFFontMetricCache
 * Image: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

@interface MFFontMetricCache : NSObject
{
    NSString * _preferredSizeValidationKey;
    NSMutableDictionary * _metricCacheDictionary;
}

+ (MFFontMetricCache *)sharedFontMetricCache;

- (UIFont *)cachedFont:(NSFont *)arg0 forKey:(/* block */ id)arg1;
- (float)cachedFloat:(id)arg0 forKey:(/* block */ id)arg1;
- (char)ensureCacheIsValid;
- (void)_didReceivePreferredFontChangedNotification:(NSNotification *)arg0;
- (void)_invalidateCache;
- (void)dealloc;
- (MFFontMetricCache *)init;

@end
