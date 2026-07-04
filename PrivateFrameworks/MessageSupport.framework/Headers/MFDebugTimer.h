/* Runtime dump - MFDebugTimer
 * Image: /System/Library/PrivateFrameworks/MessageSupport.framework/MessageSupport
 */

@interface MFDebugTimer : NSObject
{
    double _timer_base;
    unsigned long long _timer_start;
    unsigned long long _timer_end;
    unsigned long long _timer_ticks;
    double _timer_nsecs;
    NSString * name;
}

@property (retain) NSString * name;

+ (MFDebugTimer *)sharedTimer;
+ (NSString *)timerWithName:(NSString *)arg0;

- (id)rebase;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (MFDebugTimer *)initWithName:(NSString *)arg0;
- (unsigned long long)measureWithLogText:(NSString *)arg0;
- (unsigned long long)measure;

@end
