/* Runtime dump - EKTravelEngine
 * Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@interface EKTravelEngine : NSObject
{
    NSObject<OS_dispatch_queue> * _travelEngineQueue;
    NSObject<OS_dispatch_source> * _syncYieldTimer;
    PCPersistentTimer * _periodicRefreshTimer;
    char _running;
    char _needsRefresh;
    char _databaseIsEncryptedAndUnreadable;
    char _yieldingToSync;
    NSMutableDictionary * _eventExternalURLsToAgendaEntries;
    EKTravelEngineThrottle * _throttle;
    EKTravelAdvisor * _travelAdvisor;
    id _adviceBlock;
}

@property (copy, nonatomic) id adviceBlock;

+ (NSString *)_engineIdentifier;
+ (int)_geoTransportTypeForCalLocationRoutingMode:(int)arg0;
+ (char)hasTravelEligibleEvents:(id)arg0;

- (void)_receivedTravelAdvice:(id)arg0 forEventWithExternalURL:(NSURL *)arg1;
- (void)setAdviceBlock:(id /* block */)arg0;
- (char)_isProtectedDataAvailable;
- (void)_unregisterAllAgendaItems;
- (void)_unregisterForNotificationObservation;
- (void)_uninstallSyncYieldTimer;
- (void)_registerForNotificationObservation;
- (void)_installPeriodicRefreshTimer;
- (void)_refreshIfNeeded;
- (void)_uninstallPeriodicRefreshTimer;
- (void)_installSyncYieldTimer;
- (id /* block */)adviceBlock;
- (void)_periodicRefreshTimerFired:(id)arg0;
- (void)_locationAuthorizationChanged:(int)arg0;
- (void)_trimAgendaEntriesBeforeDate:(NSDate *)arg0 andAfterDate:(NSDate *)arg1;
- (void)ceaseMonitoringAgendaItemForEventWithExternalURL:(NSURL *)arg0;
- (void)_calDatabaseChangedNotificationReceived;
- (void)_calSyncClientBeginningMultiSaveNotificationReceived;
- (void)_calSyncClientFinishedMultiSaveNotificationReceived;
- (void)_significantTimeChangeNotificationReceived;
- (void)_mobileKeyBagLockStatusNotificationReceived;
- (void)dealloc;
- (EKTravelEngine *)init;
- (void)stop;
- (void)start;

@end
