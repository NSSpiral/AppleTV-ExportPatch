/* Runtime dump - FTEntitlementSupport
 * Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@interface FTEntitlementSupport : NSObject
{
    struct __CTServerConnection * _ctServerConnection;
    struct __CFString * _entitlementStatus;
}

@property (readonly, nonatomic) char faceTimeNonWiFiEntitled;
@property (readonly, retain, nonatomic) NSDictionary * registrationState;

+ (FTEntitlementSupport *)sharedInstance;

- (FTEntitlementSupport *)init;
- (char)faceTimeNonWiFiEntitled;
- (NSDictionary *)registrationState;
- (char)_setupCTServerConnection;
- (void)_cleanupMachInfo;
- (char)_registerForCTEntitlementNotifications;
- (void)_unregisterForCTEntitlementNotifications;
- (void)_handleEntitlementNotification:(struct __CFDictionary *)arg0;
- (void)_registrationStateChanged;
- (char)_disconnectCTServerConnection;
- (char)_reconnectCTServerConnectionIfNecessary;
- (id)_rawEntitlementValue;
- (void)_handleCTServiceRequestName:(struct __CFString *)arg0 userInfo:(struct __CFDictionary *)arg1 contextInfo:(void *)arg2;

@end
