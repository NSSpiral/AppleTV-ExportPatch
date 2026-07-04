/* Runtime dump - NEIPC
 * Image: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
 */

@interface NEIPC : NSObject
{
    int _socket;
    NSObject<OS_dispatch_io> * _socket_io;
    NSObject<OS_dispatch_data> * _previousData;
    id _messageHandler;
}

@property int socket;
@property (retain) NSObject<OS_dispatch_io> * socket_io;
@property (retain) NSObject<OS_dispatch_data> * previousData;
@property (copy) id messageHandler;

- (int)socket;
- (void)setSocket:(int)arg0;
- (void)setSocket_io:(NSObject<OS_dispatch_io> *)arg0;
- (NSObject<OS_dispatch_io> *)socket_io;
- (NSObject<OS_dispatch_data> *)previousData;
- (void)setPreviousData:(NSObject<OS_dispatch_data> *)arg0;
- (char)parseMessageFromData:(NSData *)arg0 messageHeader:(struct ? *)arg1 messageData:(id *)arg2;
- (void)logMessageType:(unsigned int)arg0 data:(NSData *)arg1 actionString:(NSString *)arg2;
- (NEIPC *)initWithSocket:(int)arg0;
- (void)startWithQueue:(NSObject *)arg0 messageHandler:(id /* block */)arg1;
- (char)sendMessageWithType:(unsigned int)arg0 data:(NSData *)arg1 andQueue:(NSObject *)arg2;
- (void)stop;
- (void).cxx_destruct;
- (id /* block */)messageHandler;
- (void)setMessageHandler:(id /* block */)arg0;

@end
