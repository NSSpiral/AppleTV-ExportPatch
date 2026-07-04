/* Runtime dump - SSErrorHandler
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSErrorHandler : NSObject
{
    SSXPCConnection * _controlConnection;
    <SSErrorHandlerDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSArray * _failureTypes;
    SSXPCConnection * _observerConnection;
}

@property <SSErrorHandlerDelegate> * delegate;
@property (copy) NSArray * failureTypes;

- (void)startWithCompletionBlock:(id /* block */)arg0;
- (void)dealloc;
- (void)setDelegate:(<SSErrorHandlerDelegate> *)arg0;
- (SSErrorHandler *)init;
- (<SSErrorHandlerDelegate> *)delegate;
- (void)setFailureTypes:(NSArray *)arg0;
- (void)stopWithCompletionBlock:(id /* block */)arg0;
- (void)_handleMessage:(NSString *)arg0 fromServerConnection:(NSURLConnection *)arg1;
- (void)_sendDisconnectMessage;
- (void)_tearDownConnections;
- (void)_reconnectToDaemonWithCompletionBlock:(id /* block */)arg0;
- (void)_openSessionWithMessage:(NSString *)arg0;
- (void)_dispatchToDelegate:(NSObject *)arg0;
- (NSArray *)failureTypes;

@end
