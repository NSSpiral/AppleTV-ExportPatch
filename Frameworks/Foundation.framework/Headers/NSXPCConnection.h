/* Runtime dump - NSXPCConnection
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCConnection : NSObject <NSXPCProxyCreating>
{
    void * _xconnection;
    id _repliesExpected;
    NSObject<OS_dispatch_queue> * _userQueue;
    unsigned int _state;
    unsigned int _state2;
    id _interruptionHandler;
    id _invalidationHandler;
    id _exportInfo;
    id _repliesRequested;
    id _importInfo;
    <NSObject> * _otherInfo;
    id _reserved1;
    id _lock;
    NSXPCInterface * _remoteObjectInterface;
    NSString * _serviceName;
    NSXPCListenerEndpoint * _endpoint;
    id _eCache;
    id _dCache;
}

@property (readonly, copy) NSString * serviceName;
@property (readonly, retain) NSXPCListenerEndpoint * endpoint;
@property (retain) NSXPCInterface * exportedInterface;
@property (retain) id exportedObject;
@property (retain) NSXPCInterface * remoteObjectInterface;
@property (readonly, retain) id remoteObjectProxy;
@property (copy) id interruptionHandler;
@property (copy) id invalidationHandler;
@property (readonly) int auditSessionIdentifier;
@property (readonly) int processIdentifier;
@property (readonly) unsigned int effectiveUserIdentifier;
@property (readonly) unsigned int effectiveGroupIdentifier;

+ (NSXPCConnection *)callServicesAccountsControllerDelegateXPCInterface;
+ (NSXPCConnection *)callServicesDaemonDelegateXPCInterface;
+ (NSXPCConnection *)callServicesDaemonObserverXPCInterface;
+ (void)dispatchMainIfCurrentXPCConnection:(NSURLConnection *)arg0;
+ (NSXPCConnection *)_currentBoost;
+ (NSXPCConnection *)currentConnection;
+ (void)beginTransaction;
+ (void)endTransaction;

- (NSXPCConnection *)initCellularPlanDatabaseClient;
- (NSXPCConnection *)initVinylTestClient;
- (NSString *)_errorDescription;
- (NSXPCConnection *)initWithServiceName:(NSString *)arg0 options:(unsigned int)arg1;
- (NSXPCConnection *)initWithListenerEndpoint:(NSObject *)arg0;
- (unsigned long long)_generationCount;
- (void)_sendInvocation:(NSObject *)arg0 withProxy:(NSObject *)arg1 remoteInterface:(id)arg2 withErrorHandler:(SSErrorHandler *)arg3 timeout:(/* block */ id)arg4 userInfo:(double)arg5;
- (void)_cancelProgress:(unsigned long long)arg0;
- (void)_pauseProgress:(unsigned long long)arg0;
- (void)_decodeAndInvokeReplyBlockWithData:(NSData *)arg0 sequence:(unsigned long long)arg1 replyInfo:(NSMutableDictionary *)arg2;
- (void)_sendDesistForProxy:(NSObject *)arg0;
- (void)_decodeAndInvokeMessageWithData:(NSData *)arg0;
- (NSURLConnection *)_initWithPeerConnection:(NSURLConnection *)arg0 name:(NSString *)arg1 options:(unsigned int)arg2;
- (NSXPCConnection *)initWithEndpoint:(NSXPCListenerEndpoint *)arg0;
- (void)_sendInvocation:(NSObject *)arg0 withProxy:(NSObject *)arg1 remoteInterface:(id)arg2;
- (void)_sendInvocation:(NSObject *)arg0 withProxy:(NSObject *)arg1 remoteInterface:(id)arg2 withErrorHandler:(SSErrorHandler *)arg3;
- (void)_sendInvocation:(NSObject *)arg0 withProxy:(NSObject *)arg1 remoteInterface:(id)arg2 withErrorHandler:(SSErrorHandler *)arg3 timeout:(/* block */ id)arg4;
- (id /* block */)interruptionHandler;
- (id /* block */)invalidationHandler;
- (id)_exportTable;
- (NSObject *)replacementObjectForEncoder:(NSObject *)arg0 object:(NSObject *)arg1;
- (char)_encodeCacheContainsClass:(Class)arg0;
- (void)_addClassToEncodeCache:(Class)arg0;
- (char)_decodeCacheContainsClass:(Class)arg0;
- (void)_addClassToDecodeCache:(Class)arg0;
- (NSObject *)exportedObject;
- (NSDictionary *)remoteObjectProxyWithUserInfo:(NSDictionary *)arg0 errorHandler:(SSErrorHandler *)arg1;
- (id)remoteObjectProxyWithTimeout:(double)arg0 errorHandler:(SSErrorHandler *)arg1;
- (void)_addImportedProxy:(NSObject *)arg0;
- (void)_removeImportedProxy:(NSObject *)arg0;
- (int)auditSessionIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (unsigned int)effectiveGroupIdentifier;
- (void)_setUUID:(NSSet *)arg0;
- (void)_setTargetUserIdentifier:(unsigned int)arg0;
- (void)_killConnection:(int)arg0;
- (void)_updateProgress:(unsigned long long)arg0 completed:(long long)arg1 total:(long long)arg2;
- (void)_decodeProgressMessageWithData:(NSData *)arg0;
- (NSXPCInterface *)remoteObjectInterface;
- (void)dealloc;
- (void)setDelegate:(NSObject *)arg0;
- (NSXPCConnection *)init;
- (NSString *)description;
- (NSObject *)delegate;
- (void)invalidate;
- (void)setUserInfo:(NSDictionary *)arg0;
- (void)suspend;
- (void)stop;
- (NSDictionary *)userInfo;
- (NSXPCInterface *)exportedInterface;
- (void)start;
- (NSXPCConnection *)initWithMachServiceName:(NSString *)arg0 options:(unsigned int)arg1;
- (void)setRemoteObjectInterface:(NSXPCInterface *)arg0;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(SSErrorHandler *)arg0;
- (NSXPCConnection *)initWithMachServiceName:(NSString *)arg0;
- (NSObject *)remoteObjectProxy;
- (void)setOptions:(unsigned int)arg0;
- (void)_setQueue:(NSObject *)arg0;
- (NSXPCConnection *)initWithServiceName:(NSString *)arg0;
- (void)setInvalidationHandler:(id /* block */)arg0;
- (void)setExportedInterface:(NSXPCInterface *)arg0;
- (void)setExportedObject:(NSObject *)arg0;
- (NSOperationQueue *)_queue;
- (NSXPCListenerEndpoint *)endpoint;
- (void)setInterruptionHandler:(id /* block */)arg0;
- (NSURLConnection *)_xpcConnection;
- (int)processIdentifier;
- (struct ?)auditToken;
- (id)valueForEntitlement:(id)arg0;
- (NSString *)serviceName;
- (void)addBarrierBlock:(id /* block */)arg0;
- (void)finalize;

@end
