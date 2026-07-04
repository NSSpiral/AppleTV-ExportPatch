/* Runtime dump - UIKBRenderFactory10Key
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactory10Key : UIKBRenderFactory

+ (char)_isActiveKeyplaneSwitchKey:(NSString *)arg0;

- (NSString *)controlKeyBackgroundColorName;
- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSString *)displayContentsForKey:(NSString *)arg0;
- (float)interkeyGapsCenterXOfKeyplaneFrame:(struct CGRect)arg0;
- (struct UIEdgeInsets)topEdgeAdjustmentInsets;
- (unsigned int)edgesAdjustedForTranslucentGapsForGeometry:(NSObject *)arg0 key:(NSString *)arg1 onKeyplane:(UIKBCacheToken_Keyplane *)arg2;
- (float)numberPadKeyPrimarySymbolSize;
- (struct CGPoint)numberPadKeyPrimaryTextOffset;
- (struct CGPoint)numberPadVBarSecondaryTextOffset;
- (struct CGPoint)numberPadKeySecondaryTextOffset;
- (struct CGPoint)dictationKeyTextOffset;
- (struct CGPoint)globeKeyTextOffset;
- (struct CGPoint)abcKeyTextOffset;
- (id)_preferredScriptFontForRendering:(int)arg0;
- (NSString *)defaultKeyDividerColorName;
- (NSString *)controlKeyDividerColorName;
- (NSArray *)controlKeyTraits;
- (NSArray *)activeControlKeyTraits;
- (NSArray *)shiftedControlKeyTraits;
- (NSArray *)shiftedWhiteControlKeyTraits;
- (int)lightHighQualityEnabledBlendForm;
- (NSString *)controlKeyForegroundColorName;
- (void)setupColumnLayoutSegmentsWithControlWidth:(float)arg0;

@end
