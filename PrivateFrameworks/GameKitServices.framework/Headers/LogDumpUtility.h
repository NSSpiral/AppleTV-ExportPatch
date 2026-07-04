/* Runtime dump - LogDumpUtility
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface LogDumpUtility : NSObject

+ (NSString *)getHomeDirPath;
+ (char)createDirectoy:(id)arg0;
+ (NSString *)getDefaultLogDumpPath;
+ (void)AddFileToMarco:(id)arg0 logCategory:(int)arg1;
+ (LogDumpUtility *)openLogDump:(int)arg0 logNameType:(int)arg1 prefix:(NSString *)arg2 suffix:(NSString *)arg3 marcoLog:(int)arg4 fullFilename:(id *)arg5;
+ (NSString *)createLogFilename:(int)arg0 logNameType:(int)arg1 prefix:(NSString *)arg2 suffix:(NSString *)arg3 marcoLog:(int)arg4;

@end
