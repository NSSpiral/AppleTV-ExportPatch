/* Runtime dump - BRKeyboardCandidates
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRKeyboardRomanSquare.h>
@interface BRKeyboardCandidates : BRKeyboardRomanSquare
{
    NSArray * _rawKeyboardDataStrings;
}

- (void)updateMainKeysContainer:(NSObject *)arg0;
- (float)_mainKeysVerticalSpacing;
- (NSString *)attributesForTextFieldLabel;
- (NSString *)_keyboardDataFileName;
- (int)_numberOfMainKeyRows;
- (float)_preferredGlyphHeight:(id)arg0;
- (void)setRawKeyboardDataStrings:(NSArray *)arg0;
- (void)dealloc;
- (NSString *)name;

@end
