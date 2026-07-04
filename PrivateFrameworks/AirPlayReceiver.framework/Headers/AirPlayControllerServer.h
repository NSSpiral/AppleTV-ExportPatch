/* Runtime dump - AirPlayControllerServer
 * Image: /System/Library/PrivateFrameworks/AirPlayReceiver.framework/AirPlayReceiver
 */

@interface AirPlayControllerServer : NSObject <NSXPCListenerDelegate, AirPlayControllerAsync>
{
    NSObject<OS_dispatch_queue> * _queue;
    NSString * _serviceName;
    NSXPCListener * _xpcListener;
    id _performCommandBlock;
    id _copyPropertyBlock;
    id _setPropertyBlock;
}

@property (nonatomic) NSObject<OS_dispatch_queue> * dispatchQueue;
@property (copy, nonatomic) id performCommandBlock;
@property (copy, nonatomic) id copyPropertyBlock;
@property (copy, nonatomic) id setPropertyBlock;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)invalidate;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)performCommand:(NSObject *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 params:(NSDictionary *)arg2 completion:(id /* block */)arg3;
- (void)postEvent:(NSObject *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 params:(NSDictionary *)arg2 completion:(id /* block */)arg3;
- (void)getProperty:(NSObject *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 completion:(id /* block */)arg2;
- (void)setProperty:(NSString *)arg0 qualifier:(TSDGLShaderQualifier *)arg1 value:(NSObject *)arg2 completion:(id /* block */)arg3;
- (void)_connectionInvalidated:(id)arg0;
- (void)startWithXPCName:(NSString *)arg0;
- (id /* block */)performCommandBlock;
- (void)setPerformCommandBlock:(id /* block */)arg0;
- (id /* block */)copyPropertyBlock;
- (void)setCopyPropertyBlock:(id /* block */)arg0;
- (id /* block */)setPropertyBlock;
- (void)setSetPropertyBlock:(id /* block */)arg0;
- (NSObject<OS_dispatch_queue> *)dispatchQueue;
- (void)setDispatchQueue:(NSObject<OS_dispatch_queue> *)arg0;

@end
