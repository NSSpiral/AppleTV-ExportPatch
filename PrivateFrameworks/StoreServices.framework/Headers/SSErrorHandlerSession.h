/* Runtime dump - SSErrorHandlerSession
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSErrorHandlerSession : NSObject
{
    SSXPCConnection * _controlConnection;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    NSDictionary * _properties;
    long long _sessionID;
}

- (void)dealloc;
- (SSErrorHandlerSession *)init;
- (void *)valueForProperty:(NSString *)arg0;
- (void)performDefaultHandling;
- (void)retry;
- (void)_setControlConnection:(NSURLConnection *)arg0;
- (void)_setSessionID:(long long)arg0;
- (void)_setErrorProperties:(NSDictionary *)arg0;
- (void)redirectToURL:(NSURL *)arg0;

@end
