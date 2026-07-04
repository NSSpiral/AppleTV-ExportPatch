/* Runtime dump - DAiCalendarLogger
 * Image: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
 */

@interface DAiCalendarLogger : NSObject <ICSLoggingDelegate>

+ (DAiCalendarLogger *)sharedLogger;

- (void)logICSMessage:(NSString *)arg0 atLevel:(int)arg1;
- (void)registerWithiCalendar;

@end
