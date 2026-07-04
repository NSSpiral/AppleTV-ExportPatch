/* Runtime dump - UITextReplacementGenerator
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextReplacementGenerator : NSObject
{
    UITextRange * _replacementRange;
    NSString * _stringToReplace;
}

@property (retain, nonatomic) UITextRange * replacementRange;
@property (copy, nonatomic) NSString * stringToReplace;

- (void)dealloc;
- (void)setReplacementRange:(UITextRange *)arg0;
- (UITextRange *)replacementRange;
- (void)setStringToReplace:(NSString *)arg0;
- (NSString *)stringToReplace;
- (NSArray *)replacements;
- (char)shouldAllowString:(NSString *)arg0 intoReplacements:(id)arg1;
- (NSString *)replacementWithText:(NSString *)arg0;
- (void)addPlaceholderForEmptyReplacements:(id)arg0;

@end
