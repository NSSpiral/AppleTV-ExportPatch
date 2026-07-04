/* Runtime dump - TSCESumAccumulator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCESumAccumulator : NSObject
{
    NSDate * mDateAccumulator;
    double mSecondsToAdd;
    struct TSCENumberValue mNumberAccumulator;
    char mMixedDurationsAndNumbers;
    char mFoundANumber;
}

- (void)addValue:(struct TSCEValue)arg0 function:(char *)arg1 evaluationContext:(struct TSCEEvaluationContext *)arg2;
- (struct TSCEValue)resultForFunction:(id)arg0;
- (TSCESumAccumulator *)init;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
