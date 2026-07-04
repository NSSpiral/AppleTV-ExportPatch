/* Runtime dump - CalMessageTracer
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalMessageTracer : NSObject

+ (void)log:(NSData *)arg0 domain:(NSString *)arg1 signature:(NSObject *)arg2 signature2:(NSObject *)arg3 summarize:(char)arg4;
+ (void)log:(NSData *)arg0 domain:(NSString *)arg1 signature:(NSObject *)arg2 result:(int)arg3;
+ (void)log:(NSData *)arg0 domain:(NSString *)arg1 signature:(NSObject *)arg2 result:(int)arg3 value:(NSObject *)arg4 summarize:(char)arg5;
+ (void)log:(NSData *)arg0 domain:(NSString *)arg1 signature:(NSObject *)arg2 signature2:(NSObject *)arg3 result:(int)arg4 value:(NSObject *)arg5 value2:(SBJsonStreamWriterStateObjectValue *)arg6 value3:(SBJsonStreamWriterStateObjectValue *)arg7 uid:(id)arg8 uid2:(id)arg9 wakeState:(NSObject *)arg10 summarize:(char)arg11;
+ (void)log:(NSData *)arg0 domain:(NSString *)arg1 signature:(NSObject *)arg2 result:(int)arg3 value:(NSObject *)arg4 value2:(SBJsonStreamWriterStateObjectValue *)arg5 uid:(id)arg6;
+ (void)log:(NSData *)arg0 domain:(NSString *)arg1 signature:(NSObject *)arg2 result:(int)arg3 value:(NSObject *)arg4;
+ (void)logError:(NSError *)arg0 message:(NSString *)arg1 domain:(NSString *)arg2 uid:(id)arg3;
+ (void)traceWithDomain:(NSString *)arg0 signature:(NSObject *)arg1 signature2:(NSObject *)arg2 summarize:(char)arg3;
+ (void)traceWithDomain:(NSString *)arg0 signature:(NSObject *)arg1 result:(int)arg2;
+ (void)traceWithDomain:(NSString *)arg0 signature:(NSObject *)arg1 summarize:(char)arg2;
+ (void)traceWithDomain:(NSString *)arg0 value:(NSObject *)arg1 summarize:(char)arg2;
+ (void)log:(NSData *)arg0 domain:(NSString *)arg1 summarize:(char)arg2;
+ (void)log:(NSData *)arg0 domain:(NSString *)arg1 signature:(NSObject *)arg2 summarize:(char)arg3;
+ (void)log:(NSData *)arg0 domain:(NSString *)arg1 signature:(NSObject *)arg2 result:(int)arg3 value:(NSObject *)arg4 value2:(SBJsonStreamWriterStateObjectValue *)arg5 value3:(SBJsonStreamWriterStateObjectValue *)arg6 uid:(id)arg7 uid2:(id)arg8 wakeState:(NSObject *)arg9;
+ (void)logException:(NSException *)arg0 message:(NSString *)arg1 domain:(NSString *)arg2;
+ (void)logError:(NSError *)arg0 message:(NSString *)arg1 domain:(NSString *)arg2;

@end
