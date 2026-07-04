/* Runtime dump - MCNetrbManager
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCNetrbManager : NSObject
{
    struct __CFRunLoopSource * _scRunLoopSource;
    struct __SCDynamicStore * _scDynamicStore;
    struct NETRBClient * _netClient;
    int _state;
    int _reason;
    char _needStateUpdate;
    RadiosPreferences * _radioPrefs;
}

+ (MCNetrbManager *)sharedManager;

- (MCNetrbManager *)init;
- (void)setState:(int)arg0;
- (void).cxx_destruct;
- (void)cellDataChangedNotification:(NSNotification *)arg0;
- (void)attachMIS;
- (void)authenticate;
- (void)stopService;
- (void)readMISState:(int *)arg0 andReason:(int *)arg1;
- (void)detachMIS;
- (char)didUserPreventData;
- (void)getState:(int *)arg0 andReason:(int *)arg1;

@end
