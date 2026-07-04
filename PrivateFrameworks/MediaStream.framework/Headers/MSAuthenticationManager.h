/* Runtime dump - MSAuthenticationManager
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSAuthenticationManager : NSObject
{
    int _state;
    MSAlertManager * _alertManager;
    int _bagRefetchCount;
    char _isListeningToKeybagChanges;
    int _keybagChangeNotifyToken;
}

@property (readonly, nonatomic) char waitingForAuth;
@property (nonatomic) char isListeningToKeybagChanges;
@property (nonatomic) int keybagChangeNotifyToken;

+ (MSAuthenticationManager *)sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (char)isWaitingForAuth;
- (MSAuthenticationManager *)initWithAlertManager:(MSAlertManager *)arg0;
- (char)isListeningToKeybagChanges;
- (int)keybagChangeNotifyToken;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)setIsListeningToKeybagChanges:(char)arg0;
- (NSObject *)_accountForPersonID:(NSObject *)arg0;
- (void)waitForDeviceUnlock;
- (void)_promptUserForAuthComplianceForAccount:(NSObject *)arg0 personID:(NSString *)arg1;
- (void)didEncounterAuthenticationFailureForPersonID:(NSObject *)arg0;
- (void)didEncounterAuthenticationSuccessForPersonID:(NSObject *)arg0;
- (void)rearmAuthenticationAlert;
- (void)setKeybagChangeNotifyToken:(int)arg0;

@end
