/* Runtime dump - TSPCGDataConsumer
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPCGDataConsumer : NSObject
{
    NSObject<OS_dispatch_queue> * _writeQueue;
    <TSUStreamWriteChannel> * _writeChannel;
    NSError * _error;
}

+ (struct CGDataConsumer *)newCGDataConsumerForWriteChannel:(NSObject *)arg0;

- (TSPCGDataConsumer *)initWithWriteChannel:(<TSUStreamWriteChannel> *)arg0;
- (unsigned long)putBytes:(void *)arg0 count:(void)arg1;
- (TSPCGDataConsumer *)init;
- (void)close;
- (void).cxx_destruct;

@end
