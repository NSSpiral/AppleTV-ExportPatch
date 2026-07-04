/* Runtime dump - RUISlideShowControl
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRControl.h>

@class BRMediaPlayer, BRPhotoMediaCollection;
@interface RUISlideShowControl : BRControl
{
    BRMediaPlayer * _player;
    <BRProvider> * _provider;
    BRPhotoMediaCollection * _collection;
    char _screenSaverAutoFired;
}

- (void)_lowMemoryNotification:(NSNotification *)arg0;
- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (void)_providerUpdated:(id)arg0;
- (void)_screenSaverDataReady:(id)arg0;
- (void)_screenSaverCacheUpdated:(id)arg0;
- (void)_cupidDataClientUpdated:(id)arg0;
- (void)_setScreenSaverAutoFired:(char)arg0;
- (void)_photoDatabaseUpdated:(id)arg0;
- (void)_initiatePlaybackForMediaUpdate:(char)arg0;
- (void)_startSlideshowWithCollection:(BRPhotoMediaCollection *)arg0;
- (void)_photoPlayerVisusalsChanged:(NSNotification *)arg0;
- (void)_screenSaverDataReadyForMediaUpdate:(NSDate *)arg0;
- (void)dealloc;
- (RUISlideShowControl *)init;
- (void).cxx_destruct;

@end
