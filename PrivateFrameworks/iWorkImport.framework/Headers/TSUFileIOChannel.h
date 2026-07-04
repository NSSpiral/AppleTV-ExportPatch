/* Runtime dump - TSUFileIOChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUFileIOChannel : NSObject <TSUReadChannel, TSUStreamWriteChannel, TSURandomWriteChannel>
{
    NSObject<OS_dispatch_io> * _channel;
    NSObject<OS_dispatch_queue> * _readQueue;
    char _isClosed;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isValid;

- (TSUFileIOChannel *)initForStreamWritingURL:(NSURL *)arg0 error:(id *)arg1;
- (void)writeData:(NSData *)arg0 queue:(NSObject *)arg1 handler:(id /* block */)arg2;
- (void)readFromOffset:(long long)arg0 length:(unsigned long)arg1 handler:(id /* block */)arg2;
- (TSUFileIOChannel *)initForReadingDescriptor:(int)arg0 queue:(NSObject *)arg1 cleanupHandler:(id /* block */)arg2;
- (TSUFileIOChannel *)initForRandomWritingURL:(NSURL *)arg0 error:(id *)arg1;
- (void)setLowWater:(unsigned long)arg0;
- (TSUFileIOChannel *)initForReadingURL:(NSURL *)arg0 error:(id *)arg1;
- (void)readWithHandler:(id /* block */)arg0;
- (void)addBarrier:(id)arg0;
- (void)writeData:(NSData *)arg0 offset:(long long)arg1 queue:(NSObject *)arg2 handler:(id /* block */)arg3;
- (TSUFileIOChannel *)initWithType:(unsigned long)arg0 URL:(NSString *)arg1 oflag:(int)arg2 mode:(unsigned short)arg3 error:(id *)arg4;
- (TSUFileIOChannel *)initWithType:(unsigned long)arg0 descriptor:(int)arg1 queue:(NSObject *)arg2 cleanupHandler:(id /* block */)arg3;
- (TSUFileIOChannel *)initWithType:(unsigned long)arg0 channel:(NSObject<OS_dispatch_io> *)arg1;
- (NSObject *)createRandomAccessChannel;
- (void)dealloc;
- (char)isValid;
- (void)close;
- (void).cxx_destruct;

@end
