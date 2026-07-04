/* Runtime dump - MUMathExpressionFloatBased
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MUMathExpressionFloatBased : MUMathExpressionBase
{
    struct FunctionInterpreter<float> * mInterpreter;
}

+ (float)invalidResult;
+ (float)evaluateString:(NSString *)arg0 error:(id *)arg1;

- (void)dealloc;
- (MUMathExpressionFloatBased *)init;
- (float)valueForVariable:(id)arg0;
- (NSString *)stringValue;
- (void)cleanup;
- (char)isConstant;
- (MUMathExpressionFloatBased *)initWithString:(NSString *)arg0 error:(id *)arg1;
- (void)setVariableValues:(NSArray *)arg0;
- (float)evaluate;
- (void)setValue:(float)arg0 forVariable:(NSISVariable *)arg1;
- (void)resetAllVariables;
- (void)_resetVariableIndicies;
- (void)replaceVariable:(id)arg0 withValue:(float)arg1;
- (char)isValueIllegal:(float)arg0;
- (void)finalize;

@end
