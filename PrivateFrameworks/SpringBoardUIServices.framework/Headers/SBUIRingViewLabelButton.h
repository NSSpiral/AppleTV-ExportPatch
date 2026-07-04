/* Runtime dump - SBUIRingViewLabelButton
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIRingViewLabelButton : UIControl
{
    TPRevealingRingView * _ringView;
    UILabel * _label;
}

@property (readonly, nonatomic) TPRevealingRingView * backgroundRing;
@property (readonly, nonatomic) UILabel * label;

- (SBUIRingViewLabelButton *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (NSObject *)hitTest:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setHighlighted:(char)arg0;
- (UILabel *)label;
- (TPRevealingRingView *)backgroundRing;

@end
