/* Runtime dump - CPNetworkObserver
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPNetworkObserver : NSObject
{
    NSLock * _lock;
    NSMutableDictionary * _reachabilityRequests;
    unsigned int _networkReachability;
    struct __SCNetworkReachability * _networkReach;
    struct __CFDictionary * _networkObservers;
    struct __SCPreferences * _wifiPreferences;
    struct __CFDictionary * _wifiObservers;
    char _networkNotified;
    char _networkReachable;
    char _wifiNotified;
    char _wifiEnabled;
}

+ (CPNetworkObserver *)sharedNetworkObserver;

- (char)isWiFiEnabled;
- (void)dealloc;
- (CPNetworkObserver *)init;
- (void)removeObserver:(NSObject *)arg0;
- (void)_wifiFirstCallBack:(id)arg0;
- (void)_wifiCallBack:(unsigned int)arg0;
- (void)_wifiObserversInitialize;
- (char)isNetworkReachable;
- (void)_networkReachableFirstCallBack:(id)arg0;
- (void)_networkObserversInitialize;
- (void)_networkReachableCallBack:(unsigned int)arg0;
- (void)addWiFiObserver:(NSObject *)arg0 selector:(SEL)arg1;
- (void)removeWiFiObserver:(NSObject *)arg0;
- (void)addObserver:(NSObject *)arg0 selector:(SEL)arg1 forHostname:(id)arg2;
- (void)removeObserver:(NSObject *)arg0 forHostname:(id)arg1;
- (void)addNetworkReachableObserver:(NSObject *)arg0 selector:(SEL)arg1;
- (void)removeNetworkReachableObserver:(NSObject *)arg0;

@end
