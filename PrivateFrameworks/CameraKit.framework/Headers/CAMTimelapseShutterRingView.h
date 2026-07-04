/* Runtime dump - CAMTimelapseShutterRingView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMTimelapseShutterRingView : UIView
{
    char _animating;
    CALayer * __smallTickLayer;
    CALayer * __largeTickLayer;
    CAReplicatorLayer * __smallTickReplicatorLayer;
    CAReplicatorLayer * __largeTickReplicatorLayer;
    CALayer * __timerHandLayer;
    CALayer * __timerHandParentLayer;
}

@property (nonatomic) char animating;
@property (readonly, nonatomic) CALayer * _smallTickLayer;
@property (readonly, nonatomic) CALayer * _largeTickLayer;
@property (readonly, nonatomic) CAReplicatorLayer * _smallTickReplicatorLayer;
@property (readonly, nonatomic) CAReplicatorLayer * _largeTickReplicatorLayer;
@property (readonly, nonatomic) CALayer * _timerHandLayer;
@property (readonly, nonatomic) CALayer * _timerHandParentLayer;

- (CAMTimelapseShutterRingView *)initWithFrame:(struct CGRect)arg0;
- (struct CGSize)sizeThatFits:(struct CGSize)arg0;
- (void)layoutSublayersOfLayer:(CALayer *)arg0;
- (char)isAnimating;
- (void)setAnimating:(char)arg0;
- (void)_stopAnimating;
- (void)_startAnimating;
- (void).cxx_destruct;
- (void)_removeStartAnimations;
- (void)_removeStopAnimations;
- (void)_addStartAnimations;
- (void)_addStopAnimations;
- (char)_shouldUseAnimations;
- (float)_rotationZFromTransform:(struct CATransform3D)arg0;
- (CALayer *)_smallTickLayer;
- (CALayer *)_largeTickLayer;
- (CAReplicatorLayer *)_smallTickReplicatorLayer;
- (CAReplicatorLayer *)_largeTickReplicatorLayer;
- (CALayer *)_timerHandLayer;
- (CALayer *)_timerHandParentLayer;

@end
