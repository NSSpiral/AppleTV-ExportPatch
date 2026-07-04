/* Runtime dump - HAPHTTPClient
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPHTTPClient : NSObject
{
    struct HTTPClientPrivate * _httpClient;
    char _invalidateRequested;
    NSString * _dnsName;
    unsigned int _port;
    NSObject<OS_dispatch_queue> * _queue;
    <HAPHTTPClientDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    <HAPHTTPClientDebugDelegate> * _debugDelegate;
    NSObject<OS_dispatch_queue> * _debugDelegateQueue;
}

@property (copy, nonatomic) NSString * dnsName;
@property (readonly, nonatomic) unsigned int port;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (weak, nonatomic) <HAPHTTPClientDelegate> * delegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;
@property (weak, nonatomic) <HAPHTTPClientDebugDelegate> * debugDelegate;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> * debugDelegateQueue;
@property (nonatomic) char invalidateRequested;

- (void)setDelegate:(<HAPHTTPClientDelegate> *)arg0;
- (<HAPHTTPClientDelegate> *)delegate;
- (void)invalidate;
- (void).cxx_destruct;
- (unsigned int)port;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (char)_delegateRespondsToSelector:(SEL)arg0;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)sendGETRequestToURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
- (void)sendPUTRequestToURL:(NSURL *)arg0 withRequestObject:(NSObject *)arg1 serializationType:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (HAPHTTPClient *)initWithDNSName:(NSString *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)setDebugDelegate:(<HAPHTTPClientDebugDelegate> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;
- (void)sendPOSTRequestToURL:(NSURL *)arg0 withRequestObject:(NSObject *)arg1 serializationType:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (char)enableUAPSessionSecurityWithReadKey:(NSString *)arg0 writeKey:(unsigned char)arg1 error:(NSError *)arg2;
- (void)setDelegateQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (long)_initializeCoreUtilsHTTPClient;
- (void)setDebugDelegate:(<HAPHTTPClientDebugDelegate> *)arg0;
- (void)setDebugDelegateQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (NSString *)dnsName;
- (void)setInvalidateRequested:(char)arg0;
- (void)_sendHTTPRequestToURL:(NSURL *)arg0 withMethod:(int)arg1 requestObject:(NSObject *)arg2 serializationType:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)_handleHTTPResponseForMessage:(struct HTTPMessagePrivate *)arg0 completionHandler:(struct HTTPMessagePrivate *)arg1;
- (NSObject *)_serializeUAPJSONObject:(NSObject *)arg0 error:(id *)arg1;
- (NSData *)_deserializeUAPJSONData:(NSData *)arg0 error:(id *)arg1;
- (<HAPHTTPClientDebugDelegate> *)debugDelegate;
- (NSObject<OS_dispatch_queue> *)debugDelegateQueue;
- (void)sendDELETERequestToURL:(NSURL *)arg0 withRequestObject:(NSObject *)arg1 serializationType:(unsigned int)arg2 completionHandler:(id /* block */)arg3;
- (char)_debugDelegateRespondsToSelector:(SEL)arg0;
- (void)setDnsName:(NSString *)arg0;
- (char)invalidateRequested;
- (void)setDelegate:(<HAPHTTPClientDelegate> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1;

@end
