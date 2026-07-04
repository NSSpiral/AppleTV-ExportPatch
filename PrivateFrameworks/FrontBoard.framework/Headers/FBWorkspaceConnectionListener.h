/* Runtime dump - FBWorkspaceConnectionListener
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWorkspaceConnectionListener : NSObject <BSXPCConnectionListenerHandler>
{
    NSObject<OS_dispatch_queue> * _connectionDispatcherQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (FBWorkspaceConnectionListener *)sharedInstance;

- (void)dealloc;
- (FBWorkspaceConnectionListener *)init;
- (void)handleIncomingConnection:(NSURLConnection *)arg0 forService:(struct __SCNetworkService *)arg1;

@end
