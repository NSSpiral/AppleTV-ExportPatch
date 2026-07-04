/* Runtime dump - SCRCMathFractionExpression
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathFractionExpression : SCRCMathExpression
{
    SCRCMathExpression * _numerator;
    SCRCMathExpression * _denominator;
    SCRCMathExpression * _operator;
    double _lineThickness;
}

@property (retain, nonatomic) SCRCMathExpression * numerator;
@property (retain, nonatomic) SCRCMathExpression * denominator;
@property (retain, nonatomic) SCRCMathExpression * operator;
@property (nonatomic) double lineThickness;

- (void)dealloc;
- (NSString *)description;
- (SCRCMathFractionExpression *)initWithDictionary:(NSDictionary *)arg0;
- (SCRCMathExpression *)operator;
- (void)setOperator:(SCRCMathExpression *)arg0;
- (NSObject *)speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1;
- (id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned int)arg0 treePosition:(NSObject *)arg1;
- (NSArray *)subExpressions;
- (NSObject *)speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (NSString *)latexMathModeDescription;
- (unsigned int)fractionLevel;
- (NSObject *)speakableDescriptionAsBinomialCoefficientWithSpeakingStyle:(int)arg0;
- (NSObject *)dollarCodeDescriptionAsMixedNumberFractionWithTreePosition:(NSObject *)arg0;
- (NSObject *)dollarCodeDescriptionAsBinomialCoefficientWithTreePosition:(NSObject *)arg0 numberOfOuterRadicals:(unsigned int)arg1;
- (NSObject *)speakableSegmentsAsBinomialCoefficientWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2;
- (char)isSimpleNumericalFraction;
- (char)isUnlinedFraction;
- (void)setNumerator:(SCRCMathExpression *)arg0;
- (void)setDenominator:(SCRCMathExpression *)arg0;
- (void)setLineThickness:(double)arg0;
- (SCRCMathExpression *)numerator;
- (SCRCMathExpression *)denominator;
- (double)lineThickness;
- (NSObject *)_speakableDescriptionWithSpeakingStyle:(int)arg0 arePausesAllowed:(char)arg1 asBinomialCoefficient:(char)arg2;
- (NSObject *)_speakableSegmentsWithSpeakingStyle:(int)arg0 upToDepth:(unsigned int)arg1 treePosition:(NSObject *)arg2 asBinomialCoefficient:(char)arg3;
- (id)_dollarCodeDescriptionAsBinomialCoefficient:(char)arg0 orMixedNumberFraction:(char)arg1 withNumberOfOuterRadicals:(unsigned int)arg2 treePosition:(NSObject *)arg3;
- (NSString *)mathMLString;

@end
