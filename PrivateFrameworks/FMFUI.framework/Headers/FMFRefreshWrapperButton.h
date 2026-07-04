/* Runtime dump - FMFRefreshWrapperButton
 * Image: /System/Library/PrivateFrameworks/FMFUI.framework/FMFUI
 */

@interface FMFRefreshWrapperButton : UIButton
{
    struct UIEdgeInsets _wrapperInsets;
}

@property (nonatomic) struct UIEdgeInsets wrapperInsets;

- (FMFRefreshWrapperButton *)initWithFrame:(struct CGRect)arg0;
- (struct UIEdgeInsets)alignmentRectInsets;
- (void)setWrapperInsets:(struct UIEdgeInsets)arg0;
- (struct UIEdgeInsets)wrapperInsets;

@end
