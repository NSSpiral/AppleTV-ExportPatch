/* Runtime dump - MPMovieTVHUDView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieTVHUDView : UIView
{
    int _currentState;
    UIImageView * _playbackMode;
    MPAVController * _player;
}

@property (retain, nonatomic) MPAVController * player;

- (void)_playbackStateDidChangeNotification:(NSNotification *)arg0;
- (void)_fadeOut;
- (void)_changeState;
- (MPMovieTVHUDView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)animationDidStop:(CAAnimation *)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(MPAVController *)arg0;
- (MPAVController *)player;

@end
