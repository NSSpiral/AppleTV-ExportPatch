/* Runtime dump - PEPServiceConfiguration
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface PEPServiceConfiguration : NSObject
{
    NSString * _cacheFilePath;
    char _shouldDownloadNetworkConfigFile;
    double _cachedFileLastModifyDate;
}

+ (PEPServiceConfiguration *)sharedInstance;

- (void)dealloc;
- (PEPServiceConfiguration *)init;
- (void)_postNotification;
- (char)registerNetworkDefaultsForAppIDs:(id)arg0 forceUpdate:(char)arg1;
- (void)_updateDefaults:(id)arg0;
- (char)registerNetworkDefaultsForAppID:(NSObject *)arg0;

@end
