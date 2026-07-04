/* Runtime dump - ATVAppPlayerViewController
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol ATVAppViewController;
@protocol ATVMusicStoreAcquisitionControllerDelegate;
@protocol IKAppPlayerDelegate;

@class ATVAppAVAsset, ATVFeedElement, ATVMusicStoreAcquisitionController, BRControl, BRViewController;
@interface ATVAppPlayerViewController : NSObject <ATVMusicStoreAcquisitionControllerDelegate, IKAppPlayerDelegate, ATVAppViewController>
{
    char _playerHooksConfigured;
    char _playerSessionActive;
    BRViewController * _parentController;
    IKPlaylistElement * _playlistElement;
    IKAppDOMPlayer * _appPlayer;
    NSArray * _avItems;
    ATVAppAVAsset * _iTunesAssetBeingAcquired;
    ATVMusicStoreAcquisitionController * _acquisitionController;
    unsigned int _activeSceneIndex;
    unsigned int _lastSceneStateChangedToPlaying;
    double _lastElapsedTime;
}

@property (retain, nonatomic) IKPlaylistElement * playlistElement;
@property (retain, nonatomic) IKAppDOMPlayer * appPlayer;
@property (retain, nonatomic) NSArray * avItems;
@property (retain, nonatomic) ATVAppAVAsset * iTunesAssetBeingAcquired;
@property (weak, nonatomic) ATVMusicStoreAcquisitionController * acquisitionController;
@property (nonatomic) char playerHooksConfigured;
@property (nonatomic) char playerSessionActive;
@property (nonatomic) unsigned int activeSceneIndex;
@property (nonatomic) unsigned int lastSceneStateChangedToPlaying;
@property (nonatomic) double lastElapsedTime;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (weak, nonatomic) BRViewController * parentController;

- (void)_playerAssetChanged:(NSNotification *)arg0;
- (void)_playerStateChanged:(NSNotification *)arg0;
- (void)_playerProgressChanged:(NSNotification *)arg0;
- (IKAudioElement *)backgroundAudio;
- (void)loadWithCompletion:(id /* block */)arg0;
- (void)updateWithViewElement:(ATVFeedElement *)arg0;
- (void)_playerWillStop:(id)arg0;
- (NSDictionary *)acquisitionController:(ATVMusicStoreAcquisitionController *)arg0 willPresentPlayerWithItem:(ATVDataItem *)arg1 playerOptions:(NSDictionary *)arg2;
- (void)_playerTimeSkipped:(id)arg0;
- (void)_playerAssetWillChange:(NSDictionary *)arg0;
- (ATVMusicStoreAcquisitionController *)acquisitionController;
- (char)isPlayerHooksConfigured;
- (void)setPlaylistElement:(IKPlaylistElement *)arg0;
- (void)setAppPlayer:(IKAppDOMPlayer *)arg0;
- (void)setAvItems:(NSArray *)arg0;
- (NSArray *)avItems;
- (NSObject *)_iTunesAssetForItem:(NSObject *)arg0;
- (void)_acquireItem:(NSObject *)arg0 withITunesAsset:(NSSet *)arg1;
- (void)_playItems:(NSArray *)arg0;
- (IKDOMElement *)_currentAVMediaElement;
- (void)setAcquisitionController:(ATVMusicStoreAcquisitionController *)arg0;
- (ATVAppAVAsset *)iTunesAssetBeingAcquired;
- (void)setITunesAssetBeingAcquired:(ATVAppAVAsset *)arg0;
- (void)setActiveSceneIndex:(unsigned int)arg0;
- (void)_updateDataWithScene:(NSObject *)arg0 appAsset:(NSSet *)arg1 dataItem:(ATVDataItem *)arg2;
- (void)_configurePlayerHooks:(char)arg0 handleScenes:(char)arg1;
- (void)setPlayerHooksConfigured:(char)arg0;
- (char)isPlayerSessionActive;
- (void)setPlayerSessionActive:(char)arg0;
- (IKPlaylistElement *)playlistElement;
- (void)_sendPlayerStateChangeWithPlayer:(id)arg0 state:(int)arg1;
- (unsigned int)activeSceneIndex;
- (void)setLastElapsedTime:(double)arg0;
- (void)_selectNewSceneForPlayer:(id)arg0 appAsset:(NSSet *)arg1 dataItem:(ATVDataItem *)arg2 forwardDirection:(char)arg3;
- (unsigned int)lastSceneStateChangedToPlaying;
- (void)setLastSceneStateChangedToPlaying:(unsigned int)arg0;
- (double)lastElapsedTime;
- (void)dealloc;
- (BRControl *)view;
- (void).cxx_destruct;
- (IKAppDOMPlayer *)appPlayer;
- (IKMediaElement *)currentAVMediaElementForPlayer:(IKAppDOMPlayer *)arg0;
- (void)setParentController:(BRViewController *)arg0;
- (BRViewController *)parentController;

@end
