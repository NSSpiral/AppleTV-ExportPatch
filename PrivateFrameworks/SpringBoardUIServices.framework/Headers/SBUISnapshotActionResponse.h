/* Runtime dump - SBUISnapshotActionResponse
 * Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@interface SBUISnapshotActionResponse : BSActionResponse

- (SBUISnapshotActionResponse *)initWithInfo:(NSDictionary *)arg0 error:(NSError *)arg1;
- (SBUISnapshotActionResponse *)_initWithIOSurfaceAssertion:(SBUIIOSurfaceAssertion *)arg0;
- (SBUISnapshotActionResponse *)initWithIOSurfaceRef:(struct __IOSurface *)arg0;
- (struct __IOSurface *)surface;

@end
