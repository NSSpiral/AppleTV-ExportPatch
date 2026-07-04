/* Runtime dump - UIKBBlurredKeyView
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBBlurredKeyView : UIKBKeyView
{
    UIKBKeyView * _keyView;
    UIKBBackdropView * _backdropView;
}

- (void)dealloc;
- (void)setNeedsDisplay;
- (UIKBRenderConfig *)renderConfig;
- (NSString *)key;
- (UIKBKeyView *)contentsKeyView;
- (UIKBBlurredKeyView *)initWithFrame:(struct CGRect)arg0 keyplane:(struct CGSize)arg1 key:(NSString *)arg2;
- (void)setRenderConfig:(UIKBRenderConfig *)arg0;
- (void)updateForKeyplane:(id)arg0 key:(NSString *)arg1;
- (void)displayLayer:(MDDisplayLayer *)arg0;
- (void)setDrawFrame:(struct CGRect)arg0;
- (UIKBTree *)keyplane;
- (void)dimKeyCaps:(float)arg0 duration:(float)arg1;
- (struct CGRect)drawFrame;
- (char)requiresSublayers;

@end
