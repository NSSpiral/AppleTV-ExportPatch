/* Runtime dump - CAMPanoramaArrowView
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMPanoramaArrowView : UIView
{
    UIImageView * _arrowHead;
    UIView * _arrowTail;
    CAShapeLayer * _arrowTailPiecesLayer;
    struct CGPath * _currentTailPiecesPath;
    struct CGRect _arrowTailRect;
    float _currentNormalizedSpeed;
    float _tailBiggestDelta;
    float _tailBigDelta;
    float _tailMediumDelta;
    float _tailSmallDelta;
}

- (CAMPanoramaArrowView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (struct CGPath *)_newTailPiecesPathOfWidth:(float *)arg0;
- (void)_updateTailWithAnimationDuration:(double)arg0;
- (void)resetArrow;
- (void)animateArrowSpeedWithNormalizedSpeed:(float)arg0 duration:(double)arg1;

@end
