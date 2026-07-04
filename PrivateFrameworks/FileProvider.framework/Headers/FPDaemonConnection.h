/* Runtime dump - FPDaemonConnection
 * Image: /System/Library/PrivateFrameworks/FileProvider.framework/FileProvider
 */

@interface FPDaemonConnection : NSObject
{
    NSXPCConnection<FPDaemon> * _connectionQueueConnection;
    NSObject<OS_dispatch_queue> * _connectionQueue;
}

@property (retain, nonatomic) NSXPCConnection<FPDaemon> * connectionQueueConnection;
@property (readonly, nonatomic) NSXPCConnection<FPDaemon> * connection;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * connectionQueue;

+ (FPDaemonConnection *)sharedConnection;

- (FPDaemonConnection *)init;
- (void)extendSandboxAndCreatePlaceholderForFileURL:(NSURL *)arg0 fromProviderID:(NSObject *)arg1 toConsumerID:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)providersCompletionHandler:(id /* block */)arg0;
- (NSXPCConnection<FPDaemon> *)connection;
- (void)setConnectionQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)wakeUpCompletion:(id /* block */)arg0;
- (void)extendSandboxForFileURL:(NSURL *)arg0 fromProviderID:(NSObject *)arg1 toConsumerID:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)providePlaceholderForItemAtURL:(NSURL *)arg0 fromProviderID:(NSObject *)arg1 forConsumerID:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)startProvidingItemAtURL:(NSURL *)arg0 fromProviderID:(NSObject *)arg1 forConsumerID:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)stopProvidingItemAtURL:(NSURL *)arg0 fromProviderID:(NSObject *)arg1 forConsumerID:(NSObject *)arg2 completionHandler:(id /* block */)arg3;
- (void)bookmarkableStringFromDocumentURL:(NSURL *)arg0 completion:(id /* block */)arg1;
- (void)documentURLFromBookmarkableString:(NSString *)arg0 completion:(id /* block */)arg1;
- (void)setConnectionQueueConnection:(NSXPCConnection<FPDaemon> *)arg0;
- (NSXPCConnection<FPDaemon> *)connectionQueueConnection;
- (NSObject<OS_dispatch_queue> *)connectionQueue;

@end
