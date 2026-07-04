/* Runtime dump - PLTVOutWindow
 * Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@interface PLTVOutWindow : UIWindow
{
    UIView * _backgroundView;
    UIView * _videoView;
}

- (UIView *)videoView;
- (char)setVideoView:(UIView *)arg0;
- (char)_setupTargetScreen:(NSObject *)arg0;
- (void)dealloc;
- (PLTVOutWindow *)init;

@end
