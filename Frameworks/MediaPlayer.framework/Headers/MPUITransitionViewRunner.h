/* Runtime dump - MPUITransitionViewRunner
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPUITransitionViewRunner : NSObject

+ (void)performTransition:(int)arg0 withTransitionView:(NSObject *)arg1 fromViewController:(BRController *)arg2 toViewController:(BRController *)arg3 completion:(id /* block */)arg4;
+ (MPUITransitionViewRunner *)sharedInstance;

- (void)transitionViewDidComplete:(id)arg0 fromView:(UIView *)arg1 toView:(UIView *)arg2;

@end
