/* Runtime dump - IDSPushHandler
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSPushHandler : NSObject <APSConnectionDelegate>
{
    APSConnection * _apsConnection;
    NSData * _cachedPushToken;
    Class _APSConnectionClass;
    NSMutableSet * _topicsCache;
    NSMapTable * _handlerMap;
    NSObject<OS_dispatch_queue> * _ivarQueue;
}

@property (readonly, nonatomic) char isConnected;
@property (readonly, nonatomic) NSData * pushToken;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (IDSPushHandler *)sharedInstance;

- (void)dealloc;
- (IDSPushHandler *)init;
- (void)removeListener:(BSActionListener *)arg0;
- (void)connection:(NSURLConnection *)arg0 didReceivePublicToken:(NSString *)arg1;
- (void)connection:(NSURLConnection *)arg0 didReceiveIncomingMessage:(NSString *)arg1;
- (void)connection:(NSURLConnection *)arg0 didSendOutgoingMessage:(NSString *)arg1;
- (void)connection:(NSURLConnection *)arg0 didFailToSendOutgoingMessage:(NSString *)arg1 error:(NSError *)arg2;
- (void)connection:(NSURLConnection *)arg0 didChangeConnectedStatus:(char)arg1;
- (void)connectionDidReconnect:(id)arg0;
- (NSData *)pushToken;
- (void)_updateTopicsOnIvarQueue;
- (void)_recalculateTopicsCacheOnIvarQueue;
- (void)addListener:(BSActionListener *)arg0 topics:(NSSet *)arg1 commands:(NSSet *)arg2 queue:(NSObject *)arg3;
- (void)setTopics:(NSSet *)arg0 forListener:(BSActionListener *)arg1;
- (void)setCommands:(NSArray *)arg0 forListener:(BSActionListener *)arg1;
- (void)configureAsMacNotificationCenterObserver:(NSObject *)arg0;
- (char)isConnected;

@end
