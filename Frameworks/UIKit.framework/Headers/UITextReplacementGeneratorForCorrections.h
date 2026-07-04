/* Runtime dump - UITextReplacementGeneratorForCorrections
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextReplacementGeneratorForCorrections : UITextReplacementGenerator
{
    char _forceHistoryReplacement;
    char _forceAutocorrectionGuesses;
    char _forceSpellingGuesses;
    UITextChecker * _textChecker;
    TIKeyboardCandidate * _autocorrectionRecord;
    unsigned int _maxEditDistance;
    unsigned int _maxCountAfterAutocorrectionGuesses;
    unsigned int _maxCountAfterSpellingGuesses;
}

@property (retain, nonatomic) UITextChecker * textChecker;
@property (retain, nonatomic) TIKeyboardCandidate * autocorrectionRecord;
@property (nonatomic) char forceHistoryReplacement;
@property (nonatomic) unsigned int maxEditDistance;
@property (nonatomic) unsigned int maxCountAfterAutocorrectionGuesses;
@property (nonatomic) char forceAutocorrectionGuesses;
@property (nonatomic) unsigned int maxCountAfterSpellingGuesses;
@property (nonatomic) char forceSpellingGuesses;

- (void)dealloc;
- (UITextReplacementGeneratorForCorrections *)init;
- (void)setTextChecker:(UITextChecker *)arg0;
- (void)setAutocorrectionRecord:(TIKeyboardCandidate *)arg0;
- (void)setForceHistoryReplacement:(char)arg0;
- (void)setForceAutocorrectionGuesses:(char)arg0;
- (void)setForceSpellingGuesses:(char)arg0;
- (void)setMaxCountAfterAutocorrectionGuesses:(unsigned int)arg0;
- (void)setMaxCountAfterSpellingGuesses:(unsigned int)arg0;
- (NSArray *)replacements;
- (void)setMaxEditDistance:(unsigned int)arg0;
- (UITextChecker *)textChecker;
- (TIKeyboardCandidate *)autocorrectionRecord;
- (unsigned int)maxCountAfterAutocorrectionGuesses;
- (unsigned int)maxEditDistance;
- (unsigned int)maxCountAfterSpellingGuesses;
- (char)isStringMisspelled:(id)arg0;
- (char)forceHistoryReplacement;
- (id)addReplacementRevertingAutocorrectionToReplacements:(id)arg0;
- (void)addPreviouslySuggestedAutocorrectionToReplacements:(id)arg0;
- (char)forceAutocorrectionGuesses;
- (void)addAutocorrectionGuessesToReplacements:(id)arg0;
- (char)forceSpellingGuesses;
- (void)addSpellingGuessesForString:(NSString *)arg0 ToReplacements:(id)arg1;

@end
