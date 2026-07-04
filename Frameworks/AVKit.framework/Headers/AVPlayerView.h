/* Runtime dump - AVPlayerView
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVPlayerView : UIView
{
    int _viewWindowState;
}

@property (readonly, nonatomic) int viewWindowState;

- (int)viewWindowState;
- (void)_updateViewWindowState;
- (void)didMoveToWindow;
- (void)setFrame:(struct CGRect)arg0;
- (void)willMoveToWindow:(NSObject *)arg0;

@end
