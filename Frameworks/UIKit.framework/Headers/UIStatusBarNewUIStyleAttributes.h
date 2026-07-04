/* Runtime dump - UIStatusBarNewUIStyleAttributes
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarNewUIStyleAttributes : UIStatusBarStyleAttributes
{
    UIColor * _backgroundColor;
    UIColor * _foregroundColor;
    char _hasBusyBackground;
}

- (void)dealloc;
- (char)isTranslucent;
- (Class)foregroundStyleClass;
- (UIStatusBarNewUIStyleAttributes *)initWithRequest:(NSURLRequest *)arg0;
- (UIStatusBarNewUIStyleAttributes *)initWithRequest:(NSURLRequest *)arg0 backgroundColor:(UIColor *)arg1 foregroundColor:(UIColor *)arg2 hasBusyBackground:(char)arg3;
- (UIStatusBarNewUIStyleAttributes *)initWithRequest:(NSURLRequest *)arg0 backgroundColor:(UIColor *)arg1 foregroundColor:(UIColor *)arg2;
- (int)legibilityStyle;
- (char)isTransparent;
- (char)shouldUseVisualAltitude;
- (UIColor *)backgroundColorWithTintColor:(float)arg0;
- (id)newForegroundStyleWithHeight:(float)arg0;

@end
