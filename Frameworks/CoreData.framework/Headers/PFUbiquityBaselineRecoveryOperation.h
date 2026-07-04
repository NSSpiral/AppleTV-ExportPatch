/* Runtime dump - PFUbiquityBaselineRecoveryOperation
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineRecoveryOperation : PFUbiquityBaselineOperation

@property NSObject<PFUbiquityBaselineRecoveryOperationDelegate> * delegate;

- (NSObject *)retainedDelegate;
- (char)electBaselineURLFromVersions:(id)arg0 withBaseline:(float)arg1 error:(id *)arg2;
- (char)hasCurrentBaseline;
- (char)conflictsExistForBaseline:(id)arg0;
- (char)resolveConflictsForBaseline:(id)arg0 withError:(id *)arg1;
- (char)shouldReplaceLocalStoreWithBaseline:(float)arg0;
- (char)replaceLocalStoreWithBaseline:(float)arg0 error:(id *)arg1;
- (id)electAncestorBaselineForConflictedBaselines:(id)arg0 dissentingBaselines:(id *)arg1;
- (void)setDelegate:(NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (NSObject<PFUbiquityBaselineRecoveryOperationDelegate> *)delegate;
- (void)main;

@end
