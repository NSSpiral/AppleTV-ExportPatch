/* Runtime dump - MIInstallerClient
 * Image: /System/Library/PrivateFrameworks/MobileInstallation.framework/MobileInstallation
 */

@interface MIInstallerClient : NSObject <MobileInstallerDelegateProtocol>
{
    NSXPCConnection * _connection;
    id _progressBlock;
}

@property (copy, nonatomic) id progressBlock;

+ (MIInstallerClient *)installerWithProgressBlock:(id /* block */)arg0;

- (MIInstallerClient *)init;
- (void).cxx_destruct;
- (void)installPath:(NSString *)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)uninstallIdentifiers:(id)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)lookupUninstalledWithOptions:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (void)clearUninstalledIdentifiers:(id)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)fetchInstalledAppsWithOptions:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (void)fetchDiskUsageForIdentifiers:(id)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)archiveIdentifier:(NSString *)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)removeArchiveForIdentifier:(NSString *)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)listArchivesWithOptions:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (void)processRestoredContainerWithIdentifier:(NSString *)arg0 ofType:(int)arg1 options:(NSDictionary *)arg2 completion:(id /* block */)arg3;
- (void)registerSafeHarborAtPath:(NSString *)arg0 forIdentifier:(NSString *)arg1 ofType:(int)arg2 withOptions:(unsigned long long)arg3 completion:(id /* block */)arg4;
- (void)removeSafeHarborForIdentifier:(NSString *)arg0 ofType:(int)arg1 withOptions:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)listSafeHarborsOfType:(int)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)checkCapabilities:(id)arg0 withOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (void)updateSinfForIdentifier:(NSString *)arg0 withOptions:(unsigned long long)arg1 sinfData:(NSData *)arg2 completion:(id /* block */)arg3;
- (void)updateSinfForLSWithIdentifier:(NSString *)arg0 withOptions:(unsigned long long)arg1 sinfData:(NSData *)arg2 completion:(id /* block */)arg3;
- (void)updateAppDataProtectionWithOptions:(NSDictionary *)arg0 completion:(id /* block */)arg1;
- (MIInstallerClient *)initWithProgressBlock:(id /* block */)arg0;
- (void)reportProgress:(id)arg0;
- (id /* block */)progressBlock;
- (void)setProgressBlock:(id /* block */)arg0;
- (void)_invalidateObject;

@end
