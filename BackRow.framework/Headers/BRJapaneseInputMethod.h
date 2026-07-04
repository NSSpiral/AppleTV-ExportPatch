/* Runtime dump - BRJapaneseInputMethod
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRInputMethod.h>
@interface BRJapaneseInputMethod : BRInputMethod
{
    NSString * _mostRecentCandidateBaseCharacter;
}

- (char)usesCandidateDisplayForKeyboard:(id)arg0;
- (NSObject *)_keyboardsForTextEntryStyle:(int)arg0;
- (char)inputText:(NSString *)arg0;
- (id)isoLanguageCode;
- (void)dealloc;
- (NSString *)name;
- (TIKeyboardCandidateResultSet *)candidates;

@end
