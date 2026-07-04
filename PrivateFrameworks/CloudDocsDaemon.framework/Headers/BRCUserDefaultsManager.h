/* Runtime dump - BRCUserDefaultsManager
 * Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate>
{
    NSURL * _serverConfigurationURL;
    NSDictionary * _serverConfigurationDict;
    NSMutableDictionary * _userDefaultsCache;
    id _configurationPlistDidUpdateBlock;
    NSOperationQueue * _downloadQueue;
    NSURLSession * _urlSession;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (BRCUserDefaultsManager *)init;
- (void)reset;
- (void).cxx_destruct;
- (NSString *)defaultsForContainerIdentifier:(NSString *)arg0;
- (void)setServerConfigurationURL:(NSURL *)arg0 whenLoaded:(id)arg1;
- (void)_prepopulateGlobalContainerUserDefaults;
- (void)_loadServerConfigurationDictionary;
- (void)_parsePlistWithURL:(NSString *)arg0;
- (void)URLSession:(NSURLSession *)arg0 downloadTask:(NSObject *)arg1 didFinishDownloadingToURL:(NSURL *)arg2;
- (void)URLSession:(NSURLSession *)arg0 task:(NSObject *)arg1 didCompleteWithError:(NSError *)arg2;
- (void)URLSession:(NSURLSession *)arg0 didBecomeInvalidWithError:(NSError *)arg1;
- (void)_loadCachedServerConfigurationDictionaryFromDB:(id)arg0;
- (void)_saveServerConfigurationDictionaryToDB:(id)arg0;

@end
