/* Runtime dump - BRInputMethod
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRKeyboard, BRKeyboardCandidates;
@interface BRInputMethod : NSObject
{
    int _textEntryStyle;
    NSArray * _keyboards;
    char _includeHistoryKeyboard;
    NSString * _mostRecentCandidateCharacter;
    NSMutableString * _candidatesBuffer;
    BRKeyboard * _activeKeyboard;
    BRKeyboardCandidates * _candidatesKeyboard;
}

- (int)textEntryStyle;
- (char)usesCandidateDisplayForKeyboard:(id)arg0;
- (NSObject *)_keyboardsForTextEntryStyle:(int)arg0;
- (id)_addHistoryKeyboard:(id)arg0;
- (id)_removeHistoryKeyboard:(id)arg0;
- (void)flushText;
- (char)inputText:(NSString *)arg0;
- (id)isoLanguageCode;
- (char)setTextEntryStyle:(int)arg0 displayTextEntryHistory:(char)arg1;
- (void)setIncludeHistoryKeyboard:(char)arg0;
- (NSArray *)keyboards;
- (BRKeyboardCandidates *)candidatesKeyboard;
- (void)removeCandidatesKeyboard;
- (id)mostRecentCharacter;
- (char)deleteText;
- (char)includeHistoryKeyboard;
- (void)dealloc;
- (BRInputMethod *)init;
- (NSString *)name;
- (TIKeyboardCandidateResultSet *)candidates;
- (void)setActiveKeyboard:(BRKeyboard *)arg0;

@end
