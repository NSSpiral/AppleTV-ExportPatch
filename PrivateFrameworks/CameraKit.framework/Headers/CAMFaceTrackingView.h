/* Runtime dump - CAMFaceTrackingView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMFaceTrackingView : CAMFocusView
{
    char _isInFrame;
}

@property (nonatomic) char isInFrame;

- (CAMFaceTrackingView *)init;
- (void)fadeOut;
- (void)fadeIn;
- (double)fadeOutDuration;
- (void)_loadImagesWithColor:(UIColor *)arg0 imageSize:(struct CGSize *)arg1;
- (NSObject *)_createContentsAnimation;
- (NSObject *)_createBoundsAnimation;
- (void)setIsInFrame:(char)arg0;
- (char)isInFrame;
- (void)animateToFrame:(struct CGRect)arg0;

@end
