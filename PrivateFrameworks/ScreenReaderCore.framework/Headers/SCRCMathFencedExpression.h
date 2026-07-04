/* Runtime dump - SCRCMathFencedExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathFencedExpression : SCRCMathRowExpression
{
    NSString * _openString;
    NSString * _closeString;
}

@property (copy, nonatomic) NSString * openString;
@property (copy, nonatomic) NSString * closeString;

- (void)dealloc;
- (NSString *)description;
- (SCRCMathFencedExpression *)initWithDictionary:(NSDictionary *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (id)latexDescriptionInMathMode:(char)arg0;
- (unsigned int)fractionLevel;
- (NSString *)mathMLTag;
- (NSArray *)mathMLAttributes;
- (void)setOpenString:(NSString *)arg0;
- (void)setCloseString:(NSString *)arg0;
- (NSString *)openString;
- (NSString *)closeString;
- (char)_isBinomialCoefficient;
- (NSObject *)_binomialCoefficientContent;
- (NSObject *)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(NSObject *)arg0;

@end
