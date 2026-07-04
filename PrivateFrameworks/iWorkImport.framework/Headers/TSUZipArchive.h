/* Runtime dump - TSUZipArchive
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUZipArchive : NSObject
{
    unsigned int _options;
    NSMutableDictionary * _entriesMap;
    NSMutableSet * _entries;
}

@property (readonly, nonatomic) char isValid;
@property (readonly, nonatomic) unsigned long long archiveLength;

- (void)collapseCommonRootDirectory;
- (unsigned long long)archiveLength;
- (NSObject *)newArchiveReadChannel;
- (void)readLocalFileHeaderEntriesFromChannel:(NSObject *)arg0 offset:(long long)arg1 completion:(id /* block */)arg2;
- (void)readEndOfCentralDirectoryData:(NSData *)arg0 eocdOffset:(long long)arg1 channel:(NSObject *)arg2 completion:(id /* block */)arg3;
- (void)readZip64EndOfCentralDirectoryLocatorWithChannel:(NSObject *)arg0 eocdOffset:(long long)arg1 completion:(id /* block */)arg2;
- (void)readCentralDirectoryWithEntryCount:(unsigned int)arg0 offset:(long long)arg1 size:(unsigned long)arg2 channel:(NSObject *)arg3 completion:(id /* block */)arg4;
- (void)readZip64EndOfCentralDirectoryLocatorData:(NSData *)arg0 channel:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)readZip64EndOfCentralDirectoryWithChannel:(NSObject *)arg0 offset:(long long)arg1 completion:(id /* block */)arg2;
- (void)readZip64EndOfCentralDirectoryData:(NSData *)arg0 channel:(NSObject *)arg1 completion:(id /* block */)arg2;
- (void)readCentralDirectoryData:(NSData *)arg0 entryCount:(unsigned int)arg1 completion:(id /* block */)arg2;
- (char)readCentralFileHeaderWithBuffer:(void * *)arg0 dataSize:(void *)arg1 error:(unsigned int *)arg2;
- (char)readFilenameFromBuffer:(void * *)arg0 nameLength:(void *)arg1 entry:(unsigned short)arg2 dataSize:(unsigned int)arg3 error:(unsigned int *)arg4;
- (char)readExtraFieldsFromBuffer:(void * *)arg0 extraFieldsLength:(void *)arg1 entry:(unsigned short)arg2 dataSize:(unsigned int)arg3 error:(unsigned int *)arg4;
- (char)readFileCommentFromBuffer:(void * *)arg0 fileCommentLength:(void *)arg1 entry:(unsigned short)arg2 dataSize:(unsigned int)arg3 error:(unsigned int *)arg4;
- (char)readZip64ExtraFieldFromBuffer:(void *)arg0 dataLength:(void)arg1 entry:(unsigned short)arg2 error:(NSError *)arg3;
- (void)readLocalFileHeaderData:(NSData *)arg0 atOffset:(long long)arg1 channel:(NSObject *)arg2 completion:(id /* block */)arg3;
- (char)readLocalFileHeaderFilenameAndExtraFieldsData:(NSData *)arg0 forEntry:(QLZipArchiveEntry *)arg1 error:(id *)arg2;
- (id)readChannelForEntry:(id)arg0 validateCRC:(char)arg1;
- (id)streamReadChannelForEntry:(id)arg0 validateCRC:(char)arg1;
- (void)readArchiveWithQueue:(NSObject *)arg0 completion:(id /* block */)arg1;
- (id)readChannelForEntry:(id)arg0;
- (id)streamReadChannelForEntry:(id)arg0;
- (id)containedZipArchiveForEntry:(id)arg0 options:(unsigned int)arg1 error:(id *)arg2;
- (NSString *)entryForName:(NSString *)arg0;
- (void)enumerateEntriesUsingBlock:(id /* block */)arg0;
- (id)tsp_dataForEntry:(id)arg0;
- (TSUZipArchive *)init;
- (NSString *)debugDescription;
- (char)isValid;
- (void).cxx_destruct;
- (void)addEntry:(QLZipArchiveEntry *)arg0;
- (TSUZipArchive *)initWithOptions:(unsigned int)arg0;

@end
