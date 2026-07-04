/* Runtime dump - IDSServiceAvailabilityController
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSServiceAvailabilityController : NSObject
{
    NSMutableDictionary * _availabilityHandlers;
}

+ (IDSServiceAvailabilityController *)sharedInstance;

- (char)removeListenerID:(NSObject *)arg0 forService:(struct __SCNetworkService *)arg1;
- (int)availabilityForListenerID:(NSObject *)arg0 forService:(struct __SCNetworkService *)arg1;
- (char)addListenerID:(NSObject *)arg0 forService:(struct __SCNetworkService *)arg1;
- (void)dealloc;
- (IDSServiceAvailabilityController *)init;
- (void)_postNotificationForService:(NSObject *)arg0 availability:(int)arg1;
- (void)_handleServiceMonitorNotification:(NSNotification *)arg0;
- (char)_isValidServiceType:(NSObject *)arg0;
- (void)_startListeningToMonitor:(id)arg0;
- (NSObject *)containerForService:(NSObject *)arg0 create:(char)arg1;
- (void)_stopListeningToMonitor:(id)arg0;
- (char)hasListenerID:(NSObject *)arg0 forService:(struct __SCNetworkService *)arg1;

@end
