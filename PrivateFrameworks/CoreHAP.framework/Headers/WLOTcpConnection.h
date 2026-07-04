/* Runtime dump - WLOTcpConnection
 * Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface WLOTcpConnection : NSObject <NSStreamDelegate>
{
    <WLOTcpConnectionDelegate> * _delegate;
    NSInputStream * _inputStream;
    NSOutputStream * _outputStream;
}

@property (weak, nonatomic) <WLOTcpConnectionDelegate> * delegate;
@property (retain, nonatomic) NSInputStream * inputStream;
@property (retain, nonatomic) NSOutputStream * outputStream;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)setDelegate:(<WLOTcpConnectionDelegate> *)arg0;
- (<WLOTcpConnectionDelegate> *)delegate;
- (void)close;
- (void).cxx_destruct;
- (char)open;
- (WLOTcpConnection *)initWithHost:(NSString *)arg0 port:(unsigned int)arg1;
- (WLOTcpConnection *)initWithInputStream:(NSInputStream *)arg0 outputStream:(NSOutputStream *)arg1;
- (char)openStream:(NSObject *)arg0;
- (NSInputStream *)inputStream;
- (void)closeStream:(NSObject *)arg0;
- (void)setInputStream:(NSInputStream *)arg0;
- (void)setOutputStream:(NSOutputStream *)arg0;
- (int)_writeData:(NSData *)arg0;
- (NSData *)_readData:(char)arg0;
- (void)stream:(NSStream *)arg0 handleEvent:(unsigned int)arg1;
- (WLOTcpConnection *)initWithNetService:(NSNetService *)arg0;
- (NSOutputStream *)outputStream;
- (int)writeData:(NSData *)arg0;

@end
