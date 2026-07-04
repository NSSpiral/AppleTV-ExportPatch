/* Runtime dump - EKTravelAdvisorRealWorld
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelAdvisorRealWorld : NSObject <EKTravelAdvisorWorld, CLLocationManagerDelegate>
{
    CLLocationManager * _geofenceLocationManager;
    CLLocationManager * _pollingLocationManager;
    char _geofenceUsingSignificantLocationUpdates;
    PCPersistentTimer * _persistentTimer;
    id _geofenceHandler;
    id _locationHandler;
    id _alarmHandler;
    id _locationAuthorizationHandler;
    CLLocation * _geofenceInitialLocation;
    CLLocation * _locationInitialLocation;
    NSBundle * _locationBundle;
    NSObject<OS_dispatch_queue> * _queue;
    EKTravelAgendaItem * _agendaItem;
}

@property (nonatomic) EKTravelAgendaItem * agendaItem;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)_persistentTimerIdentifier;

- (long long)now;
- (EKTravelAgendaItem *)agendaItem;
- (void)setAgendaItem:(EKTravelAgendaItem *)arg0;
- (char)authorizedToAcquireLocation;
- (void)goIntoHibernation;
- (void)disableAlarm;
- (void)alarmFired:(id)arg0;
- (void)disableGeofence;
- (void)setLocationAuthorizationChangeCallback:(id /* block */)arg0;
- (void)setAlarmIn:(double)arg0 block:(id /* block */)arg1;
- (void)setGeofenceWithRadius:(double)arg0 block:(id /* block */)arg1;
- (id)mostRecentLocationSeen;
- (void)getCurrentLocationWithAccuracy:(double)arg0 block:(id /* block */)arg1;
- (void)comeOutOfHibernation;
- (void)dealloc;
- (EKTravelAdvisorRealWorld *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)locationManager:(NSObject *)arg0 didUpdateLocations:(NSArray *)arg1;
- (void)locationManager:(NSObject *)arg0 didFailWithError:(char)arg1;
- (void)locationManager:(NSObject *)arg0 didChangeAuthorizationStatus:(int)arg1;

@end
