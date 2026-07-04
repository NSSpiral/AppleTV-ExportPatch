/* Runtime dump - TSPDirectoryPackageWriterComponentFileWriteChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDirectoryPackageWriterComponentFileWriteChannel : NSObject <TSPComponentWriteChannel>
{
    NSURL * _URL;
    NSObject<OS_dispatch_queue> * _queue;
    id _handler;
    TSUFileIOChannel * _writeChannel;
    char _isClosed;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPDirectoryPackageWriterComponentFileWriteChannel *)initWithURL:(NSString *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 handler:(id /* block */)arg2;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(NSData *)arg0;

@end
