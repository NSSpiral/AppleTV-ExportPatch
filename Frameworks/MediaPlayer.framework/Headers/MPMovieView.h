/* Runtime dump - MPMovieView
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMovieView : UIView
{
    <MPMovieViewDelegate> * _delegate;
}

@property (weak, nonatomic) <MPMovieViewDelegate> * delegate;

- (void)setDelegate:(<MPMovieViewDelegate> *)arg0;
- (void)didMoveToWindow;
- (<MPMovieViewDelegate> *)delegate;
- (void)willMoveToWindow:(NSObject *)arg0;
- (void)willMoveToSuperview:(UIView *)arg0;
- (void).cxx_destruct;

@end
