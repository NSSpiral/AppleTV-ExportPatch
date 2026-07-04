/* Runtime dump - BRMarimbaMenuView
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRMenuView.h>

@class BRControl, BRImageControl, BRMediaPlayer, BRPhotoMediaCollection;
@interface BRMarimbaMenuView : BRMenuView
{
    BRMediaPlayer * _slideshowPhotoPlayer;
    BRImageControl * _listBackgroundControl;
    BRControl * _slideshowPreview;
    BRPhotoMediaCollection * _collection;
    NSString * _nextSlideshowThemeKey;
    NSString * _newlyRequestedThemeKey;
    BRControl * _fadeThroughBlackShroudControl;
    char _themeSwitchInFlight;
    char _playerVisualsChanged;
    char _fadeThroughBlackControlNeedsLayout;
    char _loopPhotos;
}

- (void)layoutSubcontrols;
- (void)controlWasDeactivated;
- (void)controlWasActivated;
- (NSNumber *)playlistID;
- (void)_playerVisualsChanged:(NSNotification *)arg0;
- (BRMarimbaMenuView *)initWithMediaCollection:(BRPhotoMediaCollection *)arg0;
- (void)_configurePhotoLooping:(char)arg0;
- (void)_insertSlideshowPreview;
- (void)playSlideshow;
- (void)_removeSlideshowPreview;
- (void)_prepareToBeginTransitionToNewTheme;
- (void)toggleSlideshowPlayback;
- (char)switchToThemeKey:(NSString *)arg0;
- (id)currentTheme;
- (void)switchToTransition:(NSObject *)arg0;
- (id)currentTransitions;
- (void)setMusicServerID:(NSObject *)arg0 playlistID:(NSNumber *)arg1 playlistRef:(id)arg2;
- (NSObject *)musicServerID;
- (void)switchToNewMenu;
- (void)setTimePerSlide:(double)arg0;
- (void)setLoopPhotos:(char)arg0;
- (void)_marimbaLayerTransitionIsFinished:(id)arg0;
- (void)_beginTransitionToNewTheme;
- (void)_fadeOutAnimationCompleted:(id)arg0;
- (void)_finishTransitionToNewTheme;
- (void)_fadeInAnimationCompleted:(id)arg0;
- (void)setMuted:(char)arg0;
- (void)dealloc;
- (void)stopSlideshow;

@end
