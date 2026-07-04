/* Runtime dump - MKAmbientLightMonitor
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKAmbientLightMonitor : NSObject
{
    NSHashTable * _observers;
    char _monitoring;
    int _ambientLightLevel;
    char _debugLogLux;
    struct __IOHIDEventSystemClient * _client;
    struct deque<float, std::__1::allocator<float> > _runningStatBuffer;
    float _runningStatSum;
    float _lightLevelNoneThreshold;
    float _lightLevelLowThreshold;
    float _lightLevelMediumThreshold;
    unsigned int _runningStatSize;
}

@property (readonly, nonatomic) char monitoring;
@property (readonly, nonatomic) int ambientLightLevel;
@property (nonatomic) char debugLogLux;

+ (MKAmbientLightMonitor *)sharedAmbientLightMonitor;

- (char)isMonitoring;
- (void)handleIOHIDEvent:(struct __IOHIDEvent *)arg0;
- (void)_updateThresholds;
- (void)_startMonitoring;
- (void)_stopMonitoring;
- (float)_addSampleAndComputeMean:(float *)arg0;
- (void)startMonitoringWithObserver:(NSObject *)arg0;
- (void)stopMonitoringWithObserver:(NSObject *)arg0;
- (int)ambientLightLevel;
- (char)debugLogLux;
- (void)setDebugLogLux:(char)arg0;
- (void)dealloc;
- (MKAmbientLightMonitor *)init;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
