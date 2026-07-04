/* Runtime dump - XPCNSServiceConnection
 * Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCNSServiceConnection : NSObject <XPCServiceConnectionDelegate>
{
    XPCServiceConnection * _serviceConnection;
    <XPCNSServiceConnectionDelegate> * _delegate;
    <NSObject> * _context;
}

@property (readonly, retain, nonatomic) NSString * serviceName;
@property (weak, nonatomic) <XPCNSServiceConnectionDelegate> * delegate;
@property (retain, nonatomic) <NSObject> * context;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<XPCNSServiceConnectionDelegate> *)arg0;
- (<XPCNSServiceConnectionDelegate> *)delegate;
- (<NSObject> *)context;
- (void)setContext:(<NSObject> *)arg0;
- (void).cxx_destruct;
- (NSString *)serviceName;
- (void)shutDownCompletionBlock:(id /* block */)arg0;
- (void)sendMessage:(NSString *)arg0 withHandler:(id /* block */)arg1;
- (void)XPCServiceConnection:(NSURLConnection *)arg0 didReceiveRequest:(NSURLRequest *)arg1 sequenceNumber:(unsigned int)arg2;
- (void)XPCServiceConnectionDidDisconnect:(XPCServiceConnection *)arg0;
- (XPCNSServiceConnection *)initWithXPCServiceConnection:(NSURLConnection *)arg0;

@end
