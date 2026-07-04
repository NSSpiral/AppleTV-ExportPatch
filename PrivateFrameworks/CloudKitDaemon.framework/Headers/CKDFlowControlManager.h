/* Runtime dump - CKDFlowControlManager
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDFlowControlManager : NSObject
{
    unsigned int _defaultBudget;
    double _defaultRegeneration;
    NSMutableDictionary * _operationFlowControls;
    double _maximumThrottleTime;
}

@property double maximumThrottleTime;
@property (retain, nonatomic) NSMutableDictionary * operationFlowControls;
@property (nonatomic) unsigned int defaultBudget;
@property (nonatomic) double defaultRegeneration;

- (NSString *)description;
- (void).cxx_destruct;
- (DAStatusReport *)statusReport;
- (CKDFlowControlManager *)initWithDefaultBudget:(unsigned int)arg0 maximumThrottleTime:(double)arg1 andDefaultRegeneration:(double)arg2;
- (void)setDefaultBudget:(unsigned int)arg0;
- (void)setDefaultRegeneration:(double)arg0;
- (void)setMaximumThrottleTime:(double)arg0;
- (unsigned int)defaultBudget;
- (double)defaultRegeneration;
- (double)maximumThrottleTime;
- (NSString *)CKPropertiesDescription;
- (char)checkFlowControlIsLimited:(id)arg0;
- (double)secondsUntilFlowControlNotLimited:(id)arg0;
- (void)updateFlowControlWithLocalErrorForOperation:(NSObject *)arg0;
- (void)updateFlowControl:(BRControl *)arg0 withRetryAfter:(unsigned int)arg1;
- (double)currentBudget:(id)arg0;
- (unsigned int)currentBudgetCap:(id)arg0;
- (double)currentRegeneration:(id)arg0;
- (void)updateFlowControl:(BRControl *)arg0 withCost:(unsigned int)arg1;
- (void)setOperationFlowControls:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)operationFlowControls;
- (NSObject *)_flowControlForOperation:(NSObject *)arg0 createIfNecessary:(char)arg1;
- (NSObject *)_flowControlForOperation:(NSObject *)arg0;

@end
