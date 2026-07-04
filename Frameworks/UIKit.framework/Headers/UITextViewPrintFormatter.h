/* Runtime dump - UITextViewPrintFormatter
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextViewPrintFormatter : UIViewPrintFormatter
{
    struct ? _textViewPrintFormatterFlags;
    NSArray * _pageData;
}

- (void)dealloc;
- (void)setTextAlignment:(int)arg0;
- (void)setAttributedText:(NSAttributedString *)arg0;
- (void)setFont:(UIFont *)arg0;
- (NSString *)text;
- (void)setText:(NSString *)arg0;
- (NSAttributedString *)attributedText;
- (UIFont *)font;
- (int)textAlignment;
- (UIColor *)color;
- (void)setColor:(UIColor *)arg0;
- (NSObject *)_textView;
- (int)_recalcPageCount;
- (struct CGRect)rectForPageAtIndex:(NSObject *)arg0;
- (void)drawInRect:(struct CGRect)arg0 forPageAtIndex:(struct CGSize)arg1;
- (NSData *)_pageData;

@end
