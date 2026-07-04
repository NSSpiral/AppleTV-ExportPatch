/* Runtime dump - ATVHSServiceClient
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSServiceClient : NSObject <ATVHSServiceClientProtocol>
{
    NSString * _groupID;
    NSString * _accountName;
    NSXPCConnection * _xpcConnection;
    NSString * _homeSharingGroupID;
    NSString * _homeSharingAccountName;
}

@property (readonly, nonatomic) char homeSharingEnabled;
@property (readonly, copy, nonatomic) NSString * groupID;
@property (readonly, copy, nonatomic) NSString * accountName;
@property (retain, nonatomic) NSXPCConnection * xpcConnection;
@property (copy, nonatomic) NSString * homeSharingGroupID;
@property (copy, nonatomic) NSString * homeSharingAccountName;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVHSServiceClient *)sharedInstance;
+ (NSObject *)_dataServerIDForDataClient:(NSObject *)arg0;
+ (NSObject *)_dataClientRegisteredWithDataServerID:(NSObject *)arg0;
+ (NSObject *)_dataClientRegisteredWithDataServer:(ATVDataServer *)arg0;

- (NSString *)homeSharingGroupID;
- (void)setHomeSharingGroupID:(NSString *)arg0;
- (void).cxx_destruct;
- (void)connectDataClient:(NSObject *)arg0;
- (void)requestDidTimeoutWithDataClient:(NSObject *)arg0;
- (void)disconnectAllDataClients:(id)arg0;
- (NSString *)accountName;
- (void)disableHomeSharing;
- (void)encryptData:(NSData *)arg0 dataClient:(ATVDataClient *)arg1 completion:(id /* block */)arg2;
- (void)synchronizeKeybagWithDataClient:(NSObject *)arg0 completion:(id /* block */)arg1;
- (void)checkinWithRentalInfo:(ATVHSRentalInfo *)arg0 dataClient:(ATVDataClient *)arg1 completion:(id /* block */)arg2;
- (void)homeSharingAccountInfoDidChange:(NSDictionary *)arg0;
- (void)homeSharesDidChange:(NSDictionary *)arg0;
- (void)homeShare:(id)arg0 clientConfigurationDidChange:(NSDictionary *)arg1;
- (void)homeShare:(id)arg0 dataDidChange:(NSDictionary *)arg1;
- (void)_setupXPCConnection;
- (NSObject *)_serviceProtocol;
- (void)_updateHomeSharingAccountInfo:(NSDictionary *)arg0;
- (void)_updateHomeShares:(id)arg0;
- (NSString *)homeSharingAccountName;
- (void)_updateHomeSharingAccountInfoWithAccountName:(NSString *)arg0 homeSharingGroupID:(NSString *)arg1;
- (void)_updateDataClientRegisteredToDataServerID:(NSObject *)arg0 clientConfiguration:(ATVHSDataClientConfiguration *)arg1;
- (void)_handleXPCDisconnect;
- (void)setXPCConnection:(NSURLConnection *)arg0;
- (void)setHomeSharingAccountName:(NSString *)arg0;
- (NSDictionary *)_dataServerWithServerConfiguration:(ATVHSDataServerConfiguration *)arg0;
- (NSDictionary *)_dataClientWithServerConfiguration:(ATVHSDataServerConfiguration *)arg0;
- (void)_updateDataServer:(NSObject *)arg0 serverConfiguration:(ATVHSDataServerConfiguration *)arg1;
- (void)_updateDataClientRegisteredToDataServer:(NSObject *)arg0 clientConfiguration:(ATVHSDataClientConfiguration *)arg1;
- (void)_updateDataClient:(NSObject *)arg0 clientConfiguration:(ATVHSDataClientConfiguration *)arg1;
- (void)startClientWithCompletion:(id /* block */)arg0;
- (char)isHomeSharingEnabled;
- (void)enableHomeSharingWithAccountName:(NSString *)arg0 password:(NSString *)arg1 completion:(id /* block */)arg2;
- (void)checkoutWithRentalItem:(ATVDataItem *)arg0 dataClient:(ATVDataClient *)arg1 completion:(id /* block */)arg2;
- (NSString *)groupID;
- (NSXPCConnection *)xpcConnection;

@end
