/* Runtime dump - UIPeripheralHostView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIPeripheralHostView : UIView
{
    int _explicitLayoutCount;
    UIKeyboardCornerView * _cornerViewLeft;
    UIKeyboardCornerView * _cornerViewRight;
    UIKBInputBackdropView * _inputBackdropView;
    UIKBInputBackdropView * _inputAccessoryBackdropView;
    UIKBRenderConfig * _renderConfig;
}

@property (readonly, nonatomic) UIKeyboardCornerView * cornerViewLeft;
@property (readonly, nonatomic) UIKeyboardCornerView * cornerViewRight;
@property (readonly, nonatomic) UIKBInputBackdropView * inputBackdropView;
@property (readonly, nonatomic) UIKBInputBackdropView * inputAccessoryBackdropView;

- (UIPeripheralHostView *)initWithFrame:(struct CGRect)arg0;
- (void)dealloc;
- (char)pointInside:(struct CGPoint)arg0 withEvent:(Event *)arg1;
- (void)layoutSubviews;
- (void)removeFromSuperview;
- (void)didAddSubview:(_UIVisualEffectSubview *)arg0;
- (void)_setRenderConfig:(NSObject *)arg0;
- (int)textEffectsVisibilityLevel;
- (UIKBRenderConfig *)_inheritedRenderConfig;
- (int)_clipCornersOfView:(NSObject *)arg0;
- (void)_resizeForKeyplaneSize:(struct CGSize)arg0 splitWidthsChanged:(char)arg1;
- (void)updateBackdropViewForInputAccessoryView:(char)arg0;
- (UIKeyboardCornerView *)cornerViewLeft;
- (UIKeyboardCornerView *)cornerViewRight;
- (void)syncInputViewBackdropToFrame:(struct CGRect)arg0;
- (UIKBInputBackdropView *)inputBackdropView;
- (void)syncInputAccessoryViewBackdropToFrame:(struct CGRect)arg0;
- (UIKBInputBackdropView *)inputAccessoryBackdropView;
- (void)beginExplicitLayout;
- (void)endExplicitLayout;
- (void)_setRenderConfig:(NSObject *)arg0 updateKeyboard:(char)arg1;
- (void)_setBaseRenderConfig:(NSObject *)arg0;
- (char)explicitLayout;

@end
