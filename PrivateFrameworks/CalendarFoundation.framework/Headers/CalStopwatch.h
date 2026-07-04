/* Runtime dump - CalStopwatch
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalStopwatch : NSObject
{
    char _isRunning;
    unsigned long long _lastStartTime;
    unsigned long long _elapsedTime;
    char _hasValidElapsedTime;
    NSMutableDictionary * _events;
}

- (unsigned long long)elapsedTimeAsNumber:(int)arg0;
- (CalStopwatch *)init;
- (NSString *)description;
- (void)reset;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (unsigned long long)elapsedTimeInNanoseconds;
- (NSString *)elapsedTimeAsString:(int)arg0;
- (void)markEventStart:(id)arg0;
- (double)markEventSplit:(id)arg0;
- (double)markEventEnd:(id)arg0;

@end
