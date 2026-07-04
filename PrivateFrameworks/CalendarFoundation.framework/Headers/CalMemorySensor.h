/* Runtime dump - CalMemorySensor
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalMemorySensor : NSObject
{
    unsigned int _interval;
    NSObject<OS_dispatch_source> * _timer;
    unsigned int _usage;
    id _fireBlock;
}

@property (copy, nonatomic) id fireBlock;
@property (readonly, nonatomic) unsigned int usage;

- (void)dealloc;
- (CalMemorySensor *)init;
- (void).cxx_destruct;
- (void)_setupTimer;
- (id /* block */)fireBlock;
- (void)setFireBlock:(id /* block */)arg0;
- (CalMemorySensor *)initWithMonitorInterval:(unsigned int)arg0;
- (void)_monitorMemory;
- (void)stopMonitoringMemory;
- (void)startMonitoringMemory;
- (void)defaultMessageTraceForApp:(id)arg0;
- (unsigned int)usage;

@end
