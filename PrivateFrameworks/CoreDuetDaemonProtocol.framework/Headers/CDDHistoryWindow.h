/* Runtime dump - CDDHistoryWindow
 * Image: /System/Library/PrivateFrameworks/CoreDuetDaemonProtocol.framework/CoreDuetDaemonProtocol
 */

@interface CDDHistoryWindow : NSObject
{
    NSDate * _start;
    double _duration;
    double _recurrenceDelta;
    double _recurrenceWidth;
}

@property (readonly) NSDate * start;
@property (readonly) double duration;
@property (readonly) double recurrenceDelta;
@property (readonly) double recurrenceWidth;

+ (UIWindow *)allTimeHistoryWindow;
+ (CDDHistoryWindow *)dailyHistoryWindowWithWidth:(double)arg0 endingOnDate:(NSDate *)arg1 historyLengthInDays:(int)arg2;
+ (CDDHistoryWindow *)singleDayHistoryWindowWithWidth:(double)arg0 forDate:(NSDate *)arg1;

- (double)duration;
- (NSDate *)start;
- (void).cxx_destruct;
- (double)recurrenceDelta;
- (double)recurrenceWidth;
- (CDDHistoryWindow *)initWithStart:(NSDate *)arg0 duration:(double)arg1 recurrenceDelta:(double)arg2 recurrenceWidth:(double)arg3 error:(id *)arg4;

@end
