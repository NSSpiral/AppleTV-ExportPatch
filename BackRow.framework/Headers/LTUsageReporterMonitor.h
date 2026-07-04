/* Runtime dump - LTUsageReporterMonitor
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface LTUsageReporterMonitor : BRSingleton
{
    <BRMediaAsset> * _currentAsset;
    unsigned int _playbackStalledCount;
}

+ (LTUsageReporterMonitor *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)_currentAssetPlaybackStalled:(id)arg0;
- (void)_currentAssetPlaybackChanged:(NSNotification *)arg0;
- (void)_homeSharesChanged:(NSNotification *)arg0;
- (void)_resetPlaybackStalledCountAndAssetFromPlayerIfNeeded:(id)arg0;
- (void)dealloc;
- (LTUsageReporterMonitor *)init;
- (void).cxx_destruct;

@end
