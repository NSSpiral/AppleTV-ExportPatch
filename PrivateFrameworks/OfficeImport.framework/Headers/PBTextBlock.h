/* Runtime dump - PBTextBlock
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PBTextBlock : NSObject

+ (void)readClientTextBox:(id)arg0 textBody:(NSObject *)arg1 state:(NSObject *)arg2;
+ (void)applyTextRuler:(struct PptTextRulerAtom *)arg0 toTextBlock:(/* block */ id * *)arg1;
+ (void)readFromTextBlock:(id /* block */)arg0 toStyledText:(struct __CFAttributedString *)arg1;
+ (void)readFromStyledText:(struct __CFAttributedString *)arg0 toStyledPargraphs:(struct __CFArray *)arg1;
+ (void)readParagraph:(id)arg0 paragraph:(struct __CFAttributedString *)arg1 textType:(int)arg2 state:(NSObject *)arg3;

@end
