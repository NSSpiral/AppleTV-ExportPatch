/* Runtime dump - CKFlowControl
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKFlowControl : NSObject
{
    unsigned int _budgetCap;
    double _regenerationPerSecond;
    unsigned int _totalSamples;
    double _totalCost;
    NSDate * _lastExpenditure;
    double _budget;
    double _maximumThrottleTime;
}

@property unsigned int budgetCap;
@property double regenerationPerSecond;
@property double budget;
@property (nonatomic) double maximumThrottleTime;
@property (retain) NSDate * lastExpenditure;

+ (CKFlowControl *)flowControlWithBudgetCap:(unsigned int)arg0 withMaximumThrottleTime:(double)arg1 andRegenerationPerSecond:(double)arg2;

- (void)setBudget:(double)arg0;
- (void)setLastExpenditure:(NSDate *)arg0;
- (CKFlowControl *)initWithBudgetCap:(unsigned int)arg0 withMaximumThrottleTime:(double)arg1 andRegenerationPerSecond:(double)arg2;
- (double)_secondsUntilBudgetLimitationRemovedNoRegen;
- (NSDate *)lastExpenditure;
- (char)attemptBudgetedExpenditureWithCost:(double)arg0;
- (NSString *)description;
- (void).cxx_destruct;
- (void)setMaximumThrottleTime:(double)arg0;
- (double)maximumThrottleTime;
- (NSString *)CKPropertiesDescription;
- (double)secondsUntilBudgetLimitationRemoved;
- (char)isLimited;
- (void)expendWithCost:(double)arg0;
- (double)budget;
- (double)regenerationPerSecond;
- (unsigned int)budgetCap;
- (void)setBudgetCap:(unsigned int)arg0;
- (void)setRegenerationPerSecond:(double)arg0;
- (void)regenerate;

@end
