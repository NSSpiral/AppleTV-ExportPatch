/* Runtime dump - UITextFieldLabel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextFieldLabel : UILabel

+ (UITextFieldLabel *)defaultFont;
+ (NSDictionary *)_defaultAttributes;

- (void)drawTextInRect:(struct CGRect)arg0;
- (char)_shouldDrawUnderlinesLikeWebKit;
- (void)_defaultDrawTextInRect:(struct CGRect)arg0;

@end
