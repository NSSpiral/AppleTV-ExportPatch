/* Runtime dump - UITextLabel
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextLabel : UILabel

- (void)setAlignment:(int)arg0;
- (void)drawRect:(struct CGRect)arg0;
- (int)alignment;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (void)setCentersHorizontally:(char)arg0;
- (char)centersHorizontally;
- (char)wrapsText;
- (struct CGSize)ellipsizedTextSize;
- (void)setHighlightedColor:(UIColor *)arg0;
- (UIColor *)highlightedColor;
- (void)setWrapsText:(char)arg0;
- (void)setTextAutoresizesToFit:(char)arg0;
- (char)textAutoresizesToFit;
- (void)setMinFontSize:(float)arg0;
- (float)minFontSize;

@end
