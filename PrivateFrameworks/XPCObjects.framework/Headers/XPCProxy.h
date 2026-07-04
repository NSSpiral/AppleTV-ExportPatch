/* Runtime dump - XPCProxy
 * Image: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

@interface XPCProxy : NSObject <NSCopying>
{
    NSObject<OS_xpc_object> * _connection;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_queue> * _internalQueue;
    <XPCProxyTarget> * _target;
    Class _remoteClass;
    Protocol * _remoteProtocol;
    id _errorHandler;
    char _invalidated;
    char _useTraditionalEncoder;
    NSArray * _whitelistedClassNames;
}

@property Protocol * remoteProtocol;
@property (copy) id errorHandler;
@property (readonly, nonatomic) NSObject<OS_xpc_object> * connection;
@property (nonatomic) char useTraditionalEncoder;
@property <XPCProxyTarget> * target;
@property Class remoteClass;

+ (void)initialize;

- (void)dealloc;
- (void)invalidate;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (void)setTarget:(<XPCProxyTarget> *)arg0;
- (XPCProxy *)copyWithZone:(struct _NSZone *)arg0;
- (<XPCProxyTarget> *)target;
- (void)forwardInvocation:(NSInvocation *)arg0;
- (NSObject<OS_xpc_object> *)connection;
- (void)setErrorHandler:(id /* block */)arg0;
- (id /* block */)errorHandler;
- (NSError *)_errorForXpcError:(NSError *)arg0;
- (NSString *)_invocationForMessage:(NSString *)arg0;
- (NSString *)_proxyDescription;
- (Protocol *)remoteProtocol;
- (Class)remoteClass;
- (id)_newMessageAndReplyHandler:(id *)arg0 forInvocation:(/* block */ id)arg1;
- (SEL)_selectorForMessage:(NSString *)arg0;
- (void)_getInvocationArgument:(void *)arg0 argumentType:(char *)arg1 class:(Class *)arg2 forXpcArgument:(id)arg3 message:(NSString *)arg4;
- (id)_newXpcArgumentForInvocationArgumentAt:(void *)arg0 ofType:(char *)arg1;
- (NSString *)_objectForXpcEncoding:(NSString *)arg0;
- (NSObject *)_newXpcEncodingForObject:(NSObject *)arg0;
- (XPCProxy *)initWithConnection:(NSObject<OS_xpc_object> *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 target:(<XPCProxyTarget> *)arg2;
- (void)restrictDecodingToWhitelistedClassNames:(id)arg0;
- (void)setRemoteClass:(Class)arg0;
- (void)setRemoteProtocol:(Protocol *)arg0;
- (char)useTraditionalEncoder;
- (void)setUseTraditionalEncoder:(char)arg0;

@end
