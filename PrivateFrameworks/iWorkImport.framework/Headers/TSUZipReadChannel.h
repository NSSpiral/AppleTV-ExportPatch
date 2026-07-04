/* Runtime dump - TSUZipReadChannel
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipReadChannel : NSObject <TSUReadChannel>
{
    TSUZipEntry * _entry;
    TSUZipArchive * _archive;
    char _validateCRC;
    <TSUReadChannel> * _archiveReadChannel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) char isValid;

- (TSUZipReadChannel *)initWithEntry:(TSUZipEntry *)arg0 archive:(TSUZipArchive *)arg1 validateCRC:(char)arg2;
- (void)readFromOffset:(long long)arg0 length:(unsigned long)arg1 handler:(id /* block */)arg2;
- (void)setLowWater:(unsigned long)arg0;
- (void)handleFailureWithHandler:(id /* block */)arg0 error:(/* block */ id)arg1;
- (void)readWithFileHeaderLength:(unsigned long)arg0 handler:(id /* block */)arg1;
- (char)readFileHeaderFromData:(NSData *)arg0 headerLength:(unsigned int *)arg1;
- (char)processData:(NSData *)arg0 CRC:(unsigned int *)arg1 isDone:(char)arg2 handler:(id /* block */)arg3;
- (void)readWithHandler:(id /* block */)arg0;
- (void)addBarrier:(id)arg0;
- (void)dealloc;
- (char)isValid;
- (void)close;
- (void).cxx_destruct;

@end
