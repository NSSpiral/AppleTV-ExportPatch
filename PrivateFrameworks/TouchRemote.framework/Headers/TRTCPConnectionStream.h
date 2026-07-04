/* Runtime dump - TRTCPConnectionStream
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRTCPConnectionStream : NSObject
{
    NSObject<OS_dispatch_queue> * _connectionAccessQueue;
    NSInputStream * _readStream;
    NSObject<OS_dispatch_queue> * _readQueue;
    NSOutputStream * _writeStream;
    NSObject<OS_dispatch_queue> * _writeQueue;
    char _closed;
    <TRTCPConnectionStreamDelegate> * _delegate;
}

@property (weak, nonatomic) <TRTCPConnectionStreamDelegate> * delegate;
@property (nonatomic) char closed;

- (void)dealloc;
- (void)setDelegate:(<TRTCPConnectionStreamDelegate> *)arg0;
- (<TRTCPConnectionStreamDelegate> *)delegate;
- (void)close;
- (void).cxx_destruct;
- (void)setClosed:(char)arg0;
- (char)isClosed;
- (NSObject *)_initWithReadStream:(NSInputStream *)arg0 writeStream:(NSOutputStream *)arg1 peerPublicKey:(NSString *)arg2 options:(int)arg3;
- (NSObject *)_initWithReadStream:(NSInputStream *)arg0 writeStream:(NSOutputStream *)arg1 options:(int)arg2;
- (NSObject *)_initWithNetService:(NSNetService *)arg0;
- (void)readDataOfLength:(unsigned long)arg0 completionHandler:(id /* block */)arg1;
- (void)writeData:(NSData *)arg0 completionHandler:(id /* block */)arg1;

@end
