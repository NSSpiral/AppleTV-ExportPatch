/* Runtime dump - UIKBRenderFactory_Monolith
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactory_Monolith : UIKBRenderFactory

- (NSString *)fontName;
- (id)backgroundTraitsForKeyplane:(id)arg0;
- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSString *)displayContentsForKey:(NSString *)arg0;
- (UIColor *)highlightedKeyColor;
- (UIColor *)activeTextColor;
- (UIColor *)inactiveTextColor;
- (float)highlightedFontSize;
- (float)enabledFontSize;
- (struct CGPoint)highlightedTextOffset;
- (struct CGPoint)enabledTextOffset;

@end
