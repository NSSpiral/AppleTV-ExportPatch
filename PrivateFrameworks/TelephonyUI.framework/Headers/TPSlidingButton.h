/* Runtime dump - TPSlidingButton
 * Image: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
 */

@interface TPSlidingButton : UIView <_UIActionSliderDelegate>
{
    _UIActionSlider * _acceptButton;
    UIButton * _sideButtonRight;
    int _type;
    <TPSlidingButtonDelegateProtocol> * _delegate;
    UIImageView * _dialImageView;
}

@property (retain) _UIActionSlider * acceptButton;
@property (retain) UIButton * sideButtonRight;
@property int type;
@property <TPSlidingButtonDelegateProtocol> * delegate;
@property (retain) UIImageView * dialImageView;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)setDelegate:(<TPSlidingButtonDelegateProtocol> *)arg0;
- (void)layoutSubviews;
- (<TPSlidingButtonDelegateProtocol> *)delegate;
- (void)setType:(int)arg0;
- (int)type;
- (struct CGSize)intrinsicContentSize;
- (void)actionSlider:(_UIActionSlider *)arg0 didUpdateSlideWithValue:(float)arg1;
- (void)actionSliderDidCompleteSlide:(id)arg0;
- (void)setSideButtonRight:(UIButton *)arg0;
- (UIButton *)sideButtonRight;
- (TPSlidingButton *)initWithSlidingButtonType:(int)arg0;
- (_UIActionSlider *)acceptButton;
- (UIImageView *)dialImageView;
- (struct CGSize)_knobSize;
- (void)setAcceptButton:(_UIActionSlider *)arg0;
- (void)setDialImageView:(UIImageView *)arg0;

@end
