/* Runtime dump - XPCNSServiceListener
 * Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCNSServiceListener : NSObject <XPCServiceListenerDelegate>
{
    XPCServiceListener * _serviceListener;
    <XPCNSServiceListenerDelegate> * _delegate;
}

@property (readonly, retain, nonatomic) NSString * serviceName;
@property (readonly, nonatomic) <XPCNSServiceListenerDelegate> * delegate;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (<XPCNSServiceListenerDelegate> *)delegate;
- (void)start;
- (void).cxx_destruct;
- (NSString *)serviceName;
- (void)shutDownCompletionBlock:(id /* block */)arg0;
- (char)XPCServiceListener:(XPCServiceListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)XPCServiceListener:(XPCServiceListener *)arg0 didReceiveNewConnection:(NSURLConnection *)arg1;
- (XPCNSServiceListener *)initWithServiceName:(NSString *)arg0 queue:(NSObject *)arg1 delegate:(<XPCNSServiceListenerDelegate> *)arg2;

@end
