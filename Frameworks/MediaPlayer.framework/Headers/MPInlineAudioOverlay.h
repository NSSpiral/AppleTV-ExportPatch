/* Runtime dump - MPInlineAudioOverlay
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPInlineAudioOverlay : MPPlaybackControlsView
{
    <MPVideoControllerProtocol> * _videoViewController;
    int _style;
    UIView * _backgroundView;
    MPInlineAudioTransportControls * _transportControls;
    UILabel * _streamingLabel;
    NSString * _playbackErrorDescription;
    UILabel * _playbackErrorDescriptionLabel;
}

@property (weak, nonatomic) <MPVideoControllerProtocol> * videoViewController;
@property (nonatomic) int style;
@property (copy, nonatomic) NSString * playbackErrorDescription;

- (void)setPlaybackErrorDescription:(NSString *)arg0;
- (NSString *)playbackErrorDescription;
- (void)_itemDurationDidChangeNotification:(NSNotification *)arg0;
- (void)setHidden:(char)arg0 animated:(char)arg1 completionBlock:(id /* block */)arg2;
- (<MPVideoControllerProtocol> *)videoViewController;
- (void)setVideoViewController:(<MPVideoControllerProtocol> *)arg0;
- (void)_availableRoutesDidChangeNotification:(NSNotification *)arg0;
- (unsigned long long)displayablePartsInPartMask:(unsigned long long)arg0;
- (void)reloadView;
- (id)newProgressIndicator;
- (void)_updateVisiblePartsForAvailableRoutes;
- (NSString *)_newDescriptionLabel;
- (struct CGRect)_frameInBackgroundViewForDescriptionLabel:(NSString *)arg0;
- (void)setCurrentTime:(double)arg0;
- (MPInlineAudioOverlay *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (int)style;
- (void)setStyle:(int)arg0;
- (void)setItem:(MPAVItem *)arg0;
- (void)setHidden:(char)arg0 animated:(char)arg1;
- (void).cxx_destruct;
- (void)setPlayer:(MPAVController *)arg0;

@end
