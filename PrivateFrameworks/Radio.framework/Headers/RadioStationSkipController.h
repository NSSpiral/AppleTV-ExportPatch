/* Runtime dump - RadioStationSkipController
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioStationSkipController : NSObject
{
    NSObject<OS_dispatch_queue> * _accessSerialQueue;
    NSObject<OS_dispatch_source> * _availableSkipsInvalidationTimer;
    char _hasValidNumberOfAvailableSkips;
    char _hasValidSkipInvalidationDate;
    unsigned int _monitoringCount;
    id _skipsEnabled;
    NSDate * _skipInvalidationDate;
    int _numberOfAvailableSkips;
    RadioStation * _station;
}

@property (readonly, nonatomic) int numberOfAvailableSkips;
@property (readonly, nonatomic) char skipsEnabled;
@property (readonly, nonatomic) RadioStation * station;

- (char)isMonitoring;
- (RadioStationSkipController *)initWithStation:(RadioStation *)arg0;
- (RadioStation *)station;
- (void)beginMonitoring;
- (void)endMonitoring;
- (void)dealloc;
- (void).cxx_destruct;
- (void)_modelDidChangeNotification:(NSNotification *)arg0;
- (void)_cancelAvailableSkipsInvalidationTimer;
- (void)_rebuildState;
- (void)_createAvailableSkipsInvalidationTimer;
- (void)_updateForInvalidatedModel;
- (char)hasSkipsEnabled;
- (int)numberOfAvailableSkips;

@end
