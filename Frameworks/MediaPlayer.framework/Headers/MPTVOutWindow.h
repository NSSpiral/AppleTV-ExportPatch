/* Runtime dump - MPTVOutWindow
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPTVOutWindow : UIWindow
{
    MPMovieTVHUDView * _hudView;
    MPVideoView * _videoView;
}

- (MPVideoView *)videoView;
- (void)_playbackStateChanged:(NSNotification *)arg0;
- (char)setVideoView:(MPVideoView *)arg0;
- (char)_setupTargetScreen:(NSObject *)arg0;
- (void)_screenModeDidChange:(NSDictionary *)arg0;
- (void)dealloc;
- (MPTVOutWindow *)init;
- (void).cxx_destruct;

@end
