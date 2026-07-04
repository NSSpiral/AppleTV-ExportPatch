/* Runtime dump - PLMoviePlayerView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLMoviePlayerView : UIView
{
    PLAVPlayerView * _avPlayerView;
    PLVideoOutBackgroundView * _videoOutView;
    PLAirPlayBackgroundView * _airPlayView;
    char _destinationPlaceholderHidden;
}

@property (readonly, retain, nonatomic) UIView * videoView;
@property (retain, nonatomic) AVPlayer * player;
@property (readonly, nonatomic) int destinationPlaceholderStyle;
@property (nonatomic) char destinationPlaceholderHidden;

- (UIView *)videoView;
- (void)setScaleMode:(unsigned int)arg0;
- (int)destinationPlaceholderStyle;
- (void)setScaleMode:(unsigned int)arg0 duration:(double)arg1;
- (PLMoviePlayerView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)setDestinationPlaceholderHidden:(char)arg0;
- (void)reattachVideoView;
- (void)_clearVideoView;
- (void)_clearAirPlayView;
- (void)_installBackgroundView:(NSObject *)arg0;
- (void)setDestinationPlaceholderStyle:(int)arg0 airPlayDeviceName:(NSString *)arg1;
- (char)isDestinationPlaceholderHidden;
- (void)setPlayer:(AVPlayer *)arg0;
- (AVPlayer *)player;

@end
