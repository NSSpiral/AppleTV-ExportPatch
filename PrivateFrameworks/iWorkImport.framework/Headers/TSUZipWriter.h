/* Runtime dump - TSUZipWriter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipWriter : NSObject
{
    unsigned int _options;
    NSMutableArray * _entries;
    NSMutableDictionary * _entriesMap;
    TSUZipWriterEntry * _currentEntry;
    char _calculateSize;
    char _force32BitSize;
    char _calculateCRC;
    unsigned short _entryTime;
    unsigned short _entryDate;
    long long _currentOffset;
    NSObject<OS_dispatch_data> * _localFileHeaderData;
    NSMutableArray * _entryDatas;
    unsigned long _entryDataSize;
    NSObject<OS_dispatch_queue> * _writeQueue;
    long long _writtenOffset;
    NSError * _error;
    char _isClosed;
}

@property (readonly, nonatomic) <TSURandomWriteChannel> * writeChannel;
@property (readonly, nonatomic) unsigned long long archiveLength;

- (unsigned long long)archiveLength;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg0;
- (void)writeEntryWithName:(NSString *)arg0 force32BitSize:(char)arg1 size:(unsigned long long)arg2 CRC:(unsigned int)arg3 fromReadChannel:(NSObject *)arg4 writeHandler:(id /* block */)arg5;
- (void)closeWithQueue:(NSObject *)arg0 completion:(id /* block */)arg1;
- (<TSURandomWriteChannel> *)writeChannel;
- (void)addBarrier:(id)arg0;
- (void)initEntryTime;
- (void)beginEntryWithName:(NSString *)arg0 force32BitSize:(char)arg1 size:(unsigned long long)arg2 CRC:(unsigned int)arg3;
- (void)beginEntryWithNameImpl:(id)arg0 force32BitSize:(char)arg1 size:(unsigned long long)arg2 CRC:(unsigned int)arg3;
- (id)localFileHeaderDataForEntry:(id)arg0;
- (void)addData:(NSData *)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)addDataImpl:(id)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)flushEntryData;
- (void)writeData:(NSData *)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)handleWriteError:(NSError *)arg0;
- (void)writeData:(NSData *)arg0 offset:(long long)arg1;
- (void)writeEntryWithName:(NSString *)arg0 force32BitSize:(char)arg1 size:(unsigned long long)arg2 CRC:(unsigned int)arg3 fromReadChannel:(NSObject *)arg4 completion:(id /* block */)arg5;
- (void)writeCentralDirectory;
- (void)writeCentralFileHeaderDataForEntry:(id)arg0;
- (void)writeEndOfCentralDirectoryDataWithOffset:(long long)arg0 size:(long long)arg1 entryCount:(unsigned int)arg2;
- (void)writeZip64EndOfCentralDirectoryWithOffset:(long long)arg0 size:(long long)arg1 entryCount:(unsigned int)arg2;
- (void)beginEntryWithName:(NSString *)arg0 force32BitSize:(char)arg1;
- (void)writeEntryWithName:(NSString *)arg0 force32BitSize:(char)arg1 fromReadChannel:(NSObject *)arg2 completion:(id /* block */)arg3;
- (unsigned long long)encodedLengthForEntryWithName:(NSString *)arg0;
- (TSUZipWriter *)init;
- (void).cxx_destruct;
- (TSUZipWriter *)initWithOptions:(unsigned int)arg0;
- (void)finishEntry;
- (void)writeZip64EndOfCentralDirectoryLocatorWithOffset:(long long)arg0;
- (void)writeData:(NSData *)arg0;
- (void)addData:(NSData *)arg0;

@end
