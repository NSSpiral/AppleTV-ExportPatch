/* Runtime dump - GEONetworkDefaults
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONetworkDefaults : NSObject
{
    NSMutableArray * _completionHandlers;
    char _isRegistering;
    NSDictionary * _networkDefaults;
    NSLock * _networkDefaultsLock;
    NSString * _cacheFilePath;
    int _configChangedToken;
}

+ (GEONetworkDefaults *)sharedNetworkDefaults;
+ (void)setRunningInDaemon:(char)arg0;

- (NSString *)valueForKey:(NSMutableDictionary *)arg0;
- (void)dealloc;
- (GEONetworkDefaults *)init;
- (void)refreshNetworkDefaults;
- (void)registerNetworkDefaults:(id)arg0;
- (void)_registrationComplete;
- (char)needsUpdate;

@end
