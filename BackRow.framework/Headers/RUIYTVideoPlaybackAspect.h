/* Runtime dump - RUIYTVideoPlaybackAspect
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol RUIYTPlayerControlling;

@class BRControllerStack, BRMediaPlayer, RUIYTLoadWaitController, RUIYTMediaAsset, RUIYTPlayerMemento;
@interface RUIYTVideoPlaybackAspect : NSObject <RUIYTPlayerControlling>
{
    BRControllerStack * _controllerStack;
    BRMediaPlayer * _player;
    RUIYTPlayerMemento * _playerMemento;
    RUIYTLoadWaitController * _loadWaitController;
    char _showsRelatedMenu;
    <RUIYTVideoPlaybackAspectDelegate> * _delegate;
    id _context;
}

@property (weak, nonatomic) <RUIYTVideoPlaybackAspectDelegate> * delegate;
@property (readonly) char isWaitingForMoreAssets;
@property (readonly, weak) id context;
@property (readonly, weak) RUIYTMediaAsset * currentAsset;
@property (nonatomic) char showsRelatedMenu;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)menuActionForPlayer:(BRMediaPlayer *)arg0;
- (RUIYTVideoPlaybackAspect *)initWithControllerStack:(BRControllerStack *)arg0;
- (void)setShowsRelatedMenu:(char)arg0;
- (void)playbackAsset:(NSSet *)arg0 context:(NSObject *)arg1;
- (void)playbackAssetAtIndex:(int)arg0 inPlaylist:(ATVPlaylist *)arg1 context:(NSObject *)arg2;
- (void)appendAssets:(NSArray *)arg0;
- (char)isWaitingForMoreAssets;
- (void)abandonYTPlayback;
- (void)_setPlayer:(ATVPlayer *)arg0;
- (char)_haveUserConsentForInappropriateContent;
- (NSObject *)_playerForAssetAtIndex:(int)arg0 inPlaylist:(ATVPlaylist *)arg1;
- (void)_presentPlayer;
- (void)_setWaitingForMoreAssets:(char)arg0;
- (void)resumeYTPlayback;
- (void)_finishPlaybackWithError:(NSError *)arg0;
- (void)_pushRelatedMenu;
- (char)canResumePlayback;
- (void)playYTAssetAgain:(RUIYTMediaAsset *)arg0;
- (char)showsRelatedMenu;
- (void)_mediaPlayerCurrentAssetChanged:(NSNotification *)arg0;
- (void)_mediaPlayerPlaybackEnded:(id)arg0;
- (void)_mediaPlayerStateChanged:(NSNotification *)arg0;
- (void)_mediaPlayerPlaybackError:(NSError *)arg0;
- (void)_loadMoreAssets;
- (CALayer *)_player;
- (void)dealloc;
- (void)setDelegate:(<RUIYTVideoPlaybackAspectDelegate> *)arg0;
- (<RUIYTVideoPlaybackAspectDelegate> *)delegate;
- (NSString *)context;
- (void).cxx_destruct;
- (RUIYTMediaAsset *)currentAsset;

@end
