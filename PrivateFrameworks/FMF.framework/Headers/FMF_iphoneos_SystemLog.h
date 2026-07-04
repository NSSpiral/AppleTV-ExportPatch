/* Runtime dump - FMF_iphoneos_SystemLog
 * Image: /System/Library/PrivateFrameworks/FMF.framework/FMF
 */

@interface FMF_iphoneos_SystemLog : FMFSystemLog

- (FMF_iphoneos_SystemLog *)init;
- (char)isLoggingToFile;
- (void)startLoggingToFile:(NSString *)arg0;
- (void)stopLoggingToFile;
- (void)writeLevel:(unsigned int)arg0 facility:(char *)arg1 path:(char *)arg2 line:(unsigned int)arg3 function:(char *)arg4 format:(NSString *)arg5;

@end
