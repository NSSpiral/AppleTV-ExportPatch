/* Runtime dump - BRMediaParadeControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMediaParadeLayer, BRMediaParadeProvider;
@interface BRMediaParadeControl : BRControl
{
    BRMediaParadeLayer * _mediaParadeLayer;
    BRMediaParadeProvider * _provider;
    char _waitingForQueue;
    char _pumpPrimed;
    char _serializeArtwork;
}

- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (NSArray *)imageProxies;
- (void)setImageProxies:(NSArray *)arg0;
- (void)setSerializeArtwork:(char)arg0;
- (void)setDeletterboxAssetArtwork:(char)arg0;
- (void)_queueReady:(id)arg0;
- (void)_startFeedingWhenQueueReady;
- (void)_startFeeding;
- (void)dealloc;
- (BRMediaParadeControl *)init;

@end
