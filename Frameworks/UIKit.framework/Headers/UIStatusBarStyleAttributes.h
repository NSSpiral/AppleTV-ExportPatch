/* Runtime dump - UIStatusBarStyleAttributes
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStatusBarStyleAttributes : NSObject
{
    UIStatusBarStyleRequest * _request;
    UIStatusBarForegroundStyleAttributes * _foregroundStyle;
}

- (void)dealloc;
- (UIStatusBarStyleAttributes *)init;
- (char)isTranslucent;
- (float)heightForOrientation:(int)arg0;
- (int)style;
- (char)isDoubleHeight;
- (UIStatusBarForegroundStyleAttributes *)foregroundStyle;
- (int)idiom;
- (char)shouldShowInternalItemType:(int)arg0 withScreenCapabilities:(id)arg1;
- (float)heightForMetrics:(int)arg0;
- (UIStatusBarStyleAttributes *)initWithRequest:(UIStatusBarStyleRequest *)arg0;
- (int)legibilityStyle;
- (char)isTransparent;
- (char)shouldUseVisualAltitude;
- (UIColor *)backgroundColorWithTintColor:(float)arg0;
- (id)newForegroundStyleWithHeight:(float)arg0;
- (char)usesVerticalLayout;
- (char)supportsRasterization;
- (int)cornerStyle;
- (char)areTopCornersRounded;
- (NSString *)backgroundImageName;
- (float)foregroundAlpha;
- (double)glowAnimationDuration;
- (int)tapButtonType;

@end
