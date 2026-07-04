/* Runtime dump - UIKBRenderFactoryiPadHWR_Portrait
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryiPadHWR_Portrait : UIKBRenderFactory10Key

- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSString *)lightKeycapsFontName;
- (void)_customizeTraits:(NSArray *)arg0 forPopupForKey:(NSString *)arg1 withRenderConfig:(UIKBRenderConfig *)arg2 keycapsFontName:(NSString *)arg3;
- (NSString *)thinKeycapsFontName;
- (float)keyCornerRadius;
- (float)controlColumnWidthFactor;
- (void)setupLayoutSegments;
- (float)spaceKeyFontSize;
- (float)deleteKeyFontSize;
- (struct CGPoint)spaceReturnKeyTextOffset;
- (float)moreKeyFontSize;
- (float)internationalKeyFontSize;
- (float)dictationKeyFontSize;
- (float)dismissKeyFontSize;
- (struct CGPoint)dismissKeyOffset;

@end
