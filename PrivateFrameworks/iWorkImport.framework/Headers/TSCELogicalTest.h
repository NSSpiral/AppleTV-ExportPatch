/* Runtime dump - TSCELogicalTest
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCELogicalTest : NSObject
{
    int mOperation;
    struct TSCENumberValue mValue;
    NSString * mString;
    NSDate * mDate;
    TSCERegexMatcher * mMatcher;
    struct TSCEEvaluationContext * mEvaluationContext;
}

+ (TSCELogicalTest *)logicalTestWithCriterion:(struct TSCEValue)arg0 functionSpec:(TSCEFunctionSpec *)arg1 evaluationContext:(struct TSCEEvaluationContext *)arg2;

- (char)compare:(struct TSCEValue)arg0 withContext:(struct TSCEEvaluationContext *)arg1;
- (TSCELogicalTest *)initWithCriterion:(struct TSCEValue)arg0 functionSpec:(TSCEFunctionSpec *)arg1 evaluationContext:(struct TSCEEvaluationContext *)arg2;
- (int)criteriaParser:(NSObject *)arg0;
- (void)setRegexMatcher:(TSCERegexMatcher *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (void)setDate:(NSDate *)arg0;
- (void)setString:(NSString *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (unsigned int)cost;

@end
