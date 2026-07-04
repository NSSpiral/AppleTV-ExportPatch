/* Runtime dump - MusicGeniusMixSentry
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>
@interface MusicGeniusMixSentry : BRSingleton
{
    char _queryPending;
    ATVDataQuery * _geniusMixSongsQuery;
    ATVDataClient * _dataClient;
}

+ (MusicGeniusMixSentry *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)_playerAssetChanged:(NSNotification *)arg0;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)enableWithQuery:(NSObject *)arg0 dataClient:(ATVDataClient *)arg1;
- (void)_geniusMixSongsQueryComplete;
- (void)_shutdownGeniusMix;
- (void)_setGeniusMixSongsQuery:(NSObject *)arg0;
- (void)dealloc;

@end
