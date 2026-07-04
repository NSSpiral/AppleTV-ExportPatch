/* Runtime dump - TSPPackageWriterComponentWriteChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPPackageWriterComponentWriteChannel : NSObject <TSPComponentWriteChannel>
{
    TSUZipFileWriter * _archiveWriter;
    char _isClosed;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (TSPPackageWriterComponentWriteChannel *)initWithArchiveWriter:(TSUZipFileWriter *)arg0;
- (void)close;
- (void).cxx_destruct;
- (void)writeData:(NSData *)arg0;

@end
