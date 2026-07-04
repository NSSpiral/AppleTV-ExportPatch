/* Runtime dump - PFUbiquityBaselineRollOperation
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation
{
    PFUbiquityBaselineHeuristics * _heuristics;
}

@property NSObject<PFUbiquityBaselineRollOperationDelegate> * delegate;

- (NSObject *)retainedDelegate;
- (char)haveConsistentStateForBaselineRoll;
- (char)rollBaselineWithError:(id *)arg0;
- (void)dealloc;
- (void)setDelegate:(NSObject<PFUbiquityBaselineRollOperationDelegate> *)arg0;
- (PFUbiquityBaselineRollOperation *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSObject<PFUbiquityBaselineRollOperationDelegate> *)delegate;
- (void)main;

@end
