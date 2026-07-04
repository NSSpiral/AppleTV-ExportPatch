/* Runtime dump - MSXPCConnection
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSXPCConnection : NSXPCConnection
{
    NSLock * _lock;
    NSObject<OS_dispatch_queue> * _queue;
    MFFuture * _connectionFuture;
    NSXPCInterface * _remoteObjectInterface;
    NSXPCInterface * _exportedInterface;
    id _exportedObject;
    id _interruptionHandler;
    id _invalidationHandler;
    int _resumeCount;
    unsigned int _state;
    char _shouldLaunchMobileMail;
    Protocol * _protocol;
}

@property (readonly, retain, nonatomic) Protocol * protocol;
@property (nonatomic) char shouldLaunchMobileMail;

- (id /* block */)interruptionHandler;
- (id /* block */)invalidationHandler;
- (NSObject *)exportedObject;
- (int)auditSessionIdentifier;
- (unsigned int)effectiveUserIdentifier;
- (unsigned int)effectiveGroupIdentifier;
- (NSXPCInterface *)remoteObjectInterface;
- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (void)suspend;
- (NSXPCInterface *)exportedInterface;
- (void)setRemoteObjectInterface:(NSXPCInterface *)arg0;
- (void)resume;
- (id)remoteObjectProxyWithErrorHandler:(SSErrorHandler *)arg0;
- (NSObject *)remoteObjectProxy;
- (void)setInvalidationHandler:(id /* block */)arg0;
- (void)setExportedInterface:(NSXPCInterface *)arg0;
- (void)setExportedObject:(NSObject *)arg0;
- (NSXPCConnection *)_connection;
- (void)setInterruptionHandler:(id /* block */)arg0;
- (int)processIdentifier;
- (Protocol *)protocol;
- (char)shouldLaunchMobileMail;
- (void)setShouldLaunchMobileMail:(char)arg0;
- (void)_invalidateFuture:(id)arg0;
- (id)_connectionForFuture:(id)arg0;
- (void)_invokeInterruptionHandlerForFuture:(id)arg0;
- (id /* block */)_nts_wrappedInterruptionHandler;
- (void)_queue_invokeInvalidationHandler;
- (void)_finishFuture:(id)arg0 withConnection:(NSURLConnection *)arg1 error:(NSError *)arg2;
- (MSXPCConnection *)initWithProtocol:(Protocol *)arg0;
- (void)_sendInvocation:(NSObject *)arg0 remoteInterface:(id)arg1 remoteProxy:(NSObject *)arg2 errorHandler:(SSErrorHandler *)arg3;

@end
