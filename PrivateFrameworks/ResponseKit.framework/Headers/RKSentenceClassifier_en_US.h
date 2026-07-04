/* Runtime dump - RKSentenceClassifier_en_US
 * Image: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
 */

@interface RKSentenceClassifier_en_US : RKSentenceClassifier

+ (RKSentenceClassifier_en_US *)preProcessTextMessageForLinguisticTagger:(id)arg0;

- (void)analyzeSentence;
- (NSArray *)classifySentence;
- (NSString *)alternativeConjunction;
- (id)addSentenceTerminatorQuestion:(id)arg0;

@end
