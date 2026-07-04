/* Runtime dump - FigCaptureThermalMonitor
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigCaptureThermalMonitor : NSObject
{
    NSObject<OS_dispatch_queue> * _notificationQueue;
    int _registrationToken;
    id _torchHandler;
    float _maxTorchLevel;
}

@property (readonly, nonatomic) float maxTorchLevel;

+ (void)initialize;

- (void)dealloc;
- (FigCaptureThermalMonitor *)init;
- (FigCaptureThermalMonitor *)initWithThermalHandler:(id /* block */)arg0;
- (float)maxTorchLevel;
- (void)_thermalNotification:(int)arg0;

@end
