/* Runtime dump - CMOdometerProxy
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMOdometerProxy : NSObject
{
    NSObject<OS_dispatch_queue> * fInternalQueue;
    NSObject<OS_dispatch_queue> * fCallbackQueue;
    struct CLConnectionClient * fLocationdConnection;
    id fHandler;
    int fGpsAvailability;
    CMOdometer * _odometer;
    int _mode;
    double _totalDistance;
    double _averageSpeed;
    double _startDate;
}

@property (nonatomic) CMOdometer * odometer;
@property int mode;
@property double totalDistance;
@property double averageSpeed;
@property double startDate;

- (double)averageSpeed;
- (void)_stopOdometerUpdates;
- (CMOdometer *)odometer;
- (void)setAverageSpeed:(double)arg0;
- (CMOdometerProxy *)initWithOdometer:(CMOdometer *)arg0;
- (void)_startDaemonConnection;
- (void)_startOdometerUpdatesForActivity:(int)arg0 withHandler:(id /* block */)arg1;
- (void)setOdometer:(CMOdometer *)arg0;
- (void)dealloc;
- (double)totalDistance;
- (void)setTotalDistance:(double)arg0;
- (void)setMode:(int)arg0;
- (int)mode;
- (void)setStartDate:(double)arg0;
- (void)_teardown;
- (double)startDate;

@end
