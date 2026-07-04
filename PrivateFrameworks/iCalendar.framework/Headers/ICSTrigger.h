/* Runtime dump - ICSTrigger
 * Image: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
 */

@interface ICSTrigger : ICSProperty

- (ICSTrigger *)initWithDate:(NSDate *)arg0;
- (char)isDurationBased;
- (void)setDuration:(AWDCompanionSyncFullSyncDuration *)arg0;
- (void)setDate:(NSDate *)arg0;
- (ICSTrigger *)initWithDuration:(AWDCompanionSyncFullSyncDuration *)arg0;
- (void)fixAlarmTrigger;
- (ICSTrigger *)initWithDuration:(AWDCompanionSyncFullSyncDuration *)arg0 travelRelativeDuration:(id)arg1;
- (NSNumber *)travelRelativeDuration;

@end
