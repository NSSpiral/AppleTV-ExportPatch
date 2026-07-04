/* Runtime dump - ATVKeyValueStoreCleanupTask
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class ATVKeyValueStore;
@interface ATVKeyValueStoreCleanupTask : ATVBackgroundTask
{
    double _lastModifiedThreshold;
    ATVKeyValueStore * _keyValueStore;
}

- (void)setLastModifiedThreshold:(double)arg0;
- (void)dealloc;
- (char)perform;
- (void)setKeyValueStore:(ATVKeyValueStore *)arg0;

@end
