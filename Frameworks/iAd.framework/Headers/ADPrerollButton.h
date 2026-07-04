/* Runtime dump - ADPrerollButton
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADPrerollButton : UIButton
{
    struct UIEdgeInsets _hitRectInsets;
    struct UIEdgeInsets _alignmentRectInsets;
}

@property (nonatomic) struct UIEdgeInsets hitRectInsets;
@property (nonatomic) struct UIEdgeInsets alignmentRectInsets;

+ (UIButton *)buttonWithType:(int)arg0;

- (void)setHitRectInsets:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)hitRectInsets;
- (void)setAlignmentRectInsets:(struct UIEdgeInsets)arg0;
- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (struct UIEdgeInsets)alignmentRectInsets;
- (struct CGRect)hitRect;

@end
