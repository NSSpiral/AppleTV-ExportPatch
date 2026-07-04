/* Runtime dump - GKPeerInternal
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface GKPeerInternal : NSObject <GKTableCleanupWhenRemoved>
{
    unsigned int _pid;
    NSString * _displayName;
    NSString * _serviceName;
    char _isBusy;
    GKSessionInternal * _session;
    int _serviceCount;
    struct _DNSServiceRef_t * _resolveService;
    struct _DNSServiceRef_t * _txtRecordService;
    id * _addrList;
    unsigned int * _interfaceList;
    unsigned int _servicePort;
    struct _DNSServiceRef_t * * _lookupServiceList;
    int _lookupServiceCount;
    int _lookupServiceSize;
    char _moreResolvesComing;
    double _connectTimeout;
    char _needsToTimeout;
}

@property (readonly) unsigned int pid;
@property (readonly) NSString * displayName;
@property (readonly) NSString * serviceName;
@property char busy;
@property int serviceCount;
@property struct _DNSServiceRef_t * resolveService;
@property struct _DNSServiceRef_t * txtRecordService;
@property unsigned int servicePort;
@property char moreResolvesComing;
@property (retain, nonatomic) GKSessionInternal * session;
@property double connectTimeout;
@property char needsToTimeout;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (void)freeLookupList:(struct _DNSServiceRef_t * *)arg0 andAddrList:(struct _DNSServiceRef_t)arg1 andInterfaceList:(id *)arg2 count:(unsigned int *)arg3;

- (void)dealloc;
- (NSString *)displayName;
- (GKSessionInternal *)session;
- (void)setSession:(GKSessionInternal *)arg0;
- (unsigned int)pid;
- (NSString *)serviceName;
- (void)cleanupForGKTable:(GKTable *)arg0;
- (char)tryDetruncateDisplayName:(NSString *)arg0;
- (void)clearResolving;
- (void)setNeedsToTimeout:(char)arg0;
- (void)stopResolving;
- (void)stopTXTRecordMonitoring;
- (double)connectTimeout;
- (char)needsToTimeout;
- (void)setConnectTimeout:(double)arg0;
- (void)setResolveService:(struct _DNSServiceRef_t *)arg0;
- (void)setBusy:(char)arg0;
- (int)serviceCount;
- (void)setServiceCount:(int)arg0;
- (GKPeerInternal *)initWithPID:(unsigned int)arg0 displayName:(NSString *)arg1 serviceName:(NSString *)arg2;
- (void)setTxtRecordService:(struct _DNSServiceRef_t *)arg0;
- (int)usableAddrs;
- (void)removeAndReturnLookupList:(struct _DNSServiceRef_t * * *)arg0 andAddrList:(struct _DNSServiceRef_t *)arg1 andInterfaceList:(id * *)arg2 count:(NSObject *)arg3;
- (char)containsLookupService:(struct _DNSServiceRef_t *)arg0;
- (void)setAddr:(struct sockaddr_in *)arg0 interface:(struct sockaddr_in)arg1 forLookupService:(NSObject *)arg2;
- (struct _DNSServiceRef_t *)resolveService;
- (void)setServicePort:(unsigned int)arg0;
- (void)addLookup:(struct _DNSServiceRef_t *)arg0;
- (void)copyLookupList:(struct _DNSServiceRef_t * * *)arg0 count:(struct _DNSServiceRef_t *)arg1;
- (struct _DNSServiceRef_t *)txtRecordService;
- (unsigned int)servicePort;
- (char)moreResolvesComing;
- (void)setMoreResolvesComing:(char)arg0;
- (char)isBusy;

@end
