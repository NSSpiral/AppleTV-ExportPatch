/* Runtime dump - HMDBackgroundAppMessageFilter
 * Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDBackgroundAppMessageFilter : HMDMessageFilter
{
    NSMutableSet * _pidOfAppsRunningInBackground;
}

@property (retain, nonatomic) NSMutableSet * pidOfAppsRunningInBackground;

+ (char)isWhitelistedMessage:(NSString *)arg0;

- (void).cxx_destruct;
- (HMDBackgroundAppMessageFilter *)initWithName:(NSString *)arg0;
- (void)updateAppWithPid:(int)arg0 runningInBackground:(char)arg1;
- (char)acceptMessage:(NSString *)arg0 target:(NSObject *)arg1 errorReason:(id *)arg2;
- (NSMutableSet *)pidOfAppsRunningInBackground;
- (void)setPidOfAppsRunningInBackground:(NSMutableSet *)arg0;

@end
