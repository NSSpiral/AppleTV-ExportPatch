/* Runtime dump - CMActivityAlarmProxy
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMActivityAlarmProxy : NSObject
{
    id _internal;
    struct CLConnectionClient * fLocationdConnection;
    int fAlarmCounter;
    NSMutableDictionary * fAlarms;
    NSObject<OS_dispatch_queue> * fReplyQueue;
    BOOL fAlarmAvailable;
    NSObject<OS_dispatch_source> * fWatchdogTimer;
}

+ (CMActivityAlarmProxy *)sharedInstance;

- (void)_startWatchdogCheckins;
- (void)_stopWatchdogCheckins;
- (char)activityAlarmAvailable;
- (void)listenForActivityAlarm:(id)arg0;
- (void)stopListeningForActivityAlarm:(id)arg0;
- (void)dealloc;
- (CMActivityAlarmProxy *)init;

@end
