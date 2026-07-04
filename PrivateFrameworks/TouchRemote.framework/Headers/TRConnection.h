/* Runtime dump - TRConnection
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRConnection : NSObject
{
    NSObject<OS_dispatch_queue> * _accessQueue;
    char _closed;
    unsigned int _connectionCount;
    NSMapTable * _packetEventClassToTargetActions;
    NSObject<OS_dispatch_queue> * _sendQueue;
    int _uniqueID;
    TRService * _service;
}

@property (readonly, nonatomic) TRService * service;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (void)close;
- (void).cxx_destruct;
- (TRService *)service;
- (void)_sendRelevantPacketEventTypes;
- (NSObject *)_onQueue_targetActionsForPacketEvent:(NSObject *)arg0;
- (NSArray *)_relevantPacketEventTypes;
- (NSObject *)_initWithUniqueID:(int)arg0 service:(TRService *)arg1;
- (void)addTarget:(NSObject *)arg0 action:(SEL)arg1 queue:(NSObject *)arg2 forPacketEventClasses:(NSArray *)arg3;
- (void)removeTarget:(NSObject *)arg0 action:(SEL)arg1 queue:(NSObject *)arg2 forPacketEventClasses:(NSArray *)arg3;
- (void)sendPacketEvent:(NSObject *)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)_connectionDidClose;
- (void)_connectionDidReceivePacketEvent:(NSObject *)arg0;
- (void)_incrementConnectionCount;
- (int)_uniqueID;

@end
