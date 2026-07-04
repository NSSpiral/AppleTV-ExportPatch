/* Runtime dump - CLSimulationManager
 * Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@interface CLSimulationManager : NSObject
{
    double _locationDistance;
    double _locationInterval;
    double _locationSpeed;
    int _locationRepeatBehavior;
    int _locationDeliveryBehavior;
}

@property (nonatomic) int locationDeliveryBehavior;
@property (nonatomic) double locationDistance;
@property (nonatomic) double locationInterval;
@property (nonatomic) double locationSpeed;
@property (nonatomic) int locationRepeatBehavior;

- (NSString *)scenariosPath;
- (void)loadScenarioFromURL:(NSURL *)arg0;
- (id)availableScenarios;
- (id)localizedNameForScenario:(id)arg0;
- (void)selectScenario:(id)arg0;
- (void)setLocationDeliveryBehavior:(int)arg0;
- (void)setLocationDistance:(double)arg0;
- (void)setLocationInterval:(double)arg0;
- (void)setLocationSpeed:(double)arg0;
- (void)stopLocationSimulation;
- (void)clearSimulatedCells;
- (void)setSimulatedCell:(NSObject *)arg0;
- (void)startCellSimulation;
- (void)stopCellSimulation;
- (void)setSimulatedCellRegistrationStatus:(char)arg0;
- (void)setWifiScanResults:(NSArray *)arg0;
- (void)startWifiSimulation;
- (void)stopWifiSimulation;
- (void)setSimulatedWifiPower:(char)arg0;
- (double)locationDistance;
- (double)locationInterval;
- (double)locationSpeed;
- (int)locationRepeatBehavior;
- (int)locationDeliveryBehavior;
- (void)setLocationRepeatBehavior:(int)arg0;
- (void)clearSimulatedLocations;
- (void)appendSimulatedLocation:(NSObject *)arg0;
- (void)startLocationSimulation;
- (CLSimulationManager *)init;
- (void)flush;

@end
