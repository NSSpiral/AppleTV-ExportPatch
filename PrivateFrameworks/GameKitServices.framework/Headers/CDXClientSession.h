/* Runtime dump - CDXClientSession
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
 */

@interface CDXClientSession : NSObject
{
    <CDXClientSessionDelegate> * delegate_;
    CDXClient * CDXClient_;
    NSData * ticket_;
    NSData * sessionKey_;
    NSData * sessionKeyPrepped_;
    NSMutableIndexSet * participantsInFlight_;
    int retransmitAttempts_;
    NSData * lastSent_;
    unsigned short seq_;
    unsigned char pid_;
    unsigned short * ack_;
    NSObject<OS_dispatch_source> * retransmitTimer_;
    id inboundHandler_;
}

@property (readonly, retain, nonatomic) CDXClient * CDXClient;
@property (nonatomic) <CDXClientSessionDelegate> * delegate;
@property (copy, nonatomic) NSData * ticket;
@property (readonly, copy, nonatomic) NSData * sessionKey;
@property (readonly, copy, nonatomic) NSIndexSet * participantsInFlight;
@property (copy, nonatomic) id inboundHandler;

- (void)dealloc;
- (void)setDelegate:(<CDXClientSessionDelegate> *)arg0;
- (<CDXClientSessionDelegate> *)delegate;
- (void)invalidate;
- (void)stopRetransmitTimer;
- (char)sendRaw:(id)arg0 toParticipants:(id)arg1;
- (char)retransmitEvent;
- (CDXClient *)CDXClient;
- (NSData *)ticket;
- (id)encrypt:(id)arg0;
- (char)sendData:(NSData *)arg0 toParticipants:(id)arg1;
- (void)resetRetransmitTimer;
- (id)decrypt:(id)arg0 ticket:(NSData *)arg1;
- (CDXClientSession *)initWithCDXClient:(NSObject *)arg0 ticket:(NSData *)arg1 sessionKey:(NSData *)arg2;
- (void)setTicket:(NSData *)arg0;
- (void)recvRaw:(id)arg0 ticket:(NSData *)arg1;
- (NSData *)sessionKey;
- (NSIndexSet *)participantsInFlight;
- (id /* block */)inboundHandler;
- (void)setInboundHandler:(id /* block */)arg0;
- (char)sendData:(NSData *)arg0;

@end
