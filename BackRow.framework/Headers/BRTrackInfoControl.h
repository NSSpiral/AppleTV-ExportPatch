/* Runtime dump - BRTrackInfoControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMediaPlayer, BRTrackInfoLayer;
@interface BRTrackInfoControl : BRControl
{
    BRTrackInfoLayer * _trackInfoLayer;
    BRMediaPlayer * _player;
    NSString * _lastAssetID;
    <BRImageProxy> * _imageProxy;
}

- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_playbackAssetChanged:(NSNotification *)arg0;
- (void)_updateTrackInfo;
- (char)accessibilityOutputsRange;
- (void)_updateCoverArt:(id)arg0;
- (id)_fetchCoverArt;
- (char)_supportsShowingArtist:(id)arg0;
- (char)_supportsShowingPrimaryCollectionTitle:(NSString *)arg0;
- (char)_supportsShowingDescription:(NSString *)arg0;
- (void)dealloc;
- (BRTrackInfoControl *)init;
- (NSString *)accessibilityLabel;
- (void)setPlayer:(BRMediaPlayer *)arg0;
- (BRMediaPlayer *)player;

@end
