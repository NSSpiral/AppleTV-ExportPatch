/* Runtime dump - ATVTRDeviceSetupManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@protocol TRDeviceSetupServerDelegate;
@interface ATVTRDeviceSetupManager : BRSingleton <TRDeviceSetupServerDelegate>
{
    TRDeviceSetupServer * _server;
    char _serverWasStarted;
    char _setupInProgress;
    NSObject<OS_dispatch_source> * _setupDisabledTimer;
    NSObject<OS_dispatch_source> * _setupTimeoutTimer;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVTRDeviceSetupManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;

- (void)_setupDidCancelNotification:(NSNotification *)arg0;
- (void)_cancelSetupTimeout;
- (void)_resetSetupTimeout;
- (void)_cancelSetup;
- (void)dealloc;
- (ATVTRDeviceSetupManager *)init;
- (void)stop;
- (void)start;
- (void).cxx_destruct;
- (void)deviceSetupServer:(TRDeviceSetupServer *)arg0 didFailToReceiveSetupInfo:(NSError *)arg1;
- (void)deviceSetupServerWillReceiveSetupInfo:(TRDeviceSetupServer *)arg0 forDeviceName:(NSString *)arg1;
- (void)deviceSetupServer:(TRDeviceSetupServer *)arg0 didReceiveSetupInfo:(NSDictionary *)arg1;

@end
