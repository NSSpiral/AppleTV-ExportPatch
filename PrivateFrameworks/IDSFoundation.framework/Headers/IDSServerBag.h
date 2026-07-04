/* Runtime dump - IDSServerBag
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSServerBag : NSObject
{
    char _allowSelfSignedCertificates;
    char _allowUnsignedBags;
    IMConnectionMonitor * _connectionMonitor;
    NSURL * _bagURL;
    NSString * _apsEnvironmentName;
    NSDictionary * _bag;
    NSDictionary * _cachedBag;
    NSMutableURLRequest * _urlRequest;
    IDSRemoteURLConnection * _remoteURLConnection;
    NSObject<OS_dispatch_queue> * _bagQueue;
    NSString * _cachedURLString;
    int _trustStatus;
    NSData * _certData;
    NSString * _cachedHash;
    NSDate * _loadDate;
    NSNumber * _cacheTime;
    int _token;
    unsigned long long _hasPairedDeviceState;
}

@property (retain) NSURL * bagURL;
@property (retain) NSString * apsEnvironmentName;
@property char allowSelfSignedCertificates;
@property char allowUnsignedBags;
@property (readonly) char isLoaded;
@property (readonly) char isLoading;
@property (readonly) char isInDebilitatedMode;
@property (readonly) char isServerAvailable;
@property (retain) IMConnectionMonitor * _connectionMonitor;
@property (retain) NSDictionary * _bag;
@property (retain) NSDictionary * _cachedBag;
@property (retain) NSMutableURLRequest * _urlRequest;
@property (retain) NSString * _cachedURLString;
@property (retain) NSString * _cachedHash;
@property (retain) NSDate * _loadDate;
@property (retain) NSNumber * _cacheTime;
@property IDSRemoteURLConnection * _remoteURLConnection;
@property NSObject<OS_dispatch_queue> * _bagQueue;
@property int _trustStatus;
@property (retain) NSData * _certData;
@property int token;
@property unsigned long long hasPairedDeviceState;

+ (IDSServerBag *)sharedInstance;
+ (IDSServerBag *)sharedInstanceForBagType:(int)arg0;
+ (IDSServerBag *)_bagCreationLock;
+ (NSObject *)_sharedInstanceForClass:(Class)arg0;
+ (IDSServerBag *)_sharedInstance;

- (NSString *)objectForKey:(NSString *)arg0;
- (void)dealloc;
- (char)isLoading;
- (char)isLoaded;
- (void)_invalidate;
- (int)token;
- (void)setToken:(int)arg0;
- (void)startBagLoad;
- (char)isServerAvailable;
- (NSURL *)_initWithURL:(NSString *)arg0 apsEnvironmentName:(NSString *)arg1 allowSelfSignedCertificates:(char)arg2 allowUnsignedBags:(char)arg3;
- (NSString *)_bagDefaultsDomain;
- (NSString *)apsEnvironmentName;
- (NSNumber *)_cacheTime;
- (NSDictionary *)_bag;
- (void)_setCachedBag:(id)arg0;
- (void)_setCachedURLString:(NSString *)arg0;
- (void)_setBag:(id)arg0;
- (void)_setTrustStatus:(int)arg0;
- (void)__saveCacheToPrefs;
- (NSDictionary *)_cachedBag;
- (void)_saveCacheToPrefs;
- (void)_setCachedHash:(id)arg0;
- (void)_loadFromCache;
- (void)_saveToCache;
- (char)_allowInvalid;
- (int)_trustStatus;
- (char)_loadFromDictionary:(NSDictionary *)arg0 returningError:(id *)arg1;
- (char)_loadFromSignedDictionary:(NSDictionary *)arg0 returningError:(id *)arg1;
- (NSString *)_cachedURLString;
- (char)isInDebilitatedMode;
- (void)_generateURLRequest;
- (void)_cancelCurrentLoad;
- (void)_processBagResultData:(NSData *)arg0 response:(NSURLResponse *)arg1 inBackground:(char)arg2;
- (void)_startBagLoad:(char)arg0;
- (void)_clearCache;
- (void)_bagExternallyReloaded;
- (void)forceBagLoad;
- (NSString *)urlWithKey:(NSString *)arg0;
- (IMConnectionMonitor *)_connectionMonitor;
- (void)set_connectionMonitor:(IMConnectionMonitor *)arg0;
- (NSURL *)bagURL;
- (void)setBagURL:(NSURL *)arg0;
- (void)setApsEnvironmentName:(NSString *)arg0;
- (NSMutableURLRequest *)_urlRequest;
- (void)set_urlRequest:(NSMutableURLRequest *)arg0;
- (IDSRemoteURLConnection *)_remoteURLConnection;
- (void)set_remoteURLConnection:(IDSRemoteURLConnection *)arg0;
- (NSObject<OS_dispatch_queue> *)_bagQueue;
- (void)set_bagQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSData *)_certData;
- (void)set_certData:(NSData *)arg0;
- (NSString *)_cachedHash;
- (NSDate *)_loadDate;
- (void)set_loadDate:(NSDate *)arg0;
- (void)set_cacheTime:(NSNumber *)arg0;
- (char)allowSelfSignedCertificates;
- (void)setAllowSelfSignedCertificates:(char)arg0;
- (char)allowUnsignedBags;
- (void)setAllowUnsignedBags:(char)arg0;
- (unsigned long long)hasPairedDeviceState;
- (void)setHasPairedDeviceState:(unsigned long long)arg0;
- (void)connectionMonitorDidUpdate:(NSDate *)arg0;

@end
