/* Runtime dump - WLKServerConfiguration
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class WLKServerConfigurationResponse;
@interface WLKServerConfiguration : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    NSOperationQueue * _fetchQueue;
    NSOperationQueue * _operationQueue;
    WLKServerConfigurationResponse * _response;
    NSDictionary * _channelsByID;
    int _didChangeNotificationToken;
    NSMutableDictionary * _completions;
    NSString * _UTSK;
    char _loaded;
    char _isFetching;
    id _fetchCompletionHandler;
    NSDictionary * _requiredRequestKeyValuePairsDictionary;
}

@property (readonly, nonatomic) char loaded;
@property (readonly, nonatomic) NSDictionary * dictionary;
@property (readonly, copy, nonatomic) NSDictionary * serverRoutesDictionary;
@property (readonly, copy, nonatomic) NSDate * expirationDate;
@property (copy, nonatomic) id fetchCompletionHandler;
@property (retain, nonatomic) NSDictionary * requiredRequestKeyValuePairsDictionary;
@property char isFetching;

+ (WLKServerConfiguration *)sharedInstance;

- (void)_synchronizeWithCacheAndNotifySelf:(char)arg0 others:(char)arg1;
- (NSDictionary *)requiredRequestKeyValuePairsDictionary;
- (void)_fetchConfigurationInProcess:(NSObject *)arg0;
- (id)_readFromDisk;
- (NSString *)_prevCachePath;
- (NSString *)_readFromDiskPath:(NSString *)arg0;
- (void)_addCompletion:(id /* block */)arg0 forEnvironment:(/* block */ id)arg1;
- (NSString *)_UTSK;
- (void)_setUTSK:(NSSet *)arg0;
- (char)_writeToDisk:(id)arg0;
- (NSDictionary *)_completionsForEnvironment:(NSDictionary *)arg0;
- (void)_clearCompletionsForEnvironment:(NSDictionary *)arg0;
- (NSOperationQueue *)_operationQueue;
- (void)_fetchConfigurationCache:(NSObject *)arg0;
- (void)_synchronizeWithCache:(NSObject *)arg0 notifySelf:(char)arg1 others:(char)arg2;
- (void)_reloadFromCache:(NSObject *)arg0;
- (char)_needCacheRefresh;
- (void)fetchConfiguration:(NSDictionary *)arg0;
- (NSString *)_cachePath;
- (id)_cacheDir;
- (char)isTVEnabled;
- (NSString *)endpointForKey:(NSString *)arg0;
- (NSDictionary *)serverRoutesDictionary;
- (NSURL *)APIBaseURL;
- (NSString *)serverRouteForKey:(NSString *)arg0;
- (void)_fetchConfigurationSynchronously;
- (void)_handleLibraryDidChangeNotification:(NSNotification *)arg0;
- (void)setRequiredRequestKeyValuePairsDictionary:(NSDictionary *)arg0;
- (id)channels;
- (void)_invalidateCache;
- (void)dealloc;
- (WLKServerConfiguration *)init;
- (WLKServerConfiguration *)_init;
- (NSDictionary *)dictionary;
- (void)_commonInit;
- (char)isLoaded;
- (void).cxx_destruct;
- (void)setFetchCompletionHandler:(id /* block */)arg0;
- (id /* block */)fetchCompletionHandler;
- (char)isFetching;
- (void)setIsFetching:(char)arg0;
- (NSDate *)expirationDate;

@end
