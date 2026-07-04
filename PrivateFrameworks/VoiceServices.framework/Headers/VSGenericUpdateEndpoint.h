/* Runtime dump - VSGenericUpdateEndpoint
 * Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@interface VSGenericUpdateEndpoint : NSObject <NSXPCListenerDelegate, NSSecureCoding>
{
    NSXPCListenerEndpoint * _endpoint;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCListener * _listener;
    id _handler;
}

@property (retain, nonatomic) NSXPCListenerEndpoint * endpoint;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (retain, nonatomic) NSXPCListener * listener;
@property (copy, nonatomic) id handler;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (char)supportsSecureCoding;
+ (VSGenericUpdateEndpoint *)configuredEndpointWithUpdateHandler:(id /* block */)arg0 withConnection:(/* block */ id)arg1;
+ (NSObject *)remoteUpdateHanderForEndpoint:(SEL)arg0;

- (void)dealloc;
- (VSGenericUpdateEndpoint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void)invalidate;
- (void)setHandler:(id /* block */)arg0;
- (id /* block */)handler;
- (void).cxx_destruct;
- (NSXPCListenerEndpoint *)endpoint;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (NSXPCListener *)listener;
- (void)setListener:(NSXPCListener *)arg0;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)setQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setEndpoint:(NSXPCListenerEndpoint *)arg0;

@end
