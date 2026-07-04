/* Runtime dump - UITextChecker
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UITextChecker : NSObject
{
    id _reserved;
    int _usdt;
}

+ (void)setString:(NSString *)arg0 isExemptFromChecker:(char)arg1;
+ (void)queryLocalUpdateAssets:(NSArray *)arg0;
+ (int)uniqueSpellDocumentTag;
+ (NSString *)bestLanguageForString:(NSString *)arg0 fromAlternatives:(_UIDynamicCaretAlternatives *)arg1 currentLanguage:(NSString *)arg2 insertionPointIndex:(unsigned int)arg3 scriptForBestLanguage:(id *)arg4;
+ (struct __CFSet *)createDictHashTable:(char)arg0;
+ (NSDictionary *)openUserDictionary:(NSDictionary *)arg0;
+ (NSDictionary *)dictionaryInfo:(NSDictionary *)arg0;
+ (char)_learnWord:(id)arg0 inDictionary:(NSDictionary *)arg1;
+ (NSDictionary *)_wordsInDictionary:(NSDictionary *)arg0;
+ (void)_setWords:(id)arg0 inDictionary:(NSDictionary *)arg1;
+ (char)_isWord:(id)arg0 inDictionary:(NSDictionary *)arg1;
+ (char)_forgetWord:(id)arg0 inDictionary:(NSDictionary *)arg1;
+ (NSOperationQueue *)_textCheckerBackgroundQueue;
+ (NSArray *)availableLanguages;
+ (NSString *)bestLanguageForString:(NSString *)arg0 fromAlternatives:(_UIDynamicCaretAlternatives *)arg1 currentLanguage:(NSString *)arg2;
+ (void)learnWord:(id)arg0;
+ (char)hasLearnedWord:(id)arg0;
+ (void)unlearnWord:(id)arg0;

- (void)dealloc;
- (UITextChecker *)init;
- (UITextChecker *)_initWithAsynchronousLoading:(char)arg0;
- (char)_doneLoading;
- (struct _NSRange)rangeOfMisspelledWordInString:(NSString *)arg0 range:(struct _NSRange)arg1 startingAt:(int)arg2 wrap:(char)arg3 language:(NSString *)arg4;
- (NSString *)_nameOfDictionaryForDocumentTag:(int)arg0;
- (void)initUserDictionaries;
- (void)queryUpdateBundle;
- (void)initGlobals;
- (void)setIgnoredWords:(id)arg0;
- (struct _NSRange)checkSpellingOfString:(NSString *)arg0 startingAt:(int)arg1 language:(NSString *)arg2 wrap:(char)arg3 correction:(id *)arg4;
- (id)_checker;
- (int)adjustOffsetToNextWordBoundaryInString:(NSString *)arg0 startingAt:(int)arg1;
- (void)_setLanguageDictionaryName:(NSString *)arg0;
- (void)_setDocumentDictionaryName:(NSString *)arg0;
- (struct _NSRange)_chunkAndFindMisspelledWordInString:(NSString *)arg0 language:(NSString *)arg1 learnedDictionaries:(id)arg2 wordCount:(int *)arg3 correction:(id *)arg4 usingChecker:(id)arg5;
- (struct _NSRange)_chunkAndCheckGrammarInString:(NSString *)arg0 language:(NSString *)arg1 usingChecker:(id)arg2 details:(id *)arg3;
- (struct _NSRange)checkGrammarOfString:(NSString *)arg0 startingAt:(int)arg1 language:(NSString *)arg2 wrap:(char)arg3 details:(id *)arg4;
- (NSObject *)correctionForWordRange:(struct _NSRange)arg0 inString:(NSAttributedString *)arg1 language:(NSString *)arg2;
- (NSObject *)guessesForWordRange:(struct _NSRange)arg0 inString:(NSAttributedString *)arg1 language:(NSString *)arg2;
- (NSObject *)completionsForPartialWordRange:(struct _NSRange)arg0 inString:(NSAttributedString *)arg1 language:(NSString *)arg2;
- (NSString *)suggestWordInLanguage:(NSString *)arg0;
- (char)canChangeCaseOfFirstLetterInString:(NSString *)arg0 toUpperCase:(char)arg1 language:(NSString *)arg2;
- (NSString *)stringForInputString:(NSString *)arg0 language:(NSString *)arg1;
- (NSString *)alternativesForPinyinInputString:(NSString *)arg0;
- (void)ignoreWord:(id)arg0;
- (id)ignoredWords;
- (char)isWordInUserDictionaries:(id)arg0 caseSensitive:(char)arg1;

@end
