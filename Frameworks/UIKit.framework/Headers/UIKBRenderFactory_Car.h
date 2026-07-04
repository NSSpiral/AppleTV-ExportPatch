/* Runtime dump - UIKBRenderFactory_Car
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIKBRenderFactory_Car : UIKBRenderFactory

@property (readonly, nonatomic) float carScale;

- (id)backgroundTraitsForKeyplane:(id)arg0;
- (NSString *)_traitsForKey:(NSString *)arg0 onKeyplane:(UIKBCacheToken_Keyplane *)arg1;
- (NSString *)displayContentsForKey:(NSString *)arg0;
- (float)carScale;
- (UIColor *)dividerColor;
- (UIColor *)activeKeyColor;
- (UIColor *)enabledKeyColor;
- (float)defaultKeyFontSize;

@end
