/* Runtime dump - NSNetServicesInternal
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSNetServicesInternal : NSObject
{
    NSMutableArray * _monitors;
    NSObject<OS_tcp_listener> * _listener;
    struct __CFRunLoop * _scheduledRunLoop;
    struct __CFString * _scheduledMode;
}

@property (retain) NSMutableArray * monitors;

- (void)copyScheduledRunLoop:(struct __CFRunLoop * *)arg0 andMode:(struct __CFRunLoop)arg1;
- (void)setScheduledRunLoop:(struct __CFRunLoop *)arg0 andMode:(struct __CFString *)arg1;
- (NSMutableArray *)monitors;
- (void)setMonitors:(NSMutableArray *)arg0;
- (void)dealloc;
- (NSObject<OS_tcp_listener> *)listener;
- (void)setListener:(NSObject<OS_tcp_listener> *)arg0;
- (void)finalize;

@end
