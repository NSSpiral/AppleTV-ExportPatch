/* Runtime dump - MKApplicationStateMonitor
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKApplicationStateMonitor : NSObject
{
    BKSApplicationStateMonitor * _appStateMonitor;
    char _inBackground;
    char _active;
    unsigned int _observerCount;
    char _forceBackboardServicesMonitoring;
}

@property (nonatomic) char forceBackboardServicesMonitoring;
@property (readonly, nonatomic) char inBackground;
@property (readonly, nonatomic) char active;

+ (MKApplicationStateMonitor *)sharedInstance;

- (void)startObserving;
- (char)isInBackground;
- (void)_enterBackground;
- (void)_exitBackground;
- (void)_becomeActive;
- (void)setForceBackboardServicesMonitoring:(char)arg0;
- (char)forceBackboardServicesMonitoring;
- (void)_resignActive;
- (void)dealloc;
- (char)isActive;
- (void).cxx_destruct;
- (void)stopObserving;

@end
