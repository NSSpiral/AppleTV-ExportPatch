/* Runtime dump - PLTimeReferenceBaseband
 * Image: /System/Library/PrivateFrameworks/PowerlogCore.framework/PowerlogCore
 */

@interface PLTimeReferenceBaseband : PLTimeReferenceDynamic
{
    char _followupCurrentTimeRunning;
    PLNSNotificationOperatorComposition * _basebandTimeNotification;
}

@property (retain) PLNSNotificationOperatorComposition * basebandTimeNotification;
@property char followupCurrentTimeRunning;

- (void)dealloc;
- (void).cxx_destruct;
- (PLTimeReferenceBaseband *)initWithTimeManager:(<PLTimeReferenceManager> *)arg0 entryDefinitionKey:(NSString *)arg1 timeReferenceType:(int)arg2;
- (void)timeChangedNotificationReceived:(id)arg0;
- (id)currentBasebandTimeAndLatency;
- (char)followupCurrentTimeRunning;
- (void)setFollowupCurrentTimeRunning:(char)arg0;
- (void)registerForTimeChangedNotification;
- (PLNSNotificationOperatorComposition *)basebandTimeNotification;
- (void)setBasebandTimeNotification:(PLNSNotificationOperatorComposition *)arg0;
- (struct ?)currentTime;

@end
