/* Runtime dump - SBUIButton
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUIButton : UIButton
{
    struct UIEdgeInsets _hitAreaAdjustments;
}

@property (nonatomic) struct UIEdgeInsets hitAreaAdjustments;

- (SBUIButton *)initWithFrame:(struct CGRect)arg0;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)setHitAreaAdjustments:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)hitAreaAdjustments;

@end
