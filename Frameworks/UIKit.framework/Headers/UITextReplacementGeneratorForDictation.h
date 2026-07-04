/* Runtime dump - UITextReplacementGeneratorForDictation
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextReplacementGeneratorForDictation : UITextReplacementGenerator
{
    NSTextAlternatives * _alternatives;
}

@property (readonly, nonatomic) NSTextAlternatives * alternatives;

- (void)dealloc;
- (NSArray *)replacements;
- (UITextReplacementGeneratorForDictation *)initWithAlternatives:(NSTextAlternatives *)arg0 stringToReplace:(NSString *)arg1 replacementRange:(UITextRange *)arg2;
- (NSTextAlternatives *)alternatives;

@end
