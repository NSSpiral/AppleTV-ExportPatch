/* Runtime dump - ADSession
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADSession : NSObject <ADSession_RPC, ADAdSheetProxyDelegate, ADAdSheetConnectionDelegate>
{
    char _applicationCanReceiveBackgroundAds;
    NSMutableArray * _adSpaces;
    int _classicUnavailableToken;
    ADAdSheetConnection * _connection;
}

@property (readonly, nonatomic) <ADSSession_RPC> * rpcProxy;
@property (nonatomic) char applicationCanReceiveBackgroundAds;
@property (retain, nonatomic) NSMutableArray * adSpaces;
@property (nonatomic) int classicUnavailableToken;
@property (retain, nonatomic) ADAdSheetConnection * connection;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ADSession *)sharedInstance;

- (ADSession *)init;
- (ADAdSheetConnection *)connection;
- (void)setConnection:(ADAdSheetConnection *)arg0;
- (void)_appWillResignActive;
- (void)_appDidBecomeActive;
- (<ADSSession_RPC> *)rpcProxy;
- (char)applicationCanReceiveBackgroundAds;
- (char)shouldLaunchAdSheet;
- (void)performWhenConnected:(id)arg0;
- (id)rpcProxyWithErrorHandler:(SSErrorHandler *)arg0;
- (void)_remote_heartbeatTokenDidChange:(NSData *)arg0 expirationDate:(double)arg1 error:(NSError *)arg2;
- (void)_remote_policyEngineDidIdleDisable;
- (NSString *)_linkedOnVersion;
- (NSMutableArray *)adSpaces;
- (NSDictionary *)additionalAdSheetLaunchOptions;
- (NSString *)adSheetMachServiceName;
- (void)configureConnection:(NSXPCConnection *)arg0;
- (char)shouldConnectToAdSheet;
- (void)adSheetConnectionEstablished;
- (void)adSheetConnectionLost;
- (void)registerAdSpace:(NSObject *)arg0;
- (void)unregisterAdSpace:(NSObject *)arg0;
- (void)determineAppInstallAttributionWithCompletionHandler:(id /* block */)arg0;
- (void)lookupAdConversionDetails:(id)arg0;
- (void)addClientToSegments:(id)arg0 replaceExisting:(char)arg1;
- (void)setApplicationCanReceiveBackgroundAds:(char)arg0;
- (void)setAdSpaces:(NSMutableArray *)arg0;
- (int)classicUnavailableToken;
- (void)setClassicUnavailableToken:(int)arg0;

@end
