/* Runtime dump - BRMediaPlayerManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class BRControl, BRController, BRMediaPlayerController, BRWindow;
@interface BRMediaPlayerManager : BRSingleton
{
    NSObject<OS_dispatch_queue> * _nowPlayingQueue;
    NSMutableArray * _registrations;
    NSDictionary * _singletons;
    BRWindow * _shroudyMcShroud;
    BRWindow * _playerWindow;
    NSTimer * _popupDelay;
    NSTimer * _autoPresentTimer;
    NSTimer * _safetyTimer;
    NSTimer * _cloudMusicStopTimer;
    double _autoPresentTimeout;
    int _playerWindowState;
    char _screensaverUp;
    char _playerInOwnWindow;
    float _savedVolume;
    BRMediaPlayerController * _externallyPresentedPlayerController;
    <BRImageProxy> * _nowPlayingImageProxy;
}

@property (retain, nonatomic) BRMediaPlayerController * externallyPresentedPlayerController;
@property (retain, nonatomic) <BRImageProxy> * nowPlayingImageProxy;

+ (BRMediaPlayerManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (CALayer *)activeAudioPlayer;
- (void)endPresentation;
- (char)handleVolumeRemoteAction:(int)arg0;
- (void)registerPlayerClass:(Class)arg0;
- (CALayer *)airtunesAudioPlayer;
- (CALayer *)activePlayer;
- (void)_mediaCued:(id)arg0;
- (void)_dataClientStatusChanged:(NSNotification *)arg0;
- (void)_userActivity:(NSUserActivity *)arg0;
- (char)playerBeingPresented;
- (NSObject *)playerForATVMediaAssetAtIndex:(long)arg0 inTrackList:(NSArray *)arg1 error:(id *)arg2;
- (void)presentPlayer:(id)arg0 options:(NSDictionary *)arg1;
- (void)_playerAssetChanged:(NSNotification *)arg0;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_periodicMetadataChanged:(NSNotification *)arg0;
- (void)manageExternallyPresentedPlayerController:(BRController *)arg0;
- (NSObject *)playerForMediaAssetAtIndex:(long)arg0 inTrackList:(NSArray *)arg1 error:(id *)arg2;
- (void)presentMediaAsset:(NSSet *)arg0 options:(NSDictionary *)arg1;
- (CALayer *)videoPlayer;
- (CALayer *)audioPlayer;
- (NSSet *)playerForMediaAsset:(NSSet *)arg0 error:(id *)arg1;
- (UIWindow *)presentationWindow;
- (void)setAutoPresentTimeout:(double)arg0;
- (char)showingPlayerContent;
- (void)endPresentationWithError:(NSError *)arg0;
- (void)removePresentation;
- (void)setJavascriptOverlay:(BRControl *)arg0;
- (void)presentMediaAssetAtIndex:(long)arg0 inTrackList:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (NSObject *)playerForMediaAssetAtIndex:(long)arg0 inCollection:(RadioArtworkCollection *)arg1 error:(id *)arg2;
- (void)presentATVMediaAsset:(NSSet *)arg0 options:(NSDictionary *)arg1;
- (void)_screenSaverActivated:(id)arg0;
- (void)_screenSaverDismissed:(id)arg0;
- (void)presentATVMediaAssetAtIndex:(long)arg0 inItemList:(NSArray *)arg1 options:(NSDictionary *)arg2;
- (void)_serverStatusChanged:(NSNotification *)arg0;
- (char)presentationCanBeScreenSaver;
- (void)presentMediaAssetAtIndex:(long)arg0 inCollection:(RadioArtworkCollection *)arg1 options:(NSDictionary *)arg2;
- (void)setTransportControlDisabled:(char)arg0;
- (void)_updateCoverArt:(id)arg0;
- (CALayer *)copyNowPlayingMetadataForPlayer:(id)arg0 forMediaRemote:(char)arg1;
- (void)_playerVolumeChanged:(NSNotification *)arg0;
- (void)dismissErrorsIfNeeded;
- (void)_screenSaverWillActivate:(id)arg0;
- (void)_updateNowPlayingMetaDataTime;
- (void)_initializeMediaRemote;
- (NSObject *)_playerInstanceForAssetAtIndex:(long)arg0 inTrackList:(NSArray *)arg1;
- (NSObject *)_presentedPlayerController;
- (void)_removePlayerWindow:(char)arg0;
- (CALayer *)_presentedPlayer;
- (char)_stopCurrentPlayerUsingNewPlayer:(id)arg0;
- (void)_deferredPresentPlayerAndOptions:(NSDictionary *)arg0;
- (void)removeTrackPopup;
- (void)_addPlayerWindowForController:(BRController *)arg0;
- (void)setExternallyPresentedPlayerController:(BRMediaPlayerController *)arg0;
- (void)_simulatePresentationForController:(BRController *)arg0;
- (BRMediaPlayerController *)externallyPresentedPlayerController;
- (void)_playerControllerWasPopped:(id)arg0;
- (Class)_findRegisteredPlayerClassForType:(NSObject *)arg0 visualContent:(char)arg1;
- (NSObject *)_playerInstanceForClass:(Class)arg0;
- (void)showVolumeControlWithVolume:(float)arg0;
- (void)_updateAutoPresentPlayer;
- (CALayer *)_imageProxyForPlayer:(id)arg0;
- (void)setNowPlayingImageProxy:(<BRImageProxy> *)arg0;
- (NSObject *)_coverArtForImageProxy:(NSObject *)arg0 insertPlaceholder:(char)arg1;
- (CALayer *)_copyNowPlayingMetaDataTimeForPlayer:(id)arg0;
- (void)stopMediaPlayersWithMediaFromProvider:(NSObject *)arg0;
- (void)showVolumeControl;
- (double)autoPresentTimeout;
- (void)showPopupForPlayer:(id)arg0 timeout:(double)arg1 forceHideTransport:(char)arg2;
- (<BRImageProxy> *)nowPlayingImageProxy;
- (int)_calculateAccessModeForExtrasAsset:(NSSet *)arg0;
- (void)_cloudMusicStopTimerFired:(id)arg0;
- (void)_updateNowPlayingMetaDataWithImage:(UIImage *)arg0;
- (void)_removeShroudWindow;
- (void)_safetyTimerFired:(id)arg0;
- (void)_addShroudWindowWithSelector:(SEL)arg0;
- (void)_removeShroudWindowWithAnimation;
- (void)_playerStackBankrupt:(id)arg0;
- (void)_playerControllerUserEvent:(NSObject *)arg0;
- (void)_playerControllerWasPushed:(id)arg0;
- (void)_removePlayerWindowUnderShroud;
- (void)_addPlayerWindowUnderShroud;
- (void)_showTrackPopupForPlayer:(id)arg0;
- (void)_showTrackPopupWithDelayForPlayer:(id)arg0;
- (void)_popupDelayTimerFired:(id)arg0;
- (void)_updateTrackPopupForPlayer:(id)arg0;
- (CALayer *)_autoPresentPlayer;
- (void)_autoPresentTimerFired:(id)arg0;
- (void)dealloc;
- (BRMediaPlayerManager *)init;
- (void)_networkStatusChanged:(NSNotification *)arg0;

@end
