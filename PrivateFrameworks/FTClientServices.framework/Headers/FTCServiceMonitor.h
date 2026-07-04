/* Runtime dump - FTCServiceMonitor
 * Image: /System/Library/PrivateFrameworks/FTClientServices.framework/FTClientServices
 */

@interface FTCServiceMonitor : NSObject
{
    int _availability;
    int _type;
    int _token;
}

@property (readonly, nonatomic) int serviceType;

- (FTCServiceMonitor *)initWithServiceType:(int)arg0;
- (void)dealloc;
- (int)serviceType;
- (int)serviceAvailability;
- (void)updateAvailability;
- (void)_updateAvailability;
- (void)_postAvailability:(int)arg0;
- (void)handleActiveAccountsChanged:(NSNotification *)arg0;

@end
