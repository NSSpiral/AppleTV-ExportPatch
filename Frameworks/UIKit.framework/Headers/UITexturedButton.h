/* Runtime dump - UITexturedButton
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITexturedButton : UIButton

- (UITexturedButton *)initWithFrame:(struct CGRect)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (struct CGSize)_intrinsicSizeWithinSize:(struct CGSize)arg0;
- (void)setHighlighted:(char)arg0;
- (void)setTitleColor:(UIColor *)arg0 forStates:(unsigned int)arg1;
- (void)setBackgroundImage:(UIImage *)arg0 forStates:(unsigned int)arg1;
- (void)setTitleShadowColor:(UIColor *)arg0 forStates:(unsigned int)arg1;
- (NSObject *)backgroundImageForState:(unsigned int)arg0;
- (int)buttonType;
- (NSObject *)titleColorForState:(unsigned int)arg0;
- (NSObject *)titleShadowColorForState:(unsigned int)arg0;

@end
