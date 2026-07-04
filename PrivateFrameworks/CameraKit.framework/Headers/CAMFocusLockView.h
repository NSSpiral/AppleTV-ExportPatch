/* Runtime dump - CAMFocusLockView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFocusLockView : CAMFocusView
{
    CAKeyframeAnimation * _lockBoundsAnimation;
}

- (void).cxx_destruct;
- (double)fadeInDuration;
- (void)startAnimatingContents:(char)arg0 bounds:(char)arg1 fadeIn:(char)arg2;
- (NSObject *)_createBoundsAnimation;
- (NSObject *)_createLockBoundsAnimation;
- (void)animateLock;
- (void)animateScaleDownWithCompletion:(id /* block */)arg0;

@end
