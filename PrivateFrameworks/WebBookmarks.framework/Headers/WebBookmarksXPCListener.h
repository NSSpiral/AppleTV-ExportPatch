/* Runtime dump - WebBookmarksXPCListener
 * Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@interface WebBookmarksXPCListener : NSObject <WebBookmarksXPCConnectionDelegate>
{
    NSObject<OS_xpc_object> * _listenerConnection;
    NSMutableArray * _clientConnections;
    <WebBookmarksXPCConnectionDelegate> * _delegate;
    NSMutableDictionary * _messageHandlers;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)connection:(NSURLConnection *)arg0 didCloseWithError:(NSError *)arg1;
- (void)setHandler:(id /* block */)arg0 forMessageNamed:(/* block */ id)arg1;
- (void)setMessageHandlers:(NSMutableDictionary *)arg0;
- (void)_handleIncomingConnection:(NSURLConnection *)arg0;
- (WebBookmarksXPCListener *)initListenerForMachService:(char *)arg0 delegate:(<WebBookmarksXPCConnectionDelegate> *)arg1;

@end
