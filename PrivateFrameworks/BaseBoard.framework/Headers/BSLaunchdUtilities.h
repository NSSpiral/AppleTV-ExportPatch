/* Runtime dump - BSLaunchdUtilities
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSLaunchdUtilities : NSObject

+ (BSLaunchdUtilities *)allJobLabels;
+ (char)stopJobWithLabel:(NSString *)arg0;
+ (char)startJobWithLabel:(NSString *)arg0;
+ (BSLaunchdUtilities *)labelForPID:(int)arg0;
+ (BSLaunchdUtilities *)currentJobLabel;
+ (unsigned long long)lastExitReasonForLabel:(NSString *)arg0;
+ (void)deleteJobWithLabel:(NSString *)arg0;
+ (void)deleteAllJobsWithLabelPrefix:(NSString *)arg0;
+ (char)createJobWithLabel:(NSString *)arg0 bundleIdentifier:(NSString *)arg1 path:(NSString *)arg2 containerPath:(char *)arg3 arguments:(NSDictionary *)arg4 environment:(NSDictionary *)arg5 standardOutputPath:(NSString *)arg6 standardErrorPath:(NSString *)arg7 machServices:(id)arg8 threadPriority:(long long)arg9 waitForDebugger:(char)arg10 denyCreatingOtherJobs:(char)arg11 runAtLoad:(char)arg12 disableASLR:(char)arg13 systemApp:(char)arg14;
+ (int)pidForLabel:(NSString *)arg0;

@end
