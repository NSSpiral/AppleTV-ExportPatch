/* Runtime dump - AOSNotifySession
 * Image: /System/Library/PrivateFrameworks/AOSNotification.framework/AOSNotification
 */

@interface AOSNotifySession : NSObject <AOSXPCClientProtocol>
{
    NSXPCConnection * _xpcConnection;
    NSObject<OS_dispatch_queue> * _xpcConnectionCreationQueue;
    id _fmfAppPushMsgHandler;
    id _fmfAppPushTokenHandler;
}

@property (retain, nonatomic) NSXPCConnection * xpcConnection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * xpcConnectionCreationQueue;
@property (copy, nonatomic) id fmfAppPushMsgHandler;
@property (copy, nonatomic) id fmfAppPushTokenHandler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (AOSNotifySession *)sharedInstance;
+ (NSNumber *)copyStoreAccount;

- (void)dealloc;
- (AOSNotifySession *)init;
- (void).cxx_destruct;
- (void)retrieveLegacyFMFAccountUsingCallback:(id /* block */)arg0;
- (void)removeLegacyFMFAccountUsingCallback:(id /* block */)arg0;
- (void)didReceiveFMFAppPushMessage:(SEL)arg0;
- (void)didReceiveFMFAppPushToken:(SEL)arg0;
- (void)setFmfAppPushMsgHandler:(id /* block */)arg0;
- (void)setFmfAppPushTokenHandler:(id /* block */)arg0;
- (id /* block */)fmfAppPushMsgHandler;
- (id /* block */)fmfAppPushTokenHandler;
- (void)didEnterFMFRegion:(NSObject *)arg0 atLocation:(NSObject *)arg1;
- (void)didExitFMFRegion:(NSObject *)arg0 atLocation:(NSObject *)arg1;
- (void)didChangeFMFAccountInfo:(NSDictionary *)arg0;
- (NSNumber *)addFMFAccount:(NSObject *)arg0;
- (NSString *)removeFMFAccountWithUsername:(NSString *)arg0;
- (NSNumber *)retrieveFMFAccount:(id *)arg0;
- (void)willDeleteiCloudAccountWithCompletion:(id /* block */)arg0;
- (char)performMigration;
- (void)startListeningOnTopic:(id)arg0;
- (void)stopListeningOnTopic:(id)arg0;
- (id)retrieveAllAccounts:(id *)arg0;
- (NSObject *)fmfDeviceId;
- (void)retrieveFMFAccountUsingCallback:(id /* block */)arg0;
- (void)renewFMFAccountCredentialsUsingCallback:(id /* block */)arg0;
- (void)startListeningForFMFAppPushInEnvironment:(NSDictionary *)arg0 withMessageHandler:(NSObject<MBConnectionHandler> *)arg1 tokenHandler:(/* block */ id)arg2;
- (void)stopListeningForFMFAppPush;
- (void)locationAuthorizationForShareMyLocationWithCompletion:(id /* block */)arg0;
- (void)_destroyXPCConnection;
- (NSURLConnection *)currentXPCConnection;
- (id)newErrorForCode:(int)arg0 message:(NSString *)arg1;
- (NSObject *)fmipDeviceId;
- (NSNumber *)fmipAccount;
- (NSObject<OS_dispatch_queue> *)xpcConnectionCreationQueue;
- (void)setXpcConnectionCreationQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSNumber *)iCloudAccount;
- (AOSNotifySession *)initWithDelegate:(NSObject *)arg0;
- (NSXPCConnection *)xpcConnection;
- (void)setXpcConnection:(NSXPCConnection *)arg0;
- (SSAccount *)storeAccount;

@end
