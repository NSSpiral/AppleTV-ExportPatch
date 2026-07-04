/* Runtime dump - MSService
 * Image: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

@interface MSService : NSObject
{
    int _canceled;
    NSObject<OS_dispatch_queue> * _connectionQueue;
    NSObject<OS_dispatch_queue> * _replyQueue;
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_xpc_object> * _responseListener;
    NSObject<OS_xpc_object> * _responseHandler;
}

@property (readonly) char canceled;

- (void)cancel;
- (void)dealloc;
- (MSService *)init;
- (void)stop;
- (void)start;
- (NSXPCConnection *)_connection;
- (char)_unitTestsAreEnabled;
- (NSString *)_generateUnitTestReplyForMethod:(NSString *)arg0 arg:(id)arg1 error:(id *)arg2;
- (void)_generateUnitTestResponsesForResultArray:(NSArray *)arg0;
- (id)_handleMessageSendFailure:(id)arg0 message:(NSString *)arg1 messageIndex:(long long)arg2 context:(id *)arg3;
- (NSOperationQueue *)_createServiceOnQueue:(NSObject *)arg0;
- (void)_callServicesMethod:(NSString *)arg0 arguments:(NSDictionary *)arg1 callback:(id /* block */)arg2;
- (void)_simulateServicesMethod:(NSString *)arg0 arguments:(NSDictionary *)arg1 callback:(id /* block */)arg2;
- (void)_callServicesMethod:(NSString *)arg0 arguments:(NSDictionary *)arg1 replyHandler:(id /* block */)arg2;
- (void)responseConnection:(NSURLConnection *)arg0 handleError:(NSError *)arg1;
- (void)_registerConnection:(NSURLConnection *)arg0 onQueue:(/* block */ id)arg1;
- (void)responseConnection:(NSURLConnection *)arg0 handleResponse:(NSURLResponse *)arg1;
- (NSObject *)_createMessageForService:(NSObject *)arg0 arguments:(NSDictionary *)arg1 index:(long long *)arg2;
- (void)setupResponseConnectionOnQueue:(NSObject *)arg0;
- (char)isCanceled;

@end
