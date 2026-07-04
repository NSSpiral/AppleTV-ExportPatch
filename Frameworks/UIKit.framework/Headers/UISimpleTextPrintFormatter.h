/* Runtime dump - UISimpleTextPrintFormatter
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UISimpleTextPrintFormatter : UIPrintFormatter

@property (copy, nonatomic) NSString * text;
@property (copy, nonatomic) NSAttributedString * attributedText;
@property (retain, nonatomic) UIFont * font;
@property (retain, nonatomic) UIColor * color;
@property (nonatomic) int textAlignment;

- (UISimpleTextPrintFormatter *)initWithText:(NSString *)arg0;
- (UISimpleTextPrintFormatter *)initWithAttributedText:(NSAttributedString *)arg0;

@end
