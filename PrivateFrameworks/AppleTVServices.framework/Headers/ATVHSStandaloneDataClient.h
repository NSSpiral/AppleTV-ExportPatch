/* Runtime dump - ATVHSStandaloneDataClient
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSStandaloneDataClient : ATVHSDataClient
{
    NSString * _homeShareGroupID;
    struct FPSAPContextOpaque_ * _fairPlaySAPContext;
}

@property (nonatomic) char supportsDRMTokenEncryption;
@property (copy, nonatomic) NSString * homeShareGroupID;
@property (nonatomic) struct FPSAPContextOpaque_ * fairPlaySAPContext;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_processSAPExchange:(unsigned long)arg0 hwInfo:(struct FairPlayHWInfo_)arg1 sapContext:(struct FPSAPContextOpaque_ *)arg2 sapBuffer:(char *)arg3 bufferLength:(unsigned int)arg4 completionHandler:(id /* block */)arg5;
- (void)setFairPlaySAPContext:(struct FPSAPContextOpaque_ *)arg0;
- (void)_establishFairPlayContextWithServerFPVer:(unsigned long)arg0 withCompletionHandler:(id /* block */)arg1;
- (char)_setDatabaseWithResponse:(NSURLResponse *)arg0 daapResponse:(char)arg1;
- (void)_disconnectAllClients;
- (void)concreteDataClientConnect;
- (void)_loginToITunes;
- (void)_loginToPhotoApp;
- (void)_logout;
- (void)concreteDataClientDisconnect;
- (ATVHSStandaloneDataClient *)initWithMachineID:(unsigned long long)arg0 hsGroupID:(NSString *)arg1 sharingVersion:(unsigned long)arg2 clientName:(NSString *)arg3 clientType:(unsigned int)arg4;
- (NSString *)keybagPath;
- (NSString *)homeShareGroupID;
- (void)setHomeShareGroupID:(NSString *)arg0;
- (struct FPSAPContextOpaque_ *)fairPlaySAPContext;
- (void)_photoDatabaseID;
- (void)_photoAppDatabaseInitialUpdate;
- (void)_photoAppDatabaseUpdate:(char)arg0;
- (void)_photoAppDatabaseLongPollUpdate;
- (void)_serverInfo;
- (void)_homeShareVerify;
- (void)_logErrorWithRequest:(NSURLRequest *)arg0 httpStatus:(long)arg1;
- (void)_machineVerify;
- (void)_daapDatabaseID;
- (void)_daapBasePlaylistID;
- (void)_completeLogin;
- (char)_homeShareSupportsDPAP;
- (void)_dpapDatabaseID;
- (void)_login;
- (void)_daapDatabaseInitialUpdate;
- (void)_drmInitialUpdate;
- (void)_photoDatabaseInitialUpdate;
- (void)_daapDatabaseUpdate:(char)arg0;
- (void)_daapDatabaseLongPollUpdate;
- (void)_drmUpdate:(char)arg0;
- (void)_drmLongPollUpdate;
- (void)_photoDatabaseUpdate:(char)arg0;
- (void)_dpapDatabaseUpdate:(char)arg0;
- (void)_imageLibraryUpdate:(char)arg0;
- (void)_imageLibraryLongPollUpdate;
- (void)_dpapDatabaseLongPollUpdate;
- (void)_dpapDatabaseIDOnUpdate;
- (void)_photoDatabaseLongPollUpdate;
- (void)_imageLibraryInitialUpdate;
- (void)_dpapDatabaseInitialUpdate;

@end
