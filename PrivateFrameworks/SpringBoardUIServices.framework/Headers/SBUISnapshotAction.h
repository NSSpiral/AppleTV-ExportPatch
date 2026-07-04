/* Runtime dump - SBUISnapshotAction
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUISnapshotAction : BSAction

@property (readonly, nonatomic) SBUISnapshotContext * context;

- (void)sendResponse:(NSURLResponse *)arg0;
- (SBUISnapshotContext *)context;
- (SBUISnapshotAction *)initWithContext:(SBUISnapshotContext *)arg0 handler:(id /* block */)arg1;

@end
