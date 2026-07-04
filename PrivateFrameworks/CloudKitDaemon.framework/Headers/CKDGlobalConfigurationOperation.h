/* Runtime dump - CKDGlobalConfigurationOperation
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDGlobalConfigurationOperation : CKDOperation
{
    CKDServerConfiguration * _configuration;
    NSObject<OS_dispatch_group> * _configurationFetchedGroup;
}

@property (retain, nonatomic) CKDServerConfiguration * configuration;
@property (retain, nonatomic) NSObject<OS_dispatch_group> * configurationFetchedGroup;

- (void)setConfiguration:(CKDServerConfiguration *)arg0;
- (void)main;
- (void).cxx_destruct;
- (CKDServerConfiguration *)configuration;
- (char)shouldCheckAppVersion;
- (void)setConfigurationFetchedGroup:(NSObject<OS_dispatch_group> *)arg0;
- (NSObject<OS_dispatch_group> *)configurationFetchedGroup;

@end
