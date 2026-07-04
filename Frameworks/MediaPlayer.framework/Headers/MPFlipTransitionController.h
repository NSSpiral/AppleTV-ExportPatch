/* Runtime dump - MPFlipTransitionController
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPFlipTransitionController : MPTransitionController
{
    UIView * _fromView;
    struct CGRect _toFrame;
    float _topMargin;
}

@property (retain, nonatomic) UIView * fromView;
@property (nonatomic) struct CGRect toFrame;
@property (nonatomic) float topMargin;

- (void)performTransition:(unsigned int)arg0;
- (void)setToFrame:(struct CGRect)arg0;
- (NSObject *)_subtypeForTransitionType:(unsigned int)arg0;
- (struct CGRect)toFrame;
- (float)topMargin;
- (void)setTopMargin:(float)arg0;
- (MPFlipTransitionController *)init;
- (void)animationDidStop:(CAAnimation *)arg0 finished:(char)arg1;
- (UIView *)fromView;
- (void)setFromView:(UIView *)arg0;
- (void).cxx_destruct;

@end
