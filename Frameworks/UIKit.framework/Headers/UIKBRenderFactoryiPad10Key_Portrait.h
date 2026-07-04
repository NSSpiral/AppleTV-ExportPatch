/* Runtime dump - UIKBRenderFactoryiPad10Key_Portrait
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactoryiPad10Key_Portrait : UIKBRenderFactory10Key_Landscape

- (id)backgroundTraitsForKeyplane:(id)arg0;
- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSString *)lightKeycapsFontName;
- (void)_customizeTraits:(NSArray *)arg0 forPopupForKey:(NSString *)arg1 withRenderConfig:(UIKBRenderConfig *)arg2 keycapsFontName:(NSString *)arg3;
- (NSString *)thinKeycapsFontName;
- (float)keyCornerRadius;
- (struct UIEdgeInsets)topEdgeAdjustmentInsets;
- (unsigned int)edgesAdjustedForTranslucentGapsForGeometry:(NSObject *)arg0 key:(NSString *)arg1 onKeyplane:(UIKBCacheToken_Keyplane *)arg2;
- (float)controlColumnWidthFactor;
- (NSString *)multitapCompleteKeyImageName;
- (NSString *)muttitapReverseKeyImageName;
- (NSString *)shiftKeyImageName;
- (NSString *)shiftOnKeyImageName;
- (NSString *)shiftLockImageName;

@end
