/* Runtime dump - GKNATObserverInternal
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface GKNATObserverInternal : GKNATObserver
{
    <GKNATObserverDelegate> * _delegate;
    struct __SCDynamicStore * _dynamicStore;
    NSRecursiveLock * _xNATCheck;
    int _lastReportedNATType;
    int _lastReportedCarrierNATType;
    int _lastReportedNonCarrierNATType;
    NSMutableDictionary * _interfaceInfoDictionary;
    char _nonCarrierInterfacesOnly;
    char _checkTCPAndSSL;
    char _favorNonCarrier;
    char _newCarrierType;
    char _addInRangeFlag;
    char _addCarrierFlag;
    char _ignoreNatTypeCache;
    char _ignoreCarrierBundle;
    int _NATCheckRetryCount;
    double _NATCheckRetryDelay;
    NSMutableDictionary * _currentNetworkNames;
    NSObject<OS_dispatch_queue> * _natCheckQueue;
    NSObject<OS_dispatch_queue> * _reportNATQueue;
    NSObject<OS_dispatch_group> * _natCheckGroup;
    NSObject<OS_dispatch_semaphore> * _natCheckNetNameSema;
    char _fNATCheckQueued;
    char _fNATCheckInProgress;
    GKNATObserver_SCContext * _sccontext;
    char _hasNATCheckStarted;
    char _hasNATCheckEnded;
}

- (void)release;
- (void)dealloc;
- (void)setDelegate:(<GKNATObserverDelegate> *)arg0;
- (GKNATObserverInternal *)init;
- (<GKNATObserverDelegate> *)delegate;
- (GKNATObserverInternal *)initWithOptions:(NSDictionary *)arg0;
- (int)currentNATType;
- (void)clearRetries;
- (void)tryNATCheckWithDelay:(double)arg0;
- (void)shouldTryNATCheck;
- (void)registerForNetworkChanges;
- (unsigned int)setFlags:(unsigned int)arg0 forInterface:(GKInterface *)arg1 isCached:(char)arg2 isCachedKey:(NSString *)arg3 mask:(unsigned int)arg4;
- (int)natTypeForCommNATFlags:(unsigned int)arg0 isCarrier:(char)arg1 commnatFlagsCached:(char)arg2 tcpFlagsCached:(char)arg3 sslFlagsCached:(char)arg4;
- (void)calculateSummmaryNATType:(int *)arg0 andCarrierNATType:(int *)arg1 andNonCarrierNATType:(int *)arg2 copyInterfaceInfoDictionary:(id *)arg3;
- (void)reportNATType;
- (char)ensureNatCachePathExists;
- (void)updateNatTypeCache_CachePlistScheme:(NSString *)arg0;
- (NSString *)retrieveNatTypeCache_CachePlistScheme;
- (NSCache *)retrieveNatTypeCache;
- (void)updateNatTypeCache:(NSObject *)arg0;
- (NSObject *)nameForNetworkWithIPPort:(struct tagIPPORT *)arg0 interfaceName:(NSString *)arg1;
- (id)lookupCachedNATFlagsForNetwork:(id)arg0;
- (unsigned int)setCommNATFlags:(unsigned int)arg0 forInterface:(GKInterface *)arg1 isCached:(char)arg2;
- (unsigned int)setTCPFlags:(unsigned int)arg0 forInterface:(GKInterface *)arg1 isCached:(char)arg2;
- (unsigned int)setSSLFlags:(unsigned int)arg0 forInterface:(GKInterface *)arg1 isCached:(char)arg2;
- (struct tagCommNATInfo *)callCommNATTestFromIPPort:(struct tagIPPORT *)arg0;
- (void)cacheNATFlags:(id)arg0 forNetwork:(TSTTableStyleNetwork *)arg1;
- (int)callHTTPTestFromIPPort:(struct tagIPPORT *)arg0 ToServer:(NSObject *)arg1 isSSL:(char)arg2;
- (void)NATCheckWithIPPort:(struct tagIPPORT *)arg0 useCache:(char)arg1;
- (void)HTTPCheckWithIPPort:(struct tagIPPORT *)arg0 useCache:(char)arg1;
- (void)HTTPSCheckWithIPPort:(struct tagIPPORT *)arg0 useCache:(char)arg1;
- (NSString *)retrieveNatTypeCache_OSXGamedScheme;
- (void)updateNatTypeCache_OSXGamedScheme:(NSString *)arg0;

@end
