/* Runtime dump - CKOperationFlowControlManager
 * Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKOperationFlowControlManager : NSObject
{
    NSMutableDictionary * _flowControlledOperationClasses;
}

@property (readonly) NSMutableDictionary * flowControlledOperationClasses;

- (void)unlimitAllOperations;
- (NSMutableDictionary *)flowControlledOperationClasses;
- (char)isOperationLimited:(id)arg0;
- (double)secondsUntilUnlimited:(id)arg0;
- (void)limitOperation:(NSObject *)arg0 retryAfter:(unsigned long long)arg1;
- (CKOperationFlowControlManager *)init;
- (void).cxx_destruct;
- (DAStatusReport *)statusReport;

@end
