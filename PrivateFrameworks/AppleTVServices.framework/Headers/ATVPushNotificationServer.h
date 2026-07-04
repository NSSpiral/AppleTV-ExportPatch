/* Runtime dump - ATVPushNotificationServer
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVPushNotificationServer : NSObject <APSConnectionDelegate>
{
    APSConnection * _apsConnection;
    APSConnection * _devAPSConnection;
    char _tokenDone;
    char _devTokenDone;
    NSData * _token;
    NSData * _devToken;
    NSLock * _listenersLock;
    NSDictionary * _listenersForTopics;
    NSOperationQueue * _notificationTypeOperationQueue;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (ATVPushNotificationServer *)sharedInstance;

- (void)dealloc;
- (ATVPushNotificationServer *)init;
- (void)stop;
- (void)addListener:(BSActionListener *)arg0 forTopic:(VCSessionMessageTopic *)arg1;
- (void)addPushNotificationType:(NSObject *)arg0 withParameters:(NSDictionary *)arg1;
- (void)removePushNotificationType:(NSObject *)arg0;
- (void)removeListener:(BSActionListener *)arg0 forTopic:(VCSessionMessageTopic *)arg1;
- (void)_registerDeviceWithToken:(NSData *)arg0;
- (void)_registerDeviceWithDevToken:(NSData *)arg0;
- (void)_touchAPSDKeepAliveFile;
- (id)_aggregatedTopics;
- (void)_removeAPSDKeepAliveFile;
- (void)_updateAggregateTopics;
- (void)_enqueuePushNotificationTypeRequestWithURL:(NSURL *)arg0 body:(id /* block */)arg1 debugStr:(NSString *)arg2;
- (void)start:(char)arg0;
- (char)isDevConnected;
- (void)removeListener:(BSActionListener *)arg0;
- (NSData *)devToken;
- (id)_allListeners;
- (void)_tellListenersATokenChanged;
- (void)connection:(NSURLConnection *)arg0 didReceivePublicToken:(NSString *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveMessageForTopic:(NSString *)arg1 userInfo:(NSDictionary *)arg2;
- (void)connection:(NSURLConnection *)arg0 didChangeConnectedStatus:(char)arg1;
- (void)connectionDidReconnect:(id)arg0;
- (NSString *)publicToken;
- (char)isConnected;

@end
