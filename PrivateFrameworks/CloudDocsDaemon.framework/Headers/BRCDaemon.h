/* Runtime dump - BRCDaemon
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCDaemon : NSObject <BRCReachabilityDelegate, NSXPCListenerDelegate, BRCAccountHandlerDelegate>
{
    NSObject<OS_dispatch_source> * _sigIntSrc;
    NSObject<OS_dispatch_source> * _sigQuitSrc;
    NSObject<OS_dispatch_source> * _sigTermSrc;
    NSXPCListener * _xpcListener;
    NSXPCListener * _tokenListener;
    char _unitTestMode;
    char _resumed;
    char _deviceUnlocked;
    BRCAccountSession * _session;
    BRCCloudFileProvider * _fileProvider;
    BRCVersionsFileProvider * _versionsProvider;
    BRCAccountHandler * _accountHandler;
    NSObject<OS_dispatch_group> * _xpcListenerBlockerUntilReady;
    NSObject<OS_dispatch_group> * _xpcTokenListenerBlockerUntilReady;
    int _serverAvailabilityNotifyToken;
    char _disableAccountChangesHandling;
    char _disableAppsChangesHandling;
    NSString * _logsDirPath;
    NSString * _appSupportDirPath;
    NSString * _cacheDirPath;
    NSString * _rootDirPath;
    Class _containerClass;
    NSError * _loggedOutError;
    NSString * _ubiquityTokenSalt;
    unsigned int _forceIsGreedyState;
    NSDate * _startupDate;
}

@property (nonatomic) char disableAccountChangesHandling;
@property (nonatomic) char disableAppsChangesHandling;
@property (nonatomic) unsigned int forceIsGreedyState;
@property (retain, nonatomic) NSString * logsDirPath;
@property (retain, nonatomic) NSString * appSupportDirPath;
@property (retain, nonatomic) NSString * cacheDirPath;
@property (retain, nonatomic) NSString * rootDirPath;
@property (readonly, nonatomic) BRCAccountHandler * accountHandler;
@property (retain, nonatomic) BRCAccountSession * session;
@property (retain, nonatomic) NSError * loggedOutError;
@property (readonly, nonatomic) NSXPCListenerEndpoint * endpoint;
@property (readonly, nonatomic) NSString * ubiquityTokenSalt;
@property (readonly, nonatomic) NSDate * startupDate;
@property (retain, nonatomic) Class containerClass;
@property (readonly, nonatomic) BRCCloudFileProvider * fileProvider;
@property (readonly, nonatomic) BRCVersionsFileProvider * versionsProvider;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (MSMediaStreamDaemon *)daemon;

- (BRCDaemon *)init;
- (void)resume;
- (void).cxx_destruct;
- (NSXPCListenerEndpoint *)endpoint;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (BRCAccountSession *)session;
- (NSDate *)startupDate;
- (BRCCloudFileProvider *)fileProvider;
- (BRCVersionsFileProvider *)versionsProvider;
- (void)networkReachabilityChanged:(char)arg0;
- (BRCAccountHandler *)accountHandler;
- (NSString *)appSupportDirPath;
- (NSString *)rootDirPath;
- (NSString *)ubiquityTokenSalt;
- (void)setLoggedOutError:(NSError *)arg0;
- (void)accountHandler:(BRCAccountHandler *)arg0 willChangeSessionFrom:(NSObject *)arg1;
- (void)accountHandler:(BRCAccountHandler *)arg0 didChangeSessionTo:(CPLPushChangeSession *)arg1;
- (void)handleExitSignal:(int)arg0;
- (void)_initSignals;
- (NSString *)cacheDirPath;
- (char)_isDeviceUnlocked;
- (void)setUpSandbox;
- (char)_haveRequiredKernelFeatures;
- (void)waitUntilDeviceIsUnlocked;
- (void)setSession:(BRCAccountSession *)arg0;
- (long long)computePurgableSpaceWithUrgency:(int)arg0;
- (long long)purgeSpace:(long long)arg0 withUrgency:(int)arg1;
- (void)exitWithCode:(int)arg0;
- (NSError *)loggedOutError;
- (void)waitForConfiguration;
- (void)setUpAnonymousListener;
- (void)setUp;
- (char)selfCheck:(struct __sFILE *)arg0;
- (char)status:(struct __sFILE *)arg0;
- (NSString *)logsDirPath;
- (void)setLogsDirPath:(NSString *)arg0;
- (void)setAppSupportDirPath:(NSString *)arg0;
- (void)setCacheDirPath:(NSString *)arg0;
- (void)setRootDirPath:(NSString *)arg0;
- (Class)containerClass;
- (void)setContainerClass:(Class)arg0;
- (char)disableAccountChangesHandling;
- (void)setDisableAccountChangesHandling:(char)arg0;
- (char)disableAppsChangesHandling;
- (void)setDisableAppsChangesHandling:(char)arg0;
- (unsigned int)forceIsGreedyState;
- (void)setForceIsGreedyState:(unsigned int)arg0;

@end
