/* Runtime dump - CPLConfiguration
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLConfiguration : NSObject
{
    NSURL * _configurationFileURL;
    NSDictionary * _configuration;
    NSDate * _lastUpdate;
    double _updateInterval;
    NSURLSession * _currentSession;
    NSObject<OS_dispatch_queue> * _lock;
}

+ (void)disableConfigurationFetching;

- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (void).cxx_destruct;
- (void)_save;
- (void)_load;
- (void)check;
- (CPLConfiguration *)initWithClientLibraryBaseURL:(NSURL *)arg0;
- (void)refetchFromDisk;
- (double)_updateInterval;
- (void)_setContents:(UIKBKeyDisplayContents *)arg0;

@end
