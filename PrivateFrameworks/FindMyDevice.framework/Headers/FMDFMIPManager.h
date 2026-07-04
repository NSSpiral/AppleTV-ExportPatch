/* Runtime dump - FMDFMIPManager
 * Image: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
 */

@interface FMDFMIPManager : NSObject
{
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionCreationQueue;
}

@property (retain, nonatomic) NSXPCConnection * xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * xpcConnectionCreationQueue;

+ (FMDFMIPManager *)sharedInstance;

- (char)lostModeIsActive;
- (void)dealloc;
- (FMDFMIPManager *)init;
- (void).cxx_destruct;
- (void)fmipStateWithCompletion:(id /* block */)arg0;
- (NSString *)enableFMIPInContext:(unsigned int)arg0;
- (NSString *)disableFMIPUsingToken:(NSString *)arg0 inContext:(unsigned int)arg1;
- (void)_destroyXPCConnection;
- (void)_checkCallingOSUser;
- (NSURLConnection *)currentXPCConnection;
- (id)newErrorForCode:(int)arg0 message:(NSString *)arg1;
- (NSDictionary *)lostModeInfo;
- (void)disableLostMode;
- (void)deviceActivationDidSucceed;
- (char)lockdownShouldDisableDeviceRestore;
- (char)lockdownShouldDisableDevicePairing;
- (NSObject *)fmipDeviceId;
- (NSNumber *)fmipAccount;
- (void)didChangeFMIPAccountInfo:(NSDictionary *)arg0;
- (void)enableActivationLockWithCompletion:(id /* block */)arg0;
- (char)needsLostModeExitAuth;
- (void)didReceiveLostModeExitAuthToken:(NSString *)arg0;
- (void)initiateLostModeExitAuthWithCompletion:(id /* block */)arg0;
- (void)lowBatteryLocateEnabledWithCompletion:(id /* block */)arg0;
- (void)setLowBatteryLocateEnabled:(char)arg0 withCompletion:(id /* block */)arg1;
- (NSObject<OS_dispatch_queue> *)xpcConnectionCreationQueue;
- (void)setXpcConnectionCreationQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_quickFetchFMIPEnabledstate;
- (NSDictionary *)enableLostModeWithInfo:(NSDictionary *)arg0;
- (void)isActivationLockedWithCompletion:(id /* block */)arg0;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;

@end
