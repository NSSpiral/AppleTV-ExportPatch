/* Runtime dump - MUMathExpressionDoubleBased
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MUMathExpressionDoubleBased : MUMathExpressionBase
{
    struct FunctionInterpreter<double> * mInterpreter;
}

+ (double)invalidResult;
+ (double)evaluateString:(NSString *)arg0 error:(id *)arg1;

- (void)dealloc;
- (MUMathExpressionDoubleBased *)init;
- (double)valueForVariable:(id)arg0;
- (NSString *)stringValue;
- (void)cleanup;
- (char)isConstant;
- (MUMathExpressionDoubleBased *)initWithString:(NSString *)arg0 error:(id *)arg1;
- (void)setVariableValues:(NSArray *)arg0;
- (double)evaluate;
- (void)setValue:(double)arg0 forVariable:(NSISVariable *)arg1;
- (void)resetAllVariables;
- (void)_resetVariableIndicies;
- (void)replaceVariable:(id)arg0 withValue:(double)arg1;
- (char)isValueIllegal:(double)arg0;
- (void)finalize;

@end
