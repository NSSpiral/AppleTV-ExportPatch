/* Runtime dump - FTCServiceAvailabilityCenter
 * Image: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

@interface FTCServiceAvailabilityCenter : NSObject
{
    NSMutableDictionary * _availabilityHandlers;
}

+ (FTCServiceAvailabilityCenter *)sharedInstance;

- (char)removeListenerID:(NSObject *)arg0 forService:(int)arg1;
- (int)availabilityForListenerID:(NSObject *)arg0 forService:(int)arg1;
- (char)addListenerID:(NSObject *)arg0 forService:(int)arg1;
- (void)dealloc;
- (FTCServiceAvailabilityCenter *)init;
- (void)_postNotificationForService:(int)arg0 availability:(int)arg1;
- (void)_handleServiceMonitorNotification:(NSNotification *)arg0;
- (char)_isValidServiceType:(int)arg0;
- (void)_startListeningToMonitor:(id)arg0;
- (NSObject *)containerForService:(int)arg0 create:(char)arg1;
- (void)_stopListeningToMonitor:(id)arg0;
- (char)hasListenerID:(NSObject *)arg0 forService:(int)arg1;

@end
