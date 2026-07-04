/* Runtime dump - CalSignalSensor
 * Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalSignalSensor : NSObject
{
    NSObject<OS_dispatch_source> * _signalSource;
    int _signal;
    id _fireBlock;
}

@property (nonatomic) int signal;
@property (copy, nonatomic) id fireBlock;

- (void)dealloc;
- (NSString *)description;
- (void).cxx_destruct;
- (int)signal;
- (void)_shutDownSource;
- (id /* block */)fireBlock;
- (CalSignalSensor *)initWithSignal:(int)arg0;
- (void)startSensor;
- (void)stopSensor;
- (void)setFireBlock:(id /* block */)arg0;
- (void)setSignal:(int)arg0;

@end
