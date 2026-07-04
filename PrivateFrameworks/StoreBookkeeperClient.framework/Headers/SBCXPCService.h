/* Runtime dump - SBCXPCService
 * Image: /System/Library/PrivateFrameworks/StoreBookkeeperClient.framework/StoreBookkeeperClient
 */

@interface SBCXPCService : NSObject
{
    char _isConnecting;
    NSObject<OS_dispatch_queue> * _queue;
    id _serviceProxy;
    id _applicationWillTerminateObserver;
    NSXPCConnection * _xpcConnection;
    SBCClientConfiguration * _clientConfiguration;
    NSMutableDictionary * _pendingReplyBlockCompletionHandlers;
    SBCXPCServiceInterface * _XPCServiceInterface;
}

@property (readonly) NSObject<OS_dispatch_queue> * queue;
@property (readonly) id serviceProxy;
@property (readonly, weak) id applicationWillTerminateObserver;
@property (readonly) NSXPCConnection * xpcConnection;
@property (readonly) SBCClientConfiguration * clientConfiguration;
@property (readonly) NSMutableDictionary * pendingReplyBlockCompletionHandlers;
@property (readonly) SBCXPCServiceInterface * XPCServiceInterface;
@property (readonly) char isConnecting;

+ (Class)XPCServiceInterfaceClass;
+ (SBCXPCService *)newListener;
+ (NSString *)XPCInterfaceDebugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (SBCClientConfiguration *)clientConfiguration;
- (void)setClientConfiguration:(SEL)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (char)isConnecting;
- (NSXPCConnection *)xpcConnection;
- (SBCXPCService *)initWithClientConfiguration:(SBCClientConfiguration *)arg0;
- (void)didConnectToService;
- (void)sendMessage:(SEL)arg0 withClientCompletionHandler:(id /* block */)arg1 messageBlock:(/* block */ id)arg2;
- (void)_openServiceConnection;
- (void)closeServiceConnection;
- (NSURLConnection *)newServiceConnection;
- (void)_onQueueCloseServiceConnection;
- (void)_onQueueInvalidateOutstandingRequests:(id)arg0;
- (NSString *)_enqueueReplyBlockMessageWithSelector:(SEL)arg0 withClientCompletionHandler:(id /* block */)arg1;
- (NSObject *)_serviceProxy;
- (void)_dequeueReplyBlockMessageWithEnqueuedToken:(NSString *)arg0;
- (void)_invalidateOutstandingRequests:(id)arg0;
- (NSObject *)serviceProxy;
- (NSObject *)applicationWillTerminateObserver;
- (NSMutableDictionary *)pendingReplyBlockCompletionHandlers;
- (SBCXPCServiceInterface *)XPCServiceInterface;

@end
