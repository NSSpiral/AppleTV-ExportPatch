/* Runtime dump - TRDeviceSetupPeripheral
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRDeviceSetupPeripheral : NSObject
{
    _TRUserNotfication * _activeUserNotification;
    NSString * _authenticationAppleID;
    unsigned int _authenticationAttemptCount;
    NSData * _dataToSend;
    NSObject<OS_dispatch_semaphore> * _dataToSendSemaphore;
    NSString * _deviceGUID;
    char _performingSetup;
    char _preparingForSetup;
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _userAgent;
    <TRDeviceSetupPeripheralDelegate> * _delegate;
}

@property (weak, nonatomic) <TRDeviceSetupPeripheralDelegate> * delegate;

- (NSData *)_didReceiveData:(NSData *)arg0;
- (void)setDelegate:(<TRDeviceSetupPeripheralDelegate> *)arg0;
- (TRDeviceSetupPeripheral *)init;
- (<TRDeviceSetupPeripheralDelegate> *)delegate;
- (void).cxx_destruct;
- (id)_didTap;
- (void)_didDisconnect;
- (char)_canPerformSetupReturningHasWiFiNetwork:(char *)arg0;
- (void)_showUserNotificationForErrorWithTitle:(NSString *)arg0 message:(NSString *)arg1;
- (void)_setupDidFailWithError:(NSError *)arg0;
- (void)_authenticateWithParameters:(NSDictionary *)arg0;
- (void)_setupDidComplete;
- (void)_startAuthentication;
- (char)_showUserNotificationForAppleID:(NSObject *)arg0 returningAppleID:(id *)arg1 password:(id *)arg2;
- (char)_showUserNotificationForRememberPasswordForAppleID:(NSObject *)arg0;
- (char)_showUserNotificationForDiagnosticSubmission;
- (void)_sendSetupDataWithAuthInfo:(NSDictionary *)arg0 diagnosticSubmissionEnabled:(char)arg1 rememberPasswordEnabled:(char)arg2;
- (void)_showUserNotificationForAuthenticationFailure:(id)arg0;
- (char)performSetup;
- (void)cancelPreparingForSetup;
- (void)cancelSetupForStateChange;
- (void)cancelSetupForTimeout;

@end
