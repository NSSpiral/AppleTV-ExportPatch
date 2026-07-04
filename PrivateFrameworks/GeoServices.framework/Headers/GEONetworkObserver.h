/* Runtime dump - GEONetworkObserver
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEONetworkObserver : NSObject
{
    NSLock * _lock;
    unsigned int _networkReachability;
    struct __SCNetworkReachability * _networkReach;
    struct __CFDictionary * _networkObservers;
    char _networkNotified;
    char _networkReachable;
}

+ (GEONetworkObserver *)allocWithZone:(struct _NSZone *)arg0;
+ (GEONetworkObserver *)sharedNetworkObserver;

- (void)dealloc;
- (GEONetworkObserver *)init;
- (char)isNetworkReachable;
- (void)initializeIfNecessary;
- (void)_networkReachableFirstCallBack:(id)arg0;
- (void)_networkObserversInitialize;
- (void)_networkReachableCallBack:(unsigned int)arg0;
- (char)isCellConnection;
- (void)addNetworkReachableObserver:(NSObject *)arg0 selector:(SEL)arg1;
- (void)removeNetworkReachableObserver:(NSObject *)arg0;

@end
