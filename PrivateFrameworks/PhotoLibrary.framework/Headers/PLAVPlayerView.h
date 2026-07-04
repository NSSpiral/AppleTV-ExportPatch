/* Runtime dump - PLAVPlayerView
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLAVPlayerView : UIView
{
    unsigned int _scaleMode;
}

@property (retain, nonatomic) AVPlayer * player;
@property (nonatomic) unsigned int scaleMode;
@property (readonly, nonatomic) struct CGRect videoRect;
@property (readonly, retain, nonatomic) AVPlayerLayer * layer;

+ (Class)layerClass;

- (void)setScaleMode:(unsigned int)arg0;
- (void)setScaleMode:(unsigned int)arg0 duration:(double)arg1;
- (unsigned int)scaleMode;
- (PLAVPlayerView *)initWithFrame:(struct CGRect)arg0;
- (void)setPlayer:(AVPlayer *)arg0;
- (struct CGRect)videoRect;
- (AVPlayer *)player;

@end
