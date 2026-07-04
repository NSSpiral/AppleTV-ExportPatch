/* Runtime dump - PLCloudSharingResetJob
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudSharingResetJob : PLCloudSharingJob

+ (void)resetAllLocalState;

- (void)run;
- (void)runDaemonSide;
- (long long)daemonOperation;

@end
