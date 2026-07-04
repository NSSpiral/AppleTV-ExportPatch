/* Runtime dump - UIKBHandwritingStrokeView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBHandwritingStrokeView : UIView <UIKBHandwritingStrokeEnabled>
{
    UIKBHandwritingView * _keyView;
}

@property (retain, nonatomic) UIKBHandwritingView * keyView;
@property (readonly, nonatomic) float inkWidth;

- (void)dealloc;
- (void)drawRect:(struct CGRect)arg0;
- (float)inkWidth;
- (UIKBHandwritingView *)keyView;
- (void)setKeyView:(UIKBHandwritingView *)arg0;

@end
