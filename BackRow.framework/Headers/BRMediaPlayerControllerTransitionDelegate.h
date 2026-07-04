/* Runtime dump - BRMediaPlayerControllerTransitionDelegate
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRMediaPlayerController;
@interface BRMediaPlayerControllerTransitionDelegate : NSObject
{
    BRMediaPlayerController * _controller;
}

- (BRMediaPlayerControllerTransitionDelegate *)initWithController:(BRMediaPlayerController *)arg0;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (void)setController:(BRMediaPlayerController *)arg0;

@end
