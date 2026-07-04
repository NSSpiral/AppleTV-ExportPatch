/* Runtime dump - CDXClient
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface CDXClient : NSObject
{
    <CDXClientDelegate> * delegate_;
    int holePunchAttemptCount_;
    NSData * preblob_;
    NSMutableDictionary * sessionLookup_;
    NSError * error_;
    int fd_;
    unsigned long long holePunchSID_;
    unsigned long long prevHolePunchSID_;
    NSString * server_;
    unsigned short port_;
    unsigned short localPort_;
    int restartCount_;
    struct sockaddr_in cdxaddr_ipv4;
    double holePunchInterval_;
    char preblobIsUpToDate_;
    char willReconfigureShortly_;
    struct __SCDynamicStore * scDynamicStore_;
    struct __CFRunLoopSource * scDynamicStoreRunLoopSource_;
    NSObject<OS_dispatch_queue> * queue_;
    NSObject<OS_dispatch_source> * source_;
    NSObject<OS_dispatch_source> * holePunchTimer_;
    id preblobCallback_;
    id padding_;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (copy, nonatomic) id preblobCallback;
@property (nonatomic) <CDXClientDelegate> * delegate;
@property (readonly) NSData * preblob;
@property (readonly, nonatomic) NSError * error;

+ (CDXClient *)sharedClient;

- (void)restart;
- (void)dealloc;
- (void)setDelegate:(<CDXClientDelegate> *)arg0;
- (<CDXClientDelegate> *)delegate;
- (void)invalidate;
- (void)start;
- (NSError *)error;
- (NSObject<OS_dispatch_queue> *)queue;
- (void)invalidateSession:(NSObject *)arg0;
- (char)sendRaw:(id)arg0;
- (CDXClient *)initWithOptions:(NSDictionary *)arg0 delegate:(<CDXClientDelegate> *)arg1;
- (void)stopListeningOnSockets;
- (void)stopHolePunchTimer;
- (void)sendHolePunch;
- (void)setPreblob:(NSData *)arg0;
- (void)resetHolepunchTimer;
- (void)handleFDEvent;
- (void)startListeningOnSockets;
- (char)handleHolePunchEvent;
- (NSData *)preblob;
- (void)networkDidChange;
- (NSObject *)createSessionWithTicket:(NSData *)arg0 sessionKey:(NSData *)arg1;
- (id /* block */)preblobCallback;
- (void)setPreblobCallback:(id /* block */)arg0;
- (void)setError:(NSError *)arg0;

@end
