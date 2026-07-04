/* Runtime dump - ATVScreenSaverPrefetchTask
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface ATVScreenSaverPrefetchTask : ATVBackgroundTask
{
    int _index;
    NSArray * _assets;
    NSMutableArray * _loadingIDs;
    NSMutableDictionary * _loadingProxies;
    NSMutableDictionary * _metadata;
    int _loadAttemptCount;
    NSDictionary * _userInfo;
}

@property (copy, nonatomic) NSDictionary * userInfo;

- (void)_imageLoadFailed:(id)arg0;
- (void)_startPrefetchForItems:(NSArray *)arg0;
- (void)_screenSaverDataReady:(id)arg0;
- (void)_imageWriteSucceeded:(id)arg0;
- (void)_prefetch;
- (void)_updateMetadataCacheWithMetadata:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (char)isActive;
- (void)setUserInfo:(NSDictionary *)arg0;
- (void)stop;
- (NSDictionary *)userInfo;
- (char)perform;
- (void)_reset;

@end
