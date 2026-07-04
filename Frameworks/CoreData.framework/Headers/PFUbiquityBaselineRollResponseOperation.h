/* Runtime dump - PFUbiquityBaselineRollResponseOperation
 * Image: /System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface PFUbiquityBaselineRollResponseOperation : PFUbiquityBaselineRollOperation

@property NSObject<PFUbiquityBaselineRollResponseOperationDelegate> * delegate;

- (NSObject *)retainedDelegate;
- (char)canAdoptBaseline:(id)arg0 byReplacingLocalStoreFile:(char *)arg1 withStack:(_PFUbiquityStack *)arg2 withError:(id *)arg3;
- (void)setDelegate:(NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *)arg0;
- (NSObject<PFUbiquityBaselineRollResponseOperationDelegate> *)delegate;
- (void)main;

@end
