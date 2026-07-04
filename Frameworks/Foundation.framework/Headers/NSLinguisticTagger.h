/* Runtime dump - NSLinguisticTagger
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLinguisticTagger : NSObject
{
    NSArray * _schemes;
    unsigned int _options;
    NSString * _string;
    id _orthographyArray;
    id _tokenArray;
    id _reserved;
}

@property (readonly, copy) NSArray * tagSchemes;
@property (retain) NSString * string;

+ (NSString *)availableTagSchemesForLanguage:(NSString *)arg0;
+ (char)supportsLanguage:(NSString *)arg0;

- (NSObject *)languageOfRange:(struct _NSRange)arg0;
- (void)setOrthography:(NSString *)arg0 range:(struct _NSRange)arg1;
- (NSObject *)tagsInRange:(struct _NSRange)arg0 scheme:(NSString *)arg1 options:(unsigned int)arg2 tokenRanges:(id *)arg3;
- (NSObject *)_tokenDataForParagraphAtIndex:(unsigned int)arg0 paragraphRange:(struct _NSRange *)arg1 tagScheme:(NSString *)arg2;
- (NSObject *)orthographyAtIndex:(unsigned int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (NSObject *)_rankedCandidatesForMisspelledRange:(struct _NSRange)arg0 candidates:(TIKeyboardBehaviors_WaitingForCandidates *)arg1 contextualFrequencies:(id *)arg2 baseFrequencies:(id *)arg3;
- (NSString *)_tagSchemeForScheme:(NSString *)arg0;
- (char)_acceptSentenceTerminatorRange:(struct _NSRange)arg0 paragraphRange:(struct _NSRange)arg1 tokens:(struct _NSLTToken *)arg2 count:(NSObject *)arg3 tokenIndex:(NSObject *)arg4;
- (void)_analyzePunctuationTokensInRange:(struct _NSRange)arg0 paragraphRange:(struct _NSRange)arg1;
- (void)_analyzeTokensInWordRange:(struct _NSRange)arg0 paragraphRange:(struct _NSRange)arg1;
- (void)_analyzeTokensInInterwordRange:(struct _NSRange)arg0 paragraphRange:(struct _NSRange)arg1;
- (void)_acceptSentencesForParagraphRange:(struct _NSRange)arg0;
- (void)_calculateSentenceRangesForParagraphRange:(struct _NSRange)arg0;
- (NSObject *)_tokenDataForParagraphRange:(struct _NSRange)arg0 requireLemmas:(char)arg1 requirePartsOfSpeech:(char)arg2 requireNamedEntities:(char)arg3;
- (void)_tokenizeParagraphAtIndex:(unsigned int)arg0 requireLemmas:(char)arg1 requirePartsOfSpeech:(char)arg2 requireNamedEntities:(char)arg3;
- (NSObject *)_tokenDataForParagraphAtIndex:(unsigned int)arg0 paragraphRange:(struct _NSRange *)arg1 requireLemmas:(char)arg2 requirePartsOfSpeech:(char)arg3 requireNamedEntities:(char)arg4;
- (NSArray *)tagSchemes;
- (void)stringEditedInRange:(struct _NSRange)arg0 changeInLength:(int)arg1;
- (struct _NSRange)sentenceRangeForRange:(struct _NSRange)arg0;
- (NSObject *)_rankedCandidatesForMisspelledRange:(struct _NSRange)arg0 candidates:(TIKeyboardBehaviors_WaitingForCandidates *)arg1;
- (char)_ngramTagsAndFrequenciesForMisspelledRange:(struct _NSRange)arg0 word:(NSString *)arg1 tags:(id *)arg2 frequencies:(id *)arg3;
- (NSObject *)possibleTagsAtIndex:(unsigned int)arg0 scheme:(NSString *)arg1 tokenRange:(struct _NSRange *)arg2 sentenceRange:(struct _NSRange *)arg3 scores:(id *)arg4;
- (void)dealloc;
- (NSString *)description;
- (NSString *)string;
- (void)setString:(NSString *)arg0;
- (NSLinguisticTagger *)initWithTagSchemes:(NSArray *)arg0 options:(unsigned int)arg1;
- (NSObject *)tagAtIndex:(unsigned int)arg0 scheme:(NSString *)arg1 tokenRange:(struct _NSRange *)arg2 sentenceRange:(struct _NSRange *)arg3;
- (void)enumerateTagsInRange:(struct _NSRange)arg0 scheme:(NSString *)arg1 options:(unsigned int)arg2 usingBlock:(id /* block */)arg3;

@end
