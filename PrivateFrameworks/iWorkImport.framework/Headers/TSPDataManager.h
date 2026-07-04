/* Runtime dump - TSPDataManager
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSPDataManager : NSObject
{
    TSPObjectContext * _context;
    NSObject<OS_dispatch_queue> * _datasQueue;
    long long _nextNewIdentifier;
    struct hash_map<const long long, TSPData *__weak, TSP::ObjectIdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, TSPData *__weak> > > _identifierToDataMap;
    struct /* ? */ _digestToDataMap;
    NSObject<OS_dispatch_queue> * _temporaryDirectoryQueue;
    TSUTemporaryDirectory * _temporaryDirectory;
    TSUPathSet * _temporaryDirectoryPathSet;
    char _hasExternalReferences;
    NSObject<OS_dispatch_queue> * _externalReferenceRemovalQueue;
    NSObject<OS_dispatch_group> * _externalReferenceRemovalGroup;
}

@property (readonly, weak, nonatomic) TSPObjectContext * context;

+ (void)readWithChannel:(NSObject *)arg0 handler:(id /* block */)arg1;
+ (void)readWithChannelImpl:(id)arg0 handler:(id /* block */)arg1;
+ (void)readWithURL:(NSString *)arg0 handler:(id /* block */)arg1;
+ (char)requestDocumentResourcesUsingDataProvider:(NSObject *)arg0 packageMetadata:(TSPPackageMetadata *)arg1;

- (void)didCloseDocument;
- (char)prepareSaveWithOldPackage:(char)arg0 saveOperationState:(NSObject *)arg1;
- (void)didSaveWithSaveOperationState:(NSObject *)arg0;
- (void)enumerateDatasUsingBlock:(id /* block */)arg0;
- (NSURL *)checkForPersistenceWarningsWithPackageURL:(NSURL *)arg0;
- (void)removeExternalReferences;
- (NSString *)dataForIdentifier:(long long)arg0;
- (NSURL *)dataFromFileURL:(NSURL *)arg0 filename:(NSString *)arg1 useFileCoordination:(char)arg2;
- (NSURL *)dataFromAssetsLibraryURL:(NSURL *)arg0;
- (NSObject *)dataFromReadChannel:(NSObject *)arg0 filename:(NSString *)arg1;
- (void)coordinateReadingNewFileURL:(NSURL *)arg0 byAccessor:(NSObject *)arg1;
- (void)dataFromReadChannel:(NSObject *)arg0 filename:(NSString *)arg1 completion:(id /* block */)arg2;
- (void)dataFromAssetsLibraryURL:(NSURL *)arg0 completion:(id /* block */)arg1;
- (NSString *)temporaryPathForFilename:(NSString *)arg0;
- (NSData *)dataForExistingData:(NSData *)arg0 digest:(MBDigest *)arg1 filename:(NSString *)arg2 temporaryPath:(NSString *)arg3;
- (void)findExistingDataForReadChannel:(NSObject *)arg0 dataURL:(NSURL *)arg1 temporaryPath:(NSString *)arg2 shouldWriteIfFound:(char)arg3 completion:(id /* block */)arg4;
- (NSObject *)dataFromReadChannel:(NSObject *)arg0 filename:(NSString *)arg1 temporaryPath:(NSString *)arg2;
- (void)dataFromReadChannel:(NSObject *)arg0 filename:(NSString *)arg1 temporaryPath:(NSString *)arg2 completion:(id /* block */)arg3;
- (void)dataFromReadChannel:(NSObject *)arg0 filename:(NSString *)arg1 linkURLOrNil:(id)arg2 completion:(id /* block */)arg3;
- (char)linkTemporaryPath:(NSString *)arg0 fromURL:(NSURL *)arg1;
- (void)findExistingDataForReadChannel:(NSObject *)arg0 dataURL:(NSURL *)arg1 readHandler:(id /* block */)arg2 completion:(/* block */ id)arg3;
- (id)addNewDataForStorage:(TSPCachedDocumentResourceDataStorage *)arg0 digest:(MBDigest *)arg1 filename:(NSString *)arg2;
- (int)openTemporaryPath:(NSString *)arg0;
- (NSData *)dataForDigestImpl:(id)arg0 accessorBlock:(id /* block */)arg1;
- (NSString *)dataWithTemporaryPath:(NSString *)arg0 digest:(MBDigest *)arg1 filename:(NSString *)arg2;
- (NSData *)dataWithStorage:(TSPCachedDocumentResourceDataStorage *)arg0 digest:(MBDigest *)arg1 filename:(NSString *)arg2 skipDocumentResourcesLookup:(char)arg3 accessorBlock:(id /* block */)arg4;
- (void)addDataFromPackage:(id)arg0 packageURL:(NSURL *)arg1 documentResourceDataProvider:(TSPDocumentResourceDataProvider *)arg2 info:(struct DataInfo *)arg3 areExternalReferencesAllowed:(struct DataInfo)arg4;
- (NSData *)dataForIdentifierImpl:(long long)arg0;
- (void)removeExternalReferenceForData:(NSData *)arg0 storage:(TSWPStorage *)arg1;
- (NSString *)dataOrNilForIdentifier:(long long)arg0;
- (void)waitForRemoveExternalReferencesToComplete;
- (NSData *)dataForDigestImpl:(id)arg0 skipDocumentResourcesLookup:(char)arg1 accessorBlock:(id /* block */)arg2;
- (NSURL *)dataFromURL:(NSURL *)arg0 filename:(NSString *)arg1 useFileCoordination:(char)arg2;
- (void)dataFromFileURL:(NSURL *)arg0 filename:(NSString *)arg1 context:(TSPObjectContext *)arg2 completionQueue:(NSObject<OS_dispatch_queue> *)arg3 completion:(id /* block */)arg4;
- (NSObject *)dataFromReadChannel:(NSObject *)arg0 filename:(NSString *)arg1 linkURLOrNil:(id)arg2;
- (NSData *)dataFromNSData:(NSData *)arg0 filename:(NSString *)arg1;
- (id)documentResourceDataWithStorage:(TSPCachedDocumentResourceDataStorage *)arg0 digestString:(NSString *)arg1 filename:(NSString *)arg2;
- (NSURL *)remoteDataWithURL:(NSString *)arg0 digest:(MBDigest *)arg1 filename:(NSString *)arg2 canDownload:(char)arg3 downloadPriority:(int)arg4;
- (NSData *)copyData:(NSData *)arg0;
- (void)loadFromPackage:(id)arg0 packageURL:(NSURL *)arg1 documentResourceDataProvider:(TSPDocumentResourceDataProvider *)arg2 packageMetadata:(TSPPackageMetadata *)arg3 areExternalReferencesAllowed:(char)arg4;
- (NSURL *)dataFromExternalReferenceURL:(NSURL *)arg0 filename:(NSString *)arg1 useFileCoordination:(char)arg2;
- (NSData *)dataForDigest:(id)arg0;
- (void)dataForDigest:(id)arg0 queue:(NSObject *)arg1 completion:(id /* block */)arg2;
- (TSPObjectContext *)context;
- (TSPDataManager *)initWithContext:(TSPObjectContext *)arg0;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)removeFileAtPath:(NSString *)arg0;
- (void)addData:(NSData *)arg0;

@end
