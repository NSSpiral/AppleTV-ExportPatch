/* Runtime dump - AVFullScreenViewController
 * Image: /System/Library/Frameworks/AVKit.framework/AVKit
 */

@interface AVFullScreenViewController : UIViewController
{
    id _statusBarWasHidden;
}

- (void)dealloc;
- (char)prefersStatusBarHidden;
- (AVFullScreenViewController *)initWithNibName:(NSString *)arg0 bundle:(NSObject *)arg1;
- (void)viewDidAppear:(char)arg0;
- (void)viewWillDisappear:(char)arg0;
- (char)modalPresentationCapturesStatusBarAppearance;

@end
