/* Runtime dump - AXSubsystem
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXSubsystem : NSObject

+ (NSString *)identifier;
+ (void)initialize;
+ (char)shouldProcessMessageForLogs;
+ (char)shouldIncludeBacktraceInLogs;
+ (char)shouldLogToFile;
+ (int)defaultLogLevel;
+ (NSString *)_errorWithMessage:(NSString *)arg0 underlyingError:(NSError *)arg1;
+ (int)effectiveLogLevel;
+ (NSArray *)subsystems;
+ (NSString *)errorWithDescription:(NSString *)arg0;
+ (NSError *)wrapError:(NSError *)arg0 description:(NSString *)arg1;
+ (void)setPreferredLogLevel:(int)arg0;
+ (void)resetPreferredLogLevel;
+ (char)willLog;
+ (void)setShouldLogToFile:(char)arg0;

@end
