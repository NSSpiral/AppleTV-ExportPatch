/* Runtime dump - TSPDistributableArchive
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableArchive : NSObject
{
    struct map<long long, std::__1::pair<long long, long long>, std::__1::less<long long>, std::__1::allocator<std::__1::pair<const long long, std::__1::pair<long long, long long> > > > * _entries;
    SFUFileDataRepresentation * _archiveFileRep;
    SFUMemoryDataRepresentation * _archiveMemoryRep;
    SFUZipEntry * _archiveZipEntryRep;
    struct ? _archivedVersions;
}

+ (char)_checkFileHeader:(char *)arg0 length:(unsigned long)arg1 dffVersion:(unsigned short *)arg2 archivedVersions:(struct ? *)arg3 defaultObjectVersion:(unsigned int *)arg4 hasDescriptors:(char *)arg5 hasToc:(char *)arg6 otherDataLength:(unsigned int *)arg7 closedCleanly:(char *)arg8;
+ (NSObject *)_newStringFromUtf8DataInStream:(NSObject *)arg0 length:(unsigned long)arg1;
+ (char)readArchivedVersionsFromStream:(NSObject *)arg0 versions:(struct ? *)arg1 error:(id *)arg2;
+ (char)readCheckCrcFromArchiveInputStream:(NSObject *)arg0 crc:(unsigned int *)arg1 error:(id *)arg2;
+ (char)streamDistributableArchive:(id)arg0 estimatedDataLength:(long long)arg1 toUnarchiver:(NSUnarchiver *)arg2 supplementalDataBundle:(NSObject *)arg3 closedCleanly:(char *)arg4 context:(NSObject *)arg5 error:(id *)arg6;
+ (void)cancelStreaming;

- (char)_readEntriesFromToc:(id)arg0 error:(id *)arg1;
- (NSSet *)_createInputStreamWithOffset:(long long)arg0 length:(long long)arg1;
- (TSPDistributableArchive *)initWithDffData:(NSData *)arg0 error:(id *)arg1;
- (struct ?)archivedVersions;
- (NSObject *)createStreamForObject:(long long)arg0 length:(long long *)arg1;
- (long long)lengthOfObject:(long long)arg0;
- (char)containsObjectWithIdentifier:(long long)arg0;
- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;

@end
