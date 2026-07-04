/* Runtime dump - ICFCallServer
 * Image: /System/Library/PrivateFrameworks/IncomingCallFilter.framework/IncomingCallFilter
 */

@interface ICFCallServer : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    NSMutableArray * _clients;
    char _hasRegistered;
}

+ (ICFCallServer *)sharedInstance;

- (void)dealloc;
- (ICFCallServer *)init;
- (void)_cleanup;
- (void)_cleanupClient:(NSObject *)arg0;
- (void)_configureWithClient:(NSObject *)arg0;
- (void)shouldAllowIncomingCallForNumber:(NSNumber *)arg0 forService:(struct __SCNetworkService *)arg1 response:(NSURLResponse *)arg2;
- (void)_requestCallGrantForIdentifier:(NSString *)arg0 forService:(struct __SCNetworkService *)arg1 waitForResponse:(char)arg2 completionBlock:(id /* block */)arg3;
- (void)_clientConnected;

@end
