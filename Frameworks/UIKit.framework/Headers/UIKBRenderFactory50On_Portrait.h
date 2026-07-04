/* Runtime dump - UIKBRenderFactory50On_Portrait
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactory50On_Portrait : UIKBRenderFactory10Key

- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSString *)lightKeycapsFontName;
- (void)_customizeTraits:(NSArray *)arg0 forPopupForKey:(NSString *)arg1 withRenderConfig:(UIKBRenderConfig *)arg2 keycapsFontName:(NSString *)arg3;
- (NSString *)thinKeycapsFontName;
- (float)keyCornerRadius;
- (float)controlColumnWidthFactor;
- (void)setupLayoutSegments;
- (float)spaceKeyFontSize;
- (float)keyplaneSwitchKeyFontSize;
- (float)returnKeyFontSize;
- (float)deleteKeyFontSize;

@end
