/* Runtime dump - HSAAuthenticationServer
 * Image: /System/Library/PrivateFrameworks/HSAAuthentication.framework/HSAAuthentication
 */

@interface HSAAuthenticationServer : NSObject
{
    NSObject<OS_xpc_object> * _connection;
    NSMutableArray * _clients;
    char _hasRegistered;
}

+ (HSAAuthenticationServer *)sharedInstance;

- (void)dealloc;
- (HSAAuthenticationServer *)init;
- (void)_cleanup;
- (void)parseIncomingMessageFromNumber:(NSNumber *)arg0 forService:(struct __SCNetworkService *)arg1 messageBody:(NSObject *)arg2;
- (void)_cleanupClient:(NSObject *)arg0;
- (void)_configureWithClient:(NSObject *)arg0;
- (void)_clientConnected;

@end
