/* Runtime dump - TSPComponentWriteChannelAdapter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPComponentWriteChannelAdapter : NSObject <TSPComponentWriteChannel>
{
    NSObject<OS_dispatch_queue> * _queue;
    TSUFileIOChannel * _channel;
    id _handler;
    NSError * _error;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPComponentWriteChannelAdapter *)initWithQueue:(NSObject<OS_dispatch_queue> *)arg0 channel:(TSUFileIOChannel *)arg1 handler:(id /* block */)arg2;
- (void)close;
- (void).cxx_destruct;
- (void)setError:(NSError *)arg0;
- (void)writeData:(NSData *)arg0;

@end
