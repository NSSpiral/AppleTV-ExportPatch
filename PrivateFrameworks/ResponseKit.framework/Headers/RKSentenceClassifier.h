/* Runtime dump - RKSentenceClassifier
 * Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKSentenceClassifier : NSObject
{
    char _sentenceIsTerminated;
    char _sentenceIsAllSymbols;
    char _sentenceHasQuestionTerminator;
    char _sentenceHasAlternativeConjunction;
    NSString * _sentenceStringOriginal;
    NSString * _sentenceString;
    NSArray * _sentenceEntities;
    NSValue * _sentenceTag;
    NSArray * _inversions;
    NSArray * _interrogatives;
    NSArray * _choiceDelimiters;
    NSArray * _alternatives;
    NSArray * _appreciations;
}

@property (retain) NSString * sentenceStringOriginal;
@property (retain) NSString * sentenceString;
@property (retain) NSArray * sentenceEntities;
@property char sentenceIsTerminated;
@property char sentenceIsAllSymbols;
@property char sentenceHasQuestionTerminator;
@property char sentenceHasAlternativeConjunction;
@property (retain) NSValue * sentenceTag;
@property (retain) NSArray * inversions;
@property (retain) NSArray * interrogatives;
@property (retain) NSArray * choiceDelimiters;
@property (retain) NSArray * alternatives;
@property (retain) NSArray * appreciations;
@property (readonly) NSString * alternativeConjunction;

+ (NSString *)preferenceKeyForCategory:(unsigned int)arg0;
+ (NSString *)languageIdentifierFromClassName;
+ (Class)subclassForLanguageIdentifier:(NSString *)arg0;
+ (NSObject *)keyToCategoryMap;
+ (Class)subclassForLocale:(NSObject *)arg0;
+ (NSString *)lexicalEntitiesFromString:(NSString *)arg0;
+ (NSString *)sensitiveSubjectRegularExpressionForLanguage:(NSString *)arg0;
+ (NSString *)polarTagRegularExpressionForLanguage:(NSString *)arg0;
+ (NSString *)categoryKeywordMapForLanguage:(NSString *)arg0;
+ (NSString *)appreciationKeywordsForLanguage:(NSString *)arg0;
+ (NSString *)alternativeInversionsForLanguage:(NSString *)arg0;
+ (char)canClassifyLanguageIdentifier:(NSString *)arg0;
+ (unsigned int)categoryForPreferenceKey:(NSString *)arg0;
+ (RKSentenceClassifier *)preProcessTextMessageForLinguisticTagger:(id)arg0 withLocale:(NSObject *)arg1;
+ (RKSentenceClassifier *)stringFromLexicalEntities:(id)arg0;
+ (RKSentenceClassifier *)sentenceClassification:(id)arg0 withLanguageIdentifier:(NSString *)arg1 options:(unsigned int)arg2;

- (void).cxx_destruct;
- (NSArray *)alternatives;
- (void)analyzeSentence;
- (void)setInversions:(NSArray *)arg0;
- (NSArray *)sentenceEntities;
- (NSArray *)inversions;
- (NSArray *)classifySentence;
- (NSArray *)interrogatives;
- (char)sentenceHasQuestionTerminator;
- (NSString *)alternativeConjunction;
- (id)addSentenceTerminatorQuestion:(id)arg0;
- (NSString *)languageIdentifier;
- (id)sentenceClassification:(id)arg0 options:(unsigned int)arg1;
- (void)setSentenceString:(NSString *)arg0;
- (void)setSentenceStringOriginal:(NSString *)arg0;
- (NSString *)sentenceString;
- (void)setSentenceEntities:(NSArray *)arg0;
- (void)setSentenceIsTerminated:(char)arg0;
- (void)setSentenceHasQuestionTerminator:(char)arg0;
- (char)sentenceIsTerminated;
- (NSString *)sentenceStringOriginal;
- (void)setSentenceIsAllSymbols:(char)arg0;
- (void)setSentenceTag:(NSValue *)arg0;
- (void)setInterrogatives:(NSArray *)arg0;
- (void)setChoiceDelimiters:(NSArray *)arg0;
- (void)setSentenceHasAlternativeConjunction:(char)arg0;
- (NSArray *)choiceDelimiters;
- (char)sentenceHasAlternativeConjunction;
- (void)setAlternatives:(NSArray *)arg0;
- (char)isLexicalClassAvailable;
- (void)setAppreciations:(NSArray *)arg0;
- (NSArray *)appreciations;
- (char)sentenceIsAllSymbols;
- (NSValue *)sentenceTag;

@end
