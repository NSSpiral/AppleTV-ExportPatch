/* Runtime dump - MPVideoPlaybackBackgroundView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPVideoPlaybackBackgroundView : UIView
{
    UIImageView * _imageView;
    UILabel * _titleLabel;
    UILabel * _subtitleLabel;
    struct UIEdgeInsets _edgeInsets;
    MPAVController * _player;
}

@property (retain, nonatomic) MPAVController * player;
@property (nonatomic) struct UIEdgeInsets edgeInsets;

- (void)_isExternalPlaybackActiveDidChange:(NSDictionary *)arg0;
- (void)_activeAudioRouteDidChange:(NSDictionary *)arg0;
- (UIImage *)_imageNamed:(id)arg0;
- (void)_videoViewDidMoveToWindow:(NSObject *)arg0;
- (void)_updateDisplay;
- (MPVideoPlaybackBackgroundView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void)layoutSubviews;
- (struct UIEdgeInsets)edgeInsets;
- (void)setEdgeInsets:(struct UIEdgeInsets)arg0;
- (void).cxx_destruct;
- (void)setPlayer:(MPAVController *)arg0;
- (MPAVController *)player;

@end
