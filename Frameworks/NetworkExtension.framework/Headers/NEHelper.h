/* Runtime dump - NEHelper
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEHelper : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_xpc_object> * _initMessage;
}

@property (readonly) NSObject<OS_dispatch_queue> * queue;
@property (readonly) NSObject<OS_xpc_object> * initMessage;

- (NEHelper *)initWithDelegateClassName:(NSString *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)sendRequest:(NSURLRequest *)arg0 responseHandler:(NSObject<OS_xpc_object> *)arg1;
- (NSObject<OS_xpc_object> *)initMessage;
- (void)dealloc;
- (void).cxx_destruct;
- (NSObject<OS_xpc_object> *)connection;
- (NSObject<OS_dispatch_queue> *)queue;

@end
