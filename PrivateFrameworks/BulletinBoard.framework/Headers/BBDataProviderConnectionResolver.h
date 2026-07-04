/* Runtime dump - BBDataProviderConnectionResolver
 * Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBDataProviderConnectionResolver : NSObject <NSXPCListenerDelegate, BBDataProviderConnectionClientEndpoint>
{
    NSXPCListener * _wakeupListener;
    BBDataProviderConnection * __dataProviderConnection;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _connectionToServer;
    int _listeningToken;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSURLConnection *)resolverForConnection:(NSURLConnection *)arg0;

- (void)dealloc;
- (void)invalidate;
- (char)listener:(NSXPCListener *)arg0 shouldAcceptNewConnection:(NSXPCConnection *)arg1;
- (void)ping:(id)arg0;
- (void)_registerForPublicationNotification;
- (void)setDataProviderConnection:(BBDataProviderConnection *)arg0;
- (void)_queue_registerWithServer:(NSObject *)arg0;
- (BBDataProviderConnection *)dataProviderConnection;
- (BBDataProviderConnectionResolver *)initWithConnection:(NSURLConnection *)arg0;

@end
