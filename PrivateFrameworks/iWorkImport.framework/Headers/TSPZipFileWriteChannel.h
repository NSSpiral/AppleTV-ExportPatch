/* Runtime dump - TSPZipFileWriteChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPZipFileWriteChannel : NSObject <TSUStreamWriteChannel>
{
    TSUZipFileWriter * _archiveWriter;
    char _isClosed;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isValid;

- (void)writeData:(NSData *)arg0 queue:(NSObject *)arg1 handler:(id /* block */)arg2;
- (void)setLowWater:(unsigned long)arg0;
- (void)addBarrier:(id)arg0;
- (TSPZipFileWriteChannel *)initWithArchiveWriter:(TSUZipFileWriter *)arg0;
- (TSPZipFileWriteChannel *)init;
- (char)isValid;
- (void)close;
- (void).cxx_destruct;

@end
