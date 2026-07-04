/* Runtime dump - TPFakeSixSquareButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPFakeSixSquareButton : UIButton
{
    struct UIEdgeInsets _contentInsets;
    TPRingView * _ringView;
}

@property (retain) TPRingView * ringView;

- (void)dealloc;
- (struct CGRect)titleRectForContentRect:(NSObject *)arg0;
- (void)setContentRect:(struct CGRect)arg0;
- (struct CGRect)imageRectForContentRect:(NSObject *)arg0;
- (TPFakeSixSquareButton *)initWithFrame:(struct CGRect)arg0 andIcon:(struct CGSize)arg1;
- (TPRingView *)ringView;
- (void)setRingView:(TPRingView *)arg0;

@end
