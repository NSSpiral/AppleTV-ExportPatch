/* Runtime dump - MCMDMClient
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCMDMClient : NSObject
{
    NSXPCConnection * _xpcConnection;
}

@property (retain, nonatomic) NSXPCConnection * xpcConnection;

+ (MCMDMClient *)sharedClient;

- (void)dealloc;
- (void).cxx_destruct;
- (int)accessRights;
- (void)_createAndStartMDMXPCConnection;
- (char)authenticateWithCheckInURL:(NSURL *)arg0 identity:(struct __SecIdentity *)arg1 topic:(NSString *)arg2 useDevelopmentAPNS:(char)arg3 signMessage:(char)arg4 outError:(id *)arg5;
- (char)checkOutCheckInURL:(NSURL *)arg0 identity:(struct __SecIdentity *)arg1 topic:(NSString *)arg2 signMessage:(char)arg3 outError:(id *)arg4;
- (void)notifyNewConfiguration;
- (void)scheduleTokenUpdate;
- (void)retryNotNowResponse;
- (void)simulatePush;
- (void)uprootMDM;
- (char)isManagedByMDM;
- (char)isActivationLockAllowedWhileSupervised;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;

@end
