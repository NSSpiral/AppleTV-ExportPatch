/* Runtime dump - IDSServiceMonitor
 * Image: /System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSServiceMonitor : NSObject
{
    int _availability;
    NSString * _service;
    int _token;
}

@property (readonly, retain, nonatomic) NSString * service;

- (void)dealloc;
- (NSString *)service;
- (IDSServiceMonitor *)initWithService:(NSString *)arg0;
- (int)serviceAvailability;
- (void)updateAvailability;
- (void)_updateAvailability;
- (void)_postAvailability:(int)arg0;
- (void)handleActiveAccountsChanged:(NSNotification *)arg0;

@end
