/* Runtime dump - IMDMessageServicesCenter
 * Image: /System/Library/PrivateFrameworks/IMDMessageServices.framework/IMDMessageServices
 */

@interface IMDMessageServicesCenter : NSObject
{
    NSObject<OS_xpc_object> * _connection;
}

+ (IMDMessageServicesCenter *)sharedInstance;

- (char)_disconnect;
- (void)dealloc;
- (IMDMessageServicesCenter *)init;
- (char)_connect;
- (void)_requestRoutingWithGUID:(NSString *)arg0 chatGUID:(NSString *)arg1 error:(unsigned int)arg2 handler:(id /* block */)arg3;
- (void)_requestExpireStateWithGUID:(NSString *)arg0 handler:(id /* block */)arg1;
- (void)requestRoutingForMessageGuid:(NSString *)arg0 inChat:(id)arg1 error:(unsigned int)arg2 completionBlock:(id /* block */)arg3;
- (void)requestRoutingWithCompletion:(id /* block */)arg0;
- (void)requestExpireStateForMessageGuid:(NSString *)arg0 completionBlock:(id /* block */)arg1;
- (void)requestExpireStateWithCompletion:(id /* block */)arg0;
- (void)_disconnected;

@end
