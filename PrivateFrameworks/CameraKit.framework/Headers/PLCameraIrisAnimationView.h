/* Runtime dump - PLCameraIrisAnimationView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface PLCameraIrisAnimationView : UIView
{
    char shouldSetupAnimationInDidMoveToWindow;
    id irisAnimationDelegate;
    SEL irisAnimationDidStopSelector;
    double irisAnimationDuration;
    struct CGPoint irisAnimationPosition;
}

@property (nonatomic) id irisAnimationDelegate;
@property (nonatomic) SEL irisAnimationDidStopSelector;
@property (nonatomic) double irisAnimationDuration;
@property (nonatomic) struct CGPoint irisAnimationPosition;
@property (nonatomic) char shouldSetupAnimationInDidMoveToWindow;

- (void)dealloc;
- (void)didMoveToWindow;
- (void)setIrisAnimationDelegate:(NSObject *)arg0;
- (void)setIrisAnimationDidStopSelector:(SEL)arg0;
- (NSObject *)irisAnimationDelegate;
- (SEL)irisAnimationDidStopSelector;
- (double)irisAnimationDuration;
- (struct CGPoint)irisAnimationPosition;
- (void)setupAnimation;
- (char)shouldSetupAnimationInDidMoveToWindow;
- (void)unpauseIrisAnimation;
- (void)pauseIrisAnimation;
- (void)animateIrisOpen;
- (void)setIrisAnimationDuration:(double)arg0;
- (void)setIrisAnimationPosition:(struct CGPoint)arg0;
- (void)setShouldSetupAnimationInDidMoveToWindow:(char)arg0;

@end
