/* Runtime dump - TSPDistributableWriter
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDistributableWriter : NSObject
{
    TSPDistributableArchiveOutputStream * _outputStream;
    struct set<long long, std::__1::less<long long>, std::__1::allocator<long long> > * _encodedIds;
    struct set<int, std::__1::less<int>, std::__1::allocator<int> > * _typesSeen;
    char _isCancelled;
    TSPDatabase * _database;
    TSPDistributableFileManager * _fileManager;
    unsigned long long _processedEntriesCount;
}

- (TSPDistributableWriter *)_initWithDatabase:(TSPDatabase *)arg0 fileManager:(TSPDistributableFileManager *)arg1 outputStream:(TSPDistributableArchiveOutputStream *)arg2 checkCrc:(unsigned int)arg3 includeToc:(char)arg4;
- (char)_processEntry:(id)arg0 tocEntries:(NSArray *)arg1 progressContext:(NSObject *)arg2 error:(id *)arg3;
- (TSPDistributableWriter *)initWithTangierPath:(NSString *)arg0 fileManager:(TSPDistributableFileManager *)arg1 outputStream:(TSPDistributableArchiveOutputStream *)arg2 checkCrc:(unsigned int)arg3;
- (char)goAndReportProgress:(char)arg0 error:(id *)arg1 context:(NSObject *)arg2;
- (void)cancel;
- (void)dealloc;
- (void).cxx_destruct;

@end
